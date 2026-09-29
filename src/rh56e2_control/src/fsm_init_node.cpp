#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

using namespace std::chrono_literals;

class FsmInitNode : public rclcpp::Node
{
public:
  FsmInitNode()
  : Node("fsm_init_node"),
    step_(0)
  {
    publisher_ =
      this->create_publisher<std_msgs::msg::Int32>(
        "/fsm_command",
        10);

    timer_ = this->create_wall_timer(
      500ms,
      std::bind(&FsmInitNode::initialize_fsm, this));

    RCLCPP_INFO(
      this->get_logger(),
      "FSM initialization node started.");
  }

private:
  void initialize_fsm()
  {
    // /fsm_command를 듣는 controller가 아직 없으면 기다린다.
    if (publisher_->get_subscription_count() == 0)
    {
      return;
    }

    // 1단계: HOLD
    if (step_ == 0)
    {
      std_msgs::msg::Int32 msg;
      msg.data = 2;

      publisher_->publish(msg);

      RCLCPP_INFO(
        this->get_logger(),
        "FSM -> HOLD");

      step_ = 1;
      return;
    }

    // 2단계: MOVEJ
    if (step_ == 1)
    {
      std_msgs::msg::Int32 msg;
      msg.data = 4;

      publisher_->publish(msg);

      RCLCPP_INFO(
        this->get_logger(),
        "FSM -> MOVEJ");

      step_ = 2;
      return;
    }

    // MOVEJ 명령을 보낸 뒤 0.5초 기다리고 종료
    if (step_ == 2)
    {
      RCLCPP_INFO(
        this->get_logger(),
        "FSM initialization complete.");

      rclcpp::shutdown();
    }
  }

  rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr
    publisher_;

  rclcpp::TimerBase::SharedPtr timer_;

  int step_;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  rclcpp::spin(
    std::make_shared<FsmInitNode>());

  return 0;
}