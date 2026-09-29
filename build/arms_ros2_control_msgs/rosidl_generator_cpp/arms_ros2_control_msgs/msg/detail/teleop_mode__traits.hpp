// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/teleop_mode.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/msg/detail/teleop_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeleopMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: mirror_movement
  {
    out << "mirror_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_movement, out);
    out << ", ";
  }

  // member: speed_level
  {
    out << "speed_level: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_level, out);
    out << ", ";
  }

  // member: speed_scale
  {
    out << "speed_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_scale, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleopMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: mirror_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirror_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_movement, out);
    out << "\n";
  }

  // member: speed_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_level: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_level, out);
    out << "\n";
  }

  // member: speed_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_scale, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleopMode & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::msg::TeleopMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::msg::TeleopMode & msg)
{
  return arms_ros2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::msg::TeleopMode>()
{
  return "arms_ros2_control_msgs::msg::TeleopMode";
}

template<>
inline const char * name<arms_ros2_control_msgs::msg::TeleopMode>()
{
  return "arms_ros2_control_msgs/msg/TeleopMode";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::msg::TeleopMode>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::msg::TeleopMode>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<arms_ros2_control_msgs::msg::TeleopMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__TRAITS_HPP_
