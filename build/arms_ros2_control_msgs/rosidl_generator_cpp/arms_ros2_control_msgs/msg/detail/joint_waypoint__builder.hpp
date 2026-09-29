// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/joint_waypoint.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointWaypoint_total_time
{
public:
  explicit Init_JointWaypoint_total_time(::arms_ros2_control_msgs::msg::JointWaypoint & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::msg::JointWaypoint total_time(::arms_ros2_control_msgs::msg::JointWaypoint::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

class Init_JointWaypoint_time_mode
{
public:
  explicit Init_JointWaypoint_time_mode(::arms_ros2_control_msgs::msg::JointWaypoint & msg)
  : msg_(msg)
  {}
  Init_JointWaypoint_total_time time_mode(::arms_ros2_control_msgs::msg::JointWaypoint::_time_mode_type arg)
  {
    msg_.time_mode = std::move(arg);
    return Init_JointWaypoint_total_time(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

class Init_JointWaypoint_max_jerk
{
public:
  explicit Init_JointWaypoint_max_jerk(::arms_ros2_control_msgs::msg::JointWaypoint & msg)
  : msg_(msg)
  {}
  Init_JointWaypoint_time_mode max_jerk(::arms_ros2_control_msgs::msg::JointWaypoint::_max_jerk_type arg)
  {
    msg_.max_jerk = std::move(arg);
    return Init_JointWaypoint_time_mode(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

class Init_JointWaypoint_max_acceleration
{
public:
  explicit Init_JointWaypoint_max_acceleration(::arms_ros2_control_msgs::msg::JointWaypoint & msg)
  : msg_(msg)
  {}
  Init_JointWaypoint_max_jerk max_acceleration(::arms_ros2_control_msgs::msg::JointWaypoint::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_JointWaypoint_max_jerk(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

class Init_JointWaypoint_max_velocity
{
public:
  explicit Init_JointWaypoint_max_velocity(::arms_ros2_control_msgs::msg::JointWaypoint & msg)
  : msg_(msg)
  {}
  Init_JointWaypoint_max_acceleration max_velocity(::arms_ros2_control_msgs::msg::JointWaypoint::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_JointWaypoint_max_acceleration(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

class Init_JointWaypoint_blend_ratio_percent
{
public:
  explicit Init_JointWaypoint_blend_ratio_percent(::arms_ros2_control_msgs::msg::JointWaypoint & msg)
  : msg_(msg)
  {}
  Init_JointWaypoint_max_velocity blend_ratio_percent(::arms_ros2_control_msgs::msg::JointWaypoint::_blend_ratio_percent_type arg)
  {
    msg_.blend_ratio_percent = std::move(arg);
    return Init_JointWaypoint_max_velocity(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

class Init_JointWaypoint_velocity
{
public:
  explicit Init_JointWaypoint_velocity(::arms_ros2_control_msgs::msg::JointWaypoint & msg)
  : msg_(msg)
  {}
  Init_JointWaypoint_blend_ratio_percent velocity(::arms_ros2_control_msgs::msg::JointWaypoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointWaypoint_blend_ratio_percent(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

class Init_JointWaypoint_position
{
public:
  Init_JointWaypoint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointWaypoint_velocity position(::arms_ros2_control_msgs::msg::JointWaypoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointWaypoint_velocity(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::JointWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::msg::JointWaypoint>()
{
  return arms_ros2_control_msgs::msg::builder::Init_JointWaypoint_position();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__BUILDER_HPP_
