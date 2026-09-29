// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:msg/CircleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/circle_message.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/msg/detail/circle_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CircleMessage_ik_type
{
public:
  explicit Init_CircleMessage_ik_type(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::msg::CircleMessage ik_type(::arms_ros2_control_msgs::msg::CircleMessage::_ik_type_type arg)
  {
    msg_.ik_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_arm_name
{
public:
  explicit Init_CircleMessage_arm_name(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_ik_type arm_name(::arms_ros2_control_msgs::msg::CircleMessage::_arm_name_type arg)
  {
    msg_.arm_name = std::move(arg);
    return Init_CircleMessage_ik_type(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_frame_id
{
public:
  explicit Init_CircleMessage_frame_id(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_arm_name frame_id(::arms_ros2_control_msgs::msg::CircleMessage::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_CircleMessage_arm_name(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_time_mode
{
public:
  explicit Init_CircleMessage_time_mode(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_frame_id time_mode(::arms_ros2_control_msgs::msg::CircleMessage::_time_mode_type arg)
  {
    msg_.time_mode = std::move(arg);
    return Init_CircleMessage_frame_id(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_use_slerp_for_orientation
{
public:
  explicit Init_CircleMessage_use_slerp_for_orientation(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_time_mode use_slerp_for_orientation(::arms_ros2_control_msgs::msg::CircleMessage::_use_slerp_for_orientation_type arg)
  {
    msg_.use_slerp_for_orientation = std::move(arg);
    return Init_CircleMessage_time_mode(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_use_three_point_method
{
public:
  explicit Init_CircleMessage_use_three_point_method(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_use_slerp_for_orientation use_three_point_method(::arms_ros2_control_msgs::msg::CircleMessage::_use_three_point_method_type arg)
  {
    msg_.use_three_point_method = std::move(arg);
    return Init_CircleMessage_use_slerp_for_orientation(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_duration
{
public:
  explicit Init_CircleMessage_duration(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_use_three_point_method duration(::arms_ros2_control_msgs::msg::CircleMessage::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_CircleMessage_use_three_point_method(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_max_angular_jerk
{
public:
  explicit Init_CircleMessage_max_angular_jerk(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_duration max_angular_jerk(::arms_ros2_control_msgs::msg::CircleMessage::_max_angular_jerk_type arg)
  {
    msg_.max_angular_jerk = std::move(arg);
    return Init_CircleMessage_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_max_angular_acceleration
{
public:
  explicit Init_CircleMessage_max_angular_acceleration(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_max_angular_jerk max_angular_acceleration(::arms_ros2_control_msgs::msg::CircleMessage::_max_angular_acceleration_type arg)
  {
    msg_.max_angular_acceleration = std::move(arg);
    return Init_CircleMessage_max_angular_jerk(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_max_angular_velocity
{
public:
  explicit Init_CircleMessage_max_angular_velocity(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_max_angular_acceleration max_angular_velocity(::arms_ros2_control_msgs::msg::CircleMessage::_max_angular_velocity_type arg)
  {
    msg_.max_angular_velocity = std::move(arg);
    return Init_CircleMessage_max_angular_acceleration(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_max_linear_jerk
{
public:
  explicit Init_CircleMessage_max_linear_jerk(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_max_angular_velocity max_linear_jerk(::arms_ros2_control_msgs::msg::CircleMessage::_max_linear_jerk_type arg)
  {
    msg_.max_linear_jerk = std::move(arg);
    return Init_CircleMessage_max_angular_velocity(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_max_linear_acceleration
{
public:
  explicit Init_CircleMessage_max_linear_acceleration(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_max_linear_jerk max_linear_acceleration(::arms_ros2_control_msgs::msg::CircleMessage::_max_linear_acceleration_type arg)
  {
    msg_.max_linear_acceleration = std::move(arg);
    return Init_CircleMessage_max_linear_jerk(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_max_linear_velocity
{
public:
  explicit Init_CircleMessage_max_linear_velocity(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_max_linear_acceleration max_linear_velocity(::arms_ros2_control_msgs::msg::CircleMessage::_max_linear_velocity_type arg)
  {
    msg_.max_linear_velocity = std::move(arg);
    return Init_CircleMessage_max_linear_acceleration(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_right_rotate_angle
{
public:
  explicit Init_CircleMessage_right_rotate_angle(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_max_linear_velocity right_rotate_angle(::arms_ros2_control_msgs::msg::CircleMessage::_right_rotate_angle_type arg)
  {
    msg_.right_rotate_angle = std::move(arg);
    return Init_CircleMessage_max_linear_velocity(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_right_axis
{
public:
  explicit Init_CircleMessage_right_axis(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_right_rotate_angle right_axis(::arms_ros2_control_msgs::msg::CircleMessage::_right_axis_type arg)
  {
    msg_.right_axis = std::move(arg);
    return Init_CircleMessage_right_rotate_angle(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_right_center
{
public:
  explicit Init_CircleMessage_right_center(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_right_axis right_center(::arms_ros2_control_msgs::msg::CircleMessage::_right_center_type arg)
  {
    msg_.right_center = std::move(arg);
    return Init_CircleMessage_right_axis(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_rotate_angle
{
public:
  explicit Init_CircleMessage_rotate_angle(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_right_center rotate_angle(::arms_ros2_control_msgs::msg::CircleMessage::_rotate_angle_type arg)
  {
    msg_.rotate_angle = std::move(arg);
    return Init_CircleMessage_right_center(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_axis
{
public:
  explicit Init_CircleMessage_axis(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_rotate_angle axis(::arms_ros2_control_msgs::msg::CircleMessage::_axis_type arg)
  {
    msg_.axis = std::move(arg);
    return Init_CircleMessage_rotate_angle(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_center
{
public:
  explicit Init_CircleMessage_center(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_axis center(::arms_ros2_control_msgs::msg::CircleMessage::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_CircleMessage_axis(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_right_endpoint
{
public:
  explicit Init_CircleMessage_right_endpoint(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_center right_endpoint(::arms_ros2_control_msgs::msg::CircleMessage::_right_endpoint_type arg)
  {
    msg_.right_endpoint = std::move(arg);
    return Init_CircleMessage_center(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_right_midpoint
{
public:
  explicit Init_CircleMessage_right_midpoint(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_right_endpoint right_midpoint(::arms_ros2_control_msgs::msg::CircleMessage::_right_midpoint_type arg)
  {
    msg_.right_midpoint = std::move(arg);
    return Init_CircleMessage_right_endpoint(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_endpoint
{
public:
  explicit Init_CircleMessage_endpoint(::arms_ros2_control_msgs::msg::CircleMessage & msg)
  : msg_(msg)
  {}
  Init_CircleMessage_right_midpoint endpoint(::arms_ros2_control_msgs::msg::CircleMessage::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_CircleMessage_right_midpoint(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

class Init_CircleMessage_midpoint
{
public:
  Init_CircleMessage_midpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CircleMessage_endpoint midpoint(::arms_ros2_control_msgs::msg::CircleMessage::_midpoint_type arg)
  {
    msg_.midpoint = std::move(arg);
    return Init_CircleMessage_endpoint(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::CircleMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::msg::CircleMessage>()
{
  return arms_ros2_control_msgs::msg::builder::Init_CircleMessage_midpoint();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__BUILDER_HPP_
