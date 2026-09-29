#include <chrono>
#include <memory>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"

using namespace std::chrono_literals;

class HandCommandNode : public rclcpp::Node
{
public:                                                                         //public 영역에 있는 함수는 class 외부에서도 접근 가능.
  HandCommandNode()                                                             // 생성자, 객체가 생성됐을 때 호출되는 함수
  : Node("hand_command_node")                                                   // 부모 클래스인 rclcpp::Node의 생성자를 호출하여 노드 이름을 "hand_command_node"로 설정 
  {
    publisher_ =
      this->create_publisher<std_msgs::msg::Float64MultiArray>(
        "/hand_joint_controller/target_joint_position",
        10);

    timer_ = this->create_wall_timer(
      2s,
      std::bind(&HandCommandNode::send_command, this));
  }

private:
  void send_command()
  {
    std_msgs::msg::Float64MultiArray msg;

    msg.data = {
      0.4,  // thumb_joint1
      0.4,  // thumb_joint2
      0.6,  // index_joint
      0.6,  // middle_joint
      0.6,  // ring_joint
      0.6   // pinky_joint
    };

    publisher_->publish(msg);

    RCLCPP_INFO(this->get_logger(), "RH56E2 joint command sent.");

    timer_->cancel();
  }

  rclcpp::Publisher<
    std_msgs::msg::Float64MultiArray>::SharedPtr publisher_;

  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  rclcpp::spin(
    std::make_shared<HandCommandNode>());

  rclcpp::shutdown();

  return 0;
}