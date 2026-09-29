// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:msg/LinearMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/linear_message.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/msg/detail/linear_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_LinearMessage_ik_type
{
public:
  explicit Init_LinearMessage_ik_type(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::msg::LinearMessage ik_type(::arms_ros2_control_msgs::msg::LinearMessage::_ik_type_type arg)
  {
    msg_.ik_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_arm_name
{
public:
  explicit Init_LinearMessage_arm_name(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_ik_type arm_name(::arms_ros2_control_msgs::msg::LinearMessage::_arm_name_type arg)
  {
    msg_.arm_name = std::move(arg);
    return Init_LinearMessage_ik_type(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_frame_id
{
public:
  explicit Init_LinearMessage_frame_id(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_arm_name frame_id(::arms_ros2_control_msgs::msg::LinearMessage::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_LinearMessage_arm_name(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_time_mode
{
public:
  explicit Init_LinearMessage_time_mode(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_frame_id time_mode(::arms_ros2_control_msgs::msg::LinearMessage::_time_mode_type arg)
  {
    msg_.time_mode = std::move(arg);
    return Init_LinearMessage_frame_id(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_duration
{
public:
  explicit Init_LinearMessage_duration(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_time_mode duration(::arms_ros2_control_msgs::msg::LinearMessage::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_LinearMessage_time_mode(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_max_angular_jerk
{
public:
  explicit Init_LinearMessage_max_angular_jerk(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_duration max_angular_jerk(::arms_ros2_control_msgs::msg::LinearMessage::_max_angular_jerk_type arg)
  {
    msg_.max_angular_jerk = std::move(arg);
    return Init_LinearMessage_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_max_angular_acceleration
{
public:
  explicit Init_LinearMessage_max_angular_acceleration(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_max_angular_jerk max_angular_acceleration(::arms_ros2_control_msgs::msg::LinearMessage::_max_angular_acceleration_type arg)
  {
    msg_.max_angular_acceleration = std::move(arg);
    return Init_LinearMessage_max_angular_jerk(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_max_angular_velocity
{
public:
  explicit Init_LinearMessage_max_angular_velocity(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_max_angular_acceleration max_angular_velocity(::arms_ros2_control_msgs::msg::LinearMessage::_max_angular_velocity_type arg)
  {
    msg_.max_angular_velocity = std::move(arg);
    return Init_LinearMessage_max_angular_acceleration(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_max_linear_jerk
{
public:
  explicit Init_LinearMessage_max_linear_jerk(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_max_angular_velocity max_linear_jerk(::arms_ros2_control_msgs::msg::LinearMessage::_max_linear_jerk_type arg)
  {
    msg_.max_linear_jerk = std::move(arg);
    return Init_LinearMessage_max_angular_velocity(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_max_linear_acceleration
{
public:
  explicit Init_LinearMessage_max_linear_acceleration(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_max_linear_jerk max_linear_acceleration(::arms_ros2_control_msgs::msg::LinearMessage::_max_linear_acceleration_type arg)
  {
    msg_.max_linear_acceleration = std::move(arg);
    return Init_LinearMessage_max_linear_jerk(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_max_linear_velocity
{
public:
  explicit Init_LinearMessage_max_linear_velocity(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_max_linear_acceleration max_linear_velocity(::arms_ros2_control_msgs::msg::LinearMessage::_max_linear_velocity_type arg)
  {
    msg_.max_linear_velocity = std::move(arg);
    return Init_LinearMessage_max_linear_acceleration(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_right_endpoint
{
public:
  explicit Init_LinearMessage_right_endpoint(::arms_ros2_control_msgs::msg::LinearMessage & msg)
  : msg_(msg)
  {}
  Init_LinearMessage_max_linear_velocity right_endpoint(::arms_ros2_control_msgs::msg::LinearMessage::_right_endpoint_type arg)
  {
    msg_.right_endpoint = std::move(arg);
    return Init_LinearMessage_max_linear_velocity(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

class Init_LinearMessage_endpoint
{
public:
  Init_LinearMessage_endpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearMessage_right_endpoint endpoint(::arms_ros2_control_msgs::msg::LinearMessage::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_LinearMessage_right_endpoint(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::LinearMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::msg::LinearMessage>()
{
  return arms_ros2_control_msgs::msg::builder::Init_LinearMessage_endpoint();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__BUILDER_HPP_
