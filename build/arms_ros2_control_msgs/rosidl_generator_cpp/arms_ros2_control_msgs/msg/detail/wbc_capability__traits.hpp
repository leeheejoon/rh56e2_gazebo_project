// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_capability.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/msg/detail/wbc_capability__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arms_ros2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WbcCapability & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_mobile_base
  {
    out << "has_mobile_base: ";
    rosidl_generator_traits::value_to_yaml(msg.has_mobile_base, out);
    out << ", ";
  }

  // member: has_body_relative_constraint
  {
    out << "has_body_relative_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.has_body_relative_constraint, out);
    out << ", ";
  }

  // member: has_waist_lock
  {
    out << "has_waist_lock: ";
    rosidl_generator_traits::value_to_yaml(msg.has_waist_lock, out);
    out << ", ";
  }

  // member: has_head_coupling
  {
    out << "has_head_coupling: ";
    rosidl_generator_traits::value_to_yaml(msg.has_head_coupling, out);
    out << ", ";
  }

  // member: has_custom_joint_lock
  {
    out << "has_custom_joint_lock: ";
    rosidl_generator_traits::value_to_yaml(msg.has_custom_joint_lock, out);
    out << ", ";
  }

  // member: has_bimanual_coupling
  {
    out << "has_bimanual_coupling: ";
    rosidl_generator_traits::value_to_yaml(msg.has_bimanual_coupling, out);
    out << ", ";
  }

  // member: body_tracking_ee_enabled
  {
    out << "body_tracking_ee_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.body_tracking_ee_enabled, out);
    out << ", ";
  }

  // member: head_tracking_ee_enabled
  {
    out << "head_tracking_ee_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.head_tracking_ee_enabled, out);
    out << ", ";
  }

  // member: has_home_joint_reference
  {
    out << "has_home_joint_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.has_home_joint_reference, out);
    out << ", ";
  }

  // member: head_midpoint_gaze_enabled
  {
    out << "head_midpoint_gaze_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.head_midpoint_gaze_enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WbcCapability & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_mobile_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_mobile_base: ";
    rosidl_generator_traits::value_to_yaml(msg.has_mobile_base, out);
    out << "\n";
  }

  // member: has_body_relative_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_body_relative_constraint: ";
    rosidl_generator_traits::value_to_yaml(msg.has_body_relative_constraint, out);
    out << "\n";
  }

  // member: has_waist_lock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_waist_lock: ";
    rosidl_generator_traits::value_to_yaml(msg.has_waist_lock, out);
    out << "\n";
  }

  // member: has_head_coupling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_head_coupling: ";
    rosidl_generator_traits::value_to_yaml(msg.has_head_coupling, out);
    out << "\n";
  }

  // member: has_custom_joint_lock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_custom_joint_lock: ";
    rosidl_generator_traits::value_to_yaml(msg.has_custom_joint_lock, out);
    out << "\n";
  }

  // member: has_bimanual_coupling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_bimanual_coupling: ";
    rosidl_generator_traits::value_to_yaml(msg.has_bimanual_coupling, out);
    out << "\n";
  }

  // member: body_tracking_ee_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_tracking_ee_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.body_tracking_ee_enabled, out);
    out << "\n";
  }

  // member: head_tracking_ee_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_tracking_ee_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.head_tracking_ee_enabled, out);
    out << "\n";
  }

  // member: has_home_joint_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_home_joint_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.has_home_joint_reference, out);
    out << "\n";
  }

  // member: head_midpoint_gaze_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_midpoint_gaze_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.head_midpoint_gaze_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WbcCapability & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::msg::WbcCapability & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::msg::WbcCapability & msg)
{
  return arms_ros2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::msg::WbcCapability>()
{
  return "arms_ros2_control_msgs::msg::WbcCapability";
}

template<>
inline const char * name<arms_ros2_control_msgs::msg::WbcCapability>()
{
  return "arms_ros2_control_msgs/msg/WbcCapability";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::msg::WbcCapability>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::msg::WbcCapability>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arms_ros2_control_msgs::msg::WbcCapability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__TRAITS_HPP_
