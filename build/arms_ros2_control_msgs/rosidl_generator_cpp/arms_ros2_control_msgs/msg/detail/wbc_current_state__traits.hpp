// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_current_state.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arms_ros2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WbcCurrentState & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_state
  {
    out << "base_state: ";
    rosidl_generator_traits::value_to_yaml(msg.base_state, out);
    out << ", ";
  }

  // member: body_state
  {
    out << "body_state: ";
    rosidl_generator_traits::value_to_yaml(msg.body_state, out);
    out << ", ";
  }

  // member: bimanual_state
  {
    out << "bimanual_state: ";
    rosidl_generator_traits::value_to_yaml(msg.bimanual_state, out);
    out << ", ";
  }

  // member: left_arm_state
  {
    out << "left_arm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.left_arm_state, out);
    out << ", ";
  }

  // member: right_arm_state
  {
    out << "right_arm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.right_arm_state, out);
    out << ", ";
  }

  // member: home_joint_reference_enabled
  {
    out << "home_joint_reference_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.home_joint_reference_enabled, out);
    out << ", ";
  }

  // member: head_state
  {
    out << "head_state: ";
    rosidl_generator_traits::value_to_yaml(msg.head_state, out);
    out << ", ";
  }

  // member: head_midpoint_gaze_active
  {
    out << "head_midpoint_gaze_active: ";
    rosidl_generator_traits::value_to_yaml(msg.head_midpoint_gaze_active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WbcCurrentState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_state: ";
    rosidl_generator_traits::value_to_yaml(msg.base_state, out);
    out << "\n";
  }

  // member: body_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_state: ";
    rosidl_generator_traits::value_to_yaml(msg.body_state, out);
    out << "\n";
  }

  // member: bimanual_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bimanual_state: ";
    rosidl_generator_traits::value_to_yaml(msg.bimanual_state, out);
    out << "\n";
  }

  // member: left_arm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_arm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.left_arm_state, out);
    out << "\n";
  }

  // member: right_arm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_arm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.right_arm_state, out);
    out << "\n";
  }

  // member: home_joint_reference_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_joint_reference_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.home_joint_reference_enabled, out);
    out << "\n";
  }

  // member: head_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_state: ";
    rosidl_generator_traits::value_to_yaml(msg.head_state, out);
    out << "\n";
  }

  // member: head_midpoint_gaze_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_midpoint_gaze_active: ";
    rosidl_generator_traits::value_to_yaml(msg.head_midpoint_gaze_active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WbcCurrentState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace arms_ros2_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arms_ros2_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arms_ros2_control_msgs::msg::WbcCurrentState & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::msg::WbcCurrentState & msg)
{
  return arms_ros2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::msg::WbcCurrentState>()
{
  return "arms_ros2_control_msgs::msg::WbcCurrentState";
}

template<>
inline const char * name<arms_ros2_control_msgs::msg::WbcCurrentState>()
{
  return "arms_ros2_control_msgs/msg/WbcCurrentState";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::msg::WbcCurrentState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::msg::WbcCurrentState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arms_ros2_control_msgs::msg::WbcCurrentState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__TRAITS_HPP_
