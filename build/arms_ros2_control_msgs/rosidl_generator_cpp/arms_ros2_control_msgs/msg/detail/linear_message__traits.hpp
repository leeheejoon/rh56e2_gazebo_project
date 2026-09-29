// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:msg/LinearMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/linear_message.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/msg/detail/linear_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'endpoint'
// Member 'right_endpoint'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LinearMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: endpoint
  {
    out << "endpoint: ";
    to_flow_style_yaml(msg.endpoint, out);
    out << ", ";
  }

  // member: right_endpoint
  {
    out << "right_endpoint: ";
    to_flow_style_yaml(msg.right_endpoint, out);
    out << ", ";
  }

  // member: max_linear_velocity
  {
    out << "max_linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity, out);
    out << ", ";
  }

  // member: max_linear_acceleration
  {
    out << "max_linear_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_acceleration, out);
    out << ", ";
  }

  // member: max_linear_jerk
  {
    out << "max_linear_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_jerk, out);
    out << ", ";
  }

  // member: max_angular_velocity
  {
    out << "max_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity, out);
    out << ", ";
  }

  // member: max_angular_acceleration
  {
    out << "max_angular_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_acceleration, out);
    out << ", ";
  }

  // member: max_angular_jerk
  {
    out << "max_angular_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_jerk, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: time_mode
  {
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: arm_name
  {
    out << "arm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_name, out);
    out << ", ";
  }

  // member: ik_type
  {
    out << "ik_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinearMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endpoint:\n";
    to_block_style_yaml(msg.endpoint, out, indentation + 2);
  }

  // member: right_endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_endpoint:\n";
    to_block_style_yaml(msg.right_endpoint, out, indentation + 2);
  }

  // member: max_linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_velocity, out);
    out << "\n";
  }

  // member: max_linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_acceleration, out);
    out << "\n";
  }

  // member: max_linear_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_linear_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_linear_jerk, out);
    out << "\n";
  }

  // member: max_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_velocity, out);
    out << "\n";
  }

  // member: max_angular_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_acceleration, out);
    out << "\n";
  }

  // member: max_angular_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_jerk, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: time_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << "\n";
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: arm_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_name, out);
    out << "\n";
  }

  // member: ik_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ik_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinearMessage & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::msg::LinearMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::msg::LinearMessage & msg)
{
  return arms_ros2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::msg::LinearMessage>()
{
  return "arms_ros2_control_msgs::msg::LinearMessage";
}

template<>
inline const char * name<arms_ros2_control_msgs::msg::LinearMessage>()
{
  return "arms_ros2_control_msgs/msg/LinearMessage";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::msg::LinearMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::msg::LinearMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::msg::LinearMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__TRAITS_HPP_
