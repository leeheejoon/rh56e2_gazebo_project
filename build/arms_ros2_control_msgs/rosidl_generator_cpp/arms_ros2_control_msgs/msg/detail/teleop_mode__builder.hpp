// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/teleop_mode.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/msg/detail/teleop_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_TeleopMode_speed_scale
{
public:
  explicit Init_TeleopMode_speed_scale(::arms_ros2_control_msgs::msg::TeleopMode & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::msg::TeleopMode speed_scale(::arms_ros2_control_msgs::msg::TeleopMode::_speed_scale_type arg)
  {
    msg_.speed_scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::TeleopMode msg_;
};

class Init_TeleopMode_speed_level
{
public:
  explicit Init_TeleopMode_speed_level(::arms_ros2_control_msgs::msg::TeleopMode & msg)
  : msg_(msg)
  {}
  Init_TeleopMode_speed_scale speed_level(::arms_ros2_control_msgs::msg::TeleopMode::_speed_level_type arg)
  {
    msg_.speed_level = std::move(arg);
    return Init_TeleopMode_speed_scale(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::TeleopMode msg_;
};

class Init_TeleopMode_mirror_movement
{
public:
  explicit Init_TeleopMode_mirror_movement(::arms_ros2_control_msgs::msg::TeleopMode & msg)
  : msg_(msg)
  {}
  Init_TeleopMode_speed_level mirror_movement(::arms_ros2_control_msgs::msg::TeleopMode::_mirror_movement_type arg)
  {
    msg_.mirror_movement = std::move(arg);
    return Init_TeleopMode_speed_level(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::TeleopMode msg_;
};

class Init_TeleopMode_control_mode
{
public:
  explicit Init_TeleopMode_control_mode(::arms_ros2_control_msgs::msg::TeleopMode & msg)
  : msg_(msg)
  {}
  Init_TeleopMode_mirror_movement control_mode(::arms_ros2_control_msgs::msg::TeleopMode::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_TeleopMode_mirror_movement(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::TeleopMode msg_;
};

class Init_TeleopMode_active
{
public:
  explicit Init_TeleopMode_active(::arms_ros2_control_msgs::msg::TeleopMode & msg)
  : msg_(msg)
  {}
  Init_TeleopMode_control_mode active(::arms_ros2_control_msgs::msg::TeleopMode::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_TeleopMode_control_mode(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::TeleopMode msg_;
};

class Init_TeleopMode_stamp
{
public:
  Init_TeleopMode_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleopMode_active stamp(::arms_ros2_control_msgs::msg::TeleopMode::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TeleopMode_active(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::TeleopMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::msg::TeleopMode>()
{
  return arms_ros2_control_msgs::msg::builder::Init_TeleopMode_stamp();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__BUILDER_HPP_
