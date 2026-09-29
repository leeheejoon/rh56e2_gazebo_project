// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_capability.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/msg/detail/wbc_capability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_WbcCapability_head_midpoint_gaze_enabled
{
public:
  explicit Init_WbcCapability_head_midpoint_gaze_enabled(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::msg::WbcCapability head_midpoint_gaze_enabled(::arms_ros2_control_msgs::msg::WbcCapability::_head_midpoint_gaze_enabled_type arg)
  {
    msg_.head_midpoint_gaze_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_has_home_joint_reference
{
public:
  explicit Init_WbcCapability_has_home_joint_reference(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_head_midpoint_gaze_enabled has_home_joint_reference(::arms_ros2_control_msgs::msg::WbcCapability::_has_home_joint_reference_type arg)
  {
    msg_.has_home_joint_reference = std::move(arg);
    return Init_WbcCapability_head_midpoint_gaze_enabled(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_head_tracking_ee_enabled
{
public:
  explicit Init_WbcCapability_head_tracking_ee_enabled(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_has_home_joint_reference head_tracking_ee_enabled(::arms_ros2_control_msgs::msg::WbcCapability::_head_tracking_ee_enabled_type arg)
  {
    msg_.head_tracking_ee_enabled = std::move(arg);
    return Init_WbcCapability_has_home_joint_reference(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_body_tracking_ee_enabled
{
public:
  explicit Init_WbcCapability_body_tracking_ee_enabled(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_head_tracking_ee_enabled body_tracking_ee_enabled(::arms_ros2_control_msgs::msg::WbcCapability::_body_tracking_ee_enabled_type arg)
  {
    msg_.body_tracking_ee_enabled = std::move(arg);
    return Init_WbcCapability_head_tracking_ee_enabled(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_has_bimanual_coupling
{
public:
  explicit Init_WbcCapability_has_bimanual_coupling(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_body_tracking_ee_enabled has_bimanual_coupling(::arms_ros2_control_msgs::msg::WbcCapability::_has_bimanual_coupling_type arg)
  {
    msg_.has_bimanual_coupling = std::move(arg);
    return Init_WbcCapability_body_tracking_ee_enabled(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_has_custom_joint_lock
{
public:
  explicit Init_WbcCapability_has_custom_joint_lock(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_has_bimanual_coupling has_custom_joint_lock(::arms_ros2_control_msgs::msg::WbcCapability::_has_custom_joint_lock_type arg)
  {
    msg_.has_custom_joint_lock = std::move(arg);
    return Init_WbcCapability_has_bimanual_coupling(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_has_head_coupling
{
public:
  explicit Init_WbcCapability_has_head_coupling(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_has_custom_joint_lock has_head_coupling(::arms_ros2_control_msgs::msg::WbcCapability::_has_head_coupling_type arg)
  {
    msg_.has_head_coupling = std::move(arg);
    return Init_WbcCapability_has_custom_joint_lock(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_has_waist_lock
{
public:
  explicit Init_WbcCapability_has_waist_lock(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_has_head_coupling has_waist_lock(::arms_ros2_control_msgs::msg::WbcCapability::_has_waist_lock_type arg)
  {
    msg_.has_waist_lock = std::move(arg);
    return Init_WbcCapability_has_head_coupling(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_has_body_relative_constraint
{
public:
  explicit Init_WbcCapability_has_body_relative_constraint(::arms_ros2_control_msgs::msg::WbcCapability & msg)
  : msg_(msg)
  {}
  Init_WbcCapability_has_waist_lock has_body_relative_constraint(::arms_ros2_control_msgs::msg::WbcCapability::_has_body_relative_constraint_type arg)
  {
    msg_.has_body_relative_constraint = std::move(arg);
    return Init_WbcCapability_has_waist_lock(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

class Init_WbcCapability_has_mobile_base
{
public:
  Init_WbcCapability_has_mobile_base()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WbcCapability_has_body_relative_constraint has_mobile_base(::arms_ros2_control_msgs::msg::WbcCapability::_has_mobile_base_type arg)
  {
    msg_.has_mobile_base = std::move(arg);
    return Init_WbcCapability_has_body_relative_constraint(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCapability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::msg::WbcCapability>()
{
  return arms_ros2_control_msgs::msg::builder::Init_WbcCapability_has_mobile_base();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__BUILDER_HPP_
