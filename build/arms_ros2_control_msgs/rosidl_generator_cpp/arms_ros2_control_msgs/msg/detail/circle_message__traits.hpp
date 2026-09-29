// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:msg/CircleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/circle_message.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/msg/detail/circle_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'midpoint'
// Member 'endpoint'
// Member 'right_midpoint'
// Member 'right_endpoint'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'center'
// Member 'right_center'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'axis'
// Member 'right_axis'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CircleMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: midpoint
  {
    out << "midpoint: ";
    to_flow_style_yaml(msg.midpoint, out);
    out << ", ";
  }

  // member: endpoint
  {
    out << "endpoint: ";
    to_flow_style_yaml(msg.endpoint, out);
    out << ", ";
  }

  // member: right_midpoint
  {
    out << "right_midpoint: ";
    to_flow_style_yaml(msg.right_midpoint, out);
    out << ", ";
  }

  // member: right_endpoint
  {
    out << "right_endpoint: ";
    to_flow_style_yaml(msg.right_endpoint, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: axis
  {
    out << "axis: ";
    to_flow_style_yaml(msg.axis, out);
    out << ", ";
  }

  // member: rotate_angle
  {
    out << "rotate_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate_angle, out);
    out << ", ";
  }

  // member: right_center
  {
    out << "right_center: ";
    to_flow_style_yaml(msg.right_center, out);
    out << ", ";
  }

  // member: right_axis
  {
    out << "right_axis: ";
    to_flow_style_yaml(msg.right_axis, out);
    out << ", ";
  }

  // member: right_rotate_angle
  {
    out << "right_rotate_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rotate_angle, out);
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

  // member: use_three_point_method
  {
    out << "use_three_point_method: ";
    rosidl_generator_traits::value_to_yaml(msg.use_three_point_method, out);
    out << ", ";
  }

  // member: use_slerp_for_orientation
  {
    out << "use_slerp_for_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.use_slerp_for_orientation, out);
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
  const CircleMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: midpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "midpoint:\n";
    to_block_style_yaml(msg.midpoint, out, indentation + 2);
  }

  // member: endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endpoint:\n";
    to_block_style_yaml(msg.endpoint, out, indentation + 2);
  }

  // member: right_midpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_midpoint:\n";
    to_block_style_yaml(msg.right_midpoint, out, indentation + 2);
  }

  // member: right_endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_endpoint:\n";
    to_block_style_yaml(msg.right_endpoint, out, indentation + 2);
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis:\n";
    to_block_style_yaml(msg.axis, out, indentation + 2);
  }

  // member: rotate_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotate_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate_angle, out);
    out << "\n";
  }

  // member: right_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_center:\n";
    to_block_style_yaml(msg.right_center, out, indentation + 2);
  }

  // member: right_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_axis:\n";
    to_block_style_yaml(msg.right_axis, out, indentation + 2);
  }

  // member: right_rotate_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rotate_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rotate_angle, out);
    out << "\n";
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

  // member: use_three_point_method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_three_point_method: ";
    rosidl_generator_traits::value_to_yaml(msg.use_three_point_method, out);
    out << "\n";
  }

  // member: use_slerp_for_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_slerp_for_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.use_slerp_for_orientation, out);
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

inline std::string to_yaml(const CircleMessage & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::msg::CircleMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::msg::CircleMessage & msg)
{
  return arms_ros2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::msg::CircleMessage>()
{
  return "arms_ros2_control_msgs::msg::CircleMessage";
}

template<>
inline const char * name<arms_ros2_control_msgs::msg::CircleMessage>()
{
  return "arms_ros2_control_msgs/msg/CircleMessage";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::msg::CircleMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::msg::CircleMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::msg::CircleMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__TRAITS_HPP_
