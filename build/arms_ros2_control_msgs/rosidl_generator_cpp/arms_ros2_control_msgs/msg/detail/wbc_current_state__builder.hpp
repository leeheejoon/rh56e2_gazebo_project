// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_current_state.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace msg
{

namespace builder
{

class Init_WbcCurrentState_head_midpoint_gaze_active
{
public:
  explicit Init_WbcCurrentState_head_midpoint_gaze_active(::arms_ros2_control_msgs::msg::WbcCurrentState & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::msg::WbcCurrentState head_midpoint_gaze_active(::arms_ros2_control_msgs::msg::WbcCurrentState::_head_midpoint_gaze_active_type arg)
  {
    msg_.head_midpoint_gaze_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

class Init_WbcCurrentState_head_state
{
public:
  explicit Init_WbcCurrentState_head_state(::arms_ros2_control_msgs::msg::WbcCurrentState & msg)
  : msg_(msg)
  {}
  Init_WbcCurrentState_head_midpoint_gaze_active head_state(::arms_ros2_control_msgs::msg::WbcCurrentState::_head_state_type arg)
  {
    msg_.head_state = std::move(arg);
    return Init_WbcCurrentState_head_midpoint_gaze_active(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

class Init_WbcCurrentState_home_joint_reference_enabled
{
public:
  explicit Init_WbcCurrentState_home_joint_reference_enabled(::arms_ros2_control_msgs::msg::WbcCurrentState & msg)
  : msg_(msg)
  {}
  Init_WbcCurrentState_head_state home_joint_reference_enabled(::arms_ros2_control_msgs::msg::WbcCurrentState::_home_joint_reference_enabled_type arg)
  {
    msg_.home_joint_reference_enabled = std::move(arg);
    return Init_WbcCurrentState_head_state(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

class Init_WbcCurrentState_right_arm_state
{
public:
  explicit Init_WbcCurrentState_right_arm_state(::arms_ros2_control_msgs::msg::WbcCurrentState & msg)
  : msg_(msg)
  {}
  Init_WbcCurrentState_home_joint_reference_enabled right_arm_state(::arms_ros2_control_msgs::msg::WbcCurrentState::_right_arm_state_type arg)
  {
    msg_.right_arm_state = std::move(arg);
    return Init_WbcCurrentState_home_joint_reference_enabled(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

class Init_WbcCurrentState_left_arm_state
{
public:
  explicit Init_WbcCurrentState_left_arm_state(::arms_ros2_control_msgs::msg::WbcCurrentState & msg)
  : msg_(msg)
  {}
  Init_WbcCurrentState_right_arm_state left_arm_state(::arms_ros2_control_msgs::msg::WbcCurrentState::_left_arm_state_type arg)
  {
    msg_.left_arm_state = std::move(arg);
    return Init_WbcCurrentState_right_arm_state(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

class Init_WbcCurrentState_bimanual_state
{
public:
  explicit Init_WbcCurrentState_bimanual_state(::arms_ros2_control_msgs::msg::WbcCurrentState & msg)
  : msg_(msg)
  {}
  Init_WbcCurrentState_left_arm_state bimanual_state(::arms_ros2_control_msgs::msg::WbcCurrentState::_bimanual_state_type arg)
  {
    msg_.bimanual_state = std::move(arg);
    return Init_WbcCurrentState_left_arm_state(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

class Init_WbcCurrentState_body_state
{
public:
  explicit Init_WbcCurrentState_body_state(::arms_ros2_control_msgs::msg::WbcCurrentState & msg)
  : msg_(msg)
  {}
  Init_WbcCurrentState_bimanual_state body_state(::arms_ros2_control_msgs::msg::WbcCurrentState::_body_state_type arg)
  {
    msg_.body_state = std::move(arg);
    return Init_WbcCurrentState_bimanual_state(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

class Init_WbcCurrentState_base_state
{
public:
  Init_WbcCurrentState_base_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WbcCurrentState_body_state base_state(::arms_ros2_control_msgs::msg::WbcCurrentState::_base_state_type arg)
  {
    msg_.base_state = std::move(arg);
    return Init_WbcCurrentState_body_state(msg_);
  }

private:
  ::arms_ros2_control_msgs::msg::WbcCurrentState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::msg::WbcCurrentState>()
{
  return arms_ros2_control_msgs::msg::builder::Init_WbcCurrentState_base_state();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__BUILDER_HPP_
