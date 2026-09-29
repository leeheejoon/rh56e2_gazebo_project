// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:msg/Inputs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/inputs.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/msg/detail/inputs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Inputs_hand_command
{
public:
  explicit Init_Inputs_hand_command(::arms_ros2_control_msgs::msg::Inputs & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::msg::Inputs hand_command(::arms_ros2_control_msgs::msg::Inputs::_hand_command_type arg)
  {
    msg_.hand_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

class Init_Inputs_target
{
public:
  explicit Init_Inputs_target(::arms_ros2_control_msgs::msg::Inputs & msg)
  : msg_(msg)
  {}
  Init_Inputs_hand_command target(::arms_ros2_control_msgs::msg::Inputs::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Inputs_hand_command(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

class Init_Inputs_yaw
{
public:
  explicit Init_Inputs_yaw(::arms_ros2_control_msgs::msg::Inputs & msg)
  : msg_(msg)
  {}
  Init_Inputs_target yaw(::arms_ros2_control_msgs::msg::Inputs::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Inputs_target(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

class Init_Inputs_pitch
{
public:
  explicit Init_Inputs_pitch(::arms_ros2_control_msgs::msg::Inputs & msg)
  : msg_(msg)
  {}
  Init_Inputs_yaw pitch(::arms_ros2_control_msgs::msg::Inputs::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Inputs_yaw(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

class Init_Inputs_roll
{
public:
  explicit Init_Inputs_roll(::arms_ros2_control_msgs::msg::Inputs & msg)
  : msg_(msg)
  {}
  Init_Inputs_pitch roll(::arms_ros2_control_msgs::msg::Inputs::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Inputs_pitch(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

class Init_Inputs_z
{
public:
  explicit Init_Inputs_z(::arms_ros2_control_msgs::msg::Inputs & msg)
  : msg_(msg)
  {}
  Init_Inputs_roll z(::arms_ros2_control_msgs::msg::Inputs::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Inputs_roll(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

class Init_Inputs_y
{
public:
  explicit Init_Inputs_y(::arms_ros2_control_msgs::msg::Inputs & msg)
  : msg_(msg)
  {}
  Init_Inputs_z y(::arms_ros2_control_msgs::msg::Inputs::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Inputs_z(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

class Init_Inputs_x
{
public:
  Init_Inputs_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Inputs_y x(::arms_ros2_control_msgs::msg::Inputs::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Inputs_y(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::Inputs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::msg::Inputs>()
{
  return arms_ros2_control_msgs::msg::builder::Init_Inputs_x();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__BUILDER_HPP_
