// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/joint_waypoint.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arms_ros2_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointWaypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: blend_ratio_percent
  {
    out << "blend_ratio_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.blend_ratio_percent, out);
    out << ", ";
  }

  // member: max_velocity
  {
    if (msg.max_velocity.size() == 0) {
      out << "max_velocity: []";
    } else {
      out << "max_velocity: [";
      size_t pending_items = msg.max_velocity.size();
      for (auto item : msg.max_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_acceleration
  {
    if (msg.max_acceleration.size() == 0) {
      out << "max_acceleration: []";
    } else {
      out << "max_acceleration: [";
      size_t pending_items = msg.max_acceleration.size();
      for (auto item : msg.max_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_jerk
  {
    if (msg.max_jerk.size() == 0) {
      out << "max_jerk: []";
    } else {
      out << "max_jerk: [";
      size_t pending_items = msg.max_jerk.size();
      for (auto item : msg.max_jerk) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_mode
  {
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << ", ";
  }

  // member: total_time
  {
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: blend_ratio_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blend_ratio_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.blend_ratio_percent, out);
    out << "\n";
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_velocity.size() == 0) {
      out << "max_velocity: []\n";
    } else {
      out << "max_velocity:\n";
      for (auto item : msg.max_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_acceleration.size() == 0) {
      out << "max_acceleration: []\n";
    } else {
      out << "max_acceleration:\n";
      for (auto item : msg.max_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_jerk.size() == 0) {
      out << "max_jerk: []\n";
    } else {
      out << "max_jerk:\n";
      for (auto item : msg.max_jerk) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: total_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointWaypoint & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::msg::JointWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::msg::JointWaypoint & msg)
{
  return arms_ros2_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::msg::JointWaypoint>()
{
  return "arms_ros2_control_msgs::msg::JointWaypoint";
}

template<>
inline const char * name<arms_ros2_control_msgs::msg::JointWaypoint>()
{
  return "arms_ros2_control_msgs/msg/JointWaypoint";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::msg::JointWaypoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::msg::JointWaypoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::msg::JointWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__TRAITS_HPP_
