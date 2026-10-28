#include <algorithm>
#include <chrono>
#include <cmath>
#include <string>
#include <unordered_map>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"

using namespace std::chrono_literals;

class HandControlNode : public rclcpp::Node
{
public:
  HandControlNode()
  : Node("hand_control_node")
  {
    // 1. 목표 관절각을 보내는 발행자
    command_pub_ =
      create_publisher<std_msgs::msg::Float64MultiArray>(
        "/hand_joint_controller/target_joint_position", 10);

    // 2. 현재 관절 상태를 받는 구독자
    state_sub_ =
      create_subscription<sensor_msgs::msg::JointState>(
        "/joint_states",
        rclcpp::SensorDataQoS(),
        [this](sensor_msgs::msg::JointState::ConstSharedPtr msg)
        {
          receive_state(*msg);
        });

    // 3. 1초마다 저장된 상태를 확인하고 제어 로직 실행
    timer_ = create_wall_timer(
      1s, [this]() { control_step(); });
  }

private:
  // 노드 실행 중 고정 목표 관절각은 한 번만 발행
  bool command_sent_ = false;

  // 엄지 첫 번째 관절
  double thumb1_angle = 0.0;
  double thumb1_velocity = 0.0;
  double thumb1_force = 0.0;

  // 엄지 두 번째 관절
  double thumb2_angle = 0.0;
  double thumb2_velocity = 0.0;
  double thumb2_force = 0.0;

  // 검지
  double index_angle = 0.0;
  double index_velocity = 0.0;
  double index_force = 0.0;

  // 중지
  double middle_angle = 0.0;
  double middle_velocity = 0.0;
  double middle_force = 0.0;

  // 약지
  double ring_angle = 0.0;
  double ring_velocity = 0.0;
  double ring_force = 0.0;

  // 소지
  double pinky_angle = 0.0;
  double pinky_velocity = 0.0;
  double pinky_force = 0.0;
  
  // 상태 값들을 각 관절 변수들에 저장
  void receive_state(const sensor_msgs::msg::JointState & msg)
  {
    // 메시지에 들어 있는 관절을 하나씩 확인
    for (std::size_t i = 0; i < msg.name.size(); ++i)
    {
      // 해당 관절의 각도·속도·힘 데이터가 없으면 건너뜀
      if (i >= msg.position.size() ||
          i >= msg.velocity.size() ||
          i >= msg.effort.size()) {
        continue;
      }

      if (msg.name[i] == "thumb_joint1") {
        thumb1_angle = msg.position[i];
        thumb1_velocity = msg.velocity[i];
        thumb1_force = msg.effort[i];
      }
      else if (msg.name[i] == "thumb_joint2") {
        thumb2_angle = msg.position[i];
        thumb2_velocity = msg.velocity[i];
        thumb2_force = msg.effort[i];
      }
      else if (msg.name[i] == "index_joint") {
        index_angle = msg.position[i];
        index_velocity = msg.velocity[i];
        index_force = msg.effort[i];
      }
      else if (msg.name[i] == "middle_joint") {
        middle_angle = msg.position[i];
        middle_velocity = msg.velocity[i];
        middle_force = msg.effort[i];
      }
      else if (msg.name[i] == "ring_joint") {
        ring_angle = msg.position[i];
        ring_velocity = msg.velocity[i];
        ring_force = msg.effort[i];
      }
      else if (msg.name[i] == "pinky_joint") {
        pinky_angle = msg.position[i];
        pinky_velocity = msg.velocity[i];
        pinky_force = msg.effort[i];
      }
    }
    
  }

  void control_step()
  {
    RCLCPP_INFO(
      get_logger(),
      "엄지1 각도: %.3f, 엄지2 각도: %.3f, 검지 각도: %.3f, 중지 각도: %.3f, 약지 각도: %.3f, 소지 각도: %.3f",
      thumb1_angle, thumb2_angle, index_angle, middle_angle, ring_angle, pinky_angle);

    RCLCPP_INFO(
      get_logger(),
      "엄지1 힘: %.3f, 엄지2 힘: %.3f, 검지 힘: %.3f, 중지 힘: %.3f, 약지 힘: %.3f, 소지 힘: %.3f",
      thumb1_force, thumb2_force, index_force, middle_force, ring_force, pinky_force);

    // 필요한 제어 판단에서 변수 사용
    // index_angle     : 검지 관절각
    // index_velocity  : 검지 속도
    // index_force     : 검지 힘 원시값

    // 상태 출력은 계속하고, 목표각은 구독자가 연결된 뒤 한 번만 발행.
    // MOVEJ 초기화가 완료된 후 이 노드를 실행해야 한다.
    if (command_sent_ || command_pub_->get_subscription_count() == 0) {
      return;
    }

    std_msgs::msg::Float64MultiArray msg;

    msg.data = {
      0.4,  // thumb_joint1
      0.4,  // thumb_joint2
      0.6,  // index_joint
      0.6,  // middle_joint
      0.6,  // ring_joint
      0.6   // pinky_joint
    };

    command_pub_->publish(msg);
    command_sent_ = true;
    RCLCPP_INFO(get_logger(), "목표 관절각을 1회 발행했습니다.");
    
  }



  rclcpp::Publisher<
    std_msgs::msg::Float64MultiArray>::SharedPtr command_pub_;

  rclcpp::Subscription<
    sensor_msgs::msg::JointState>::SharedPtr state_sub_;

  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HandControlNode>());
  rclcpp::shutdown();
  return 0;
}
