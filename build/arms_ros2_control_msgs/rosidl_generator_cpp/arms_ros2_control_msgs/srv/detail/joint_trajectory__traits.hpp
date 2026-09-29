// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/joint_trajectory.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTrajectory_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arms_ros2_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arms_ros2_control_msgs::srv::JointTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::JointTrajectory_Request & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::JointTrajectory_Request>()
{
  return "arms_ros2_control_msgs::srv::JointTrajectory_Request";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::JointTrajectory_Request>()
{
  return "arms_ros2_control_msgs/srv/JointTrajectory_Request";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::JointTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::JointTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arms_ros2_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: planned_duration
  {
    out << "planned_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.planned_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: planned_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planned_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.planned_duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTrajectory_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arms_ros2_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arms_ros2_control_msgs::srv::JointTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::JointTrajectory_Response & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::JointTrajectory_Response>()
{
  return "arms_ros2_control_msgs::srv::JointTrajectory_Response";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::JointTrajectory_Response>()
{
  return "arms_ros2_control_msgs/srv/JointTrajectory_Response";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::JointTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::JointTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointTrajectory_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTrajectory_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTrajectory_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arms_ros2_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arms_ros2_control_msgs::srv::JointTrajectory_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::JointTrajectory_Event & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::JointTrajectory_Event>()
{
  return "arms_ros2_control_msgs::srv::JointTrajectory_Event";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::JointTrajectory_Event>()
{
  return "arms_ros2_control_msgs/srv/JointTrajectory_Event";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::JointTrajectory_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory_Event>
  : std::integral_constant<bool, has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory_Request>::value && has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::JointTrajectory_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::JointTrajectory>()
{
  return "arms_ros2_control_msgs::srv::JointTrajectory";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::JointTrajectory>()
{
  return "arms_ros2_control_msgs/srv/JointTrajectory";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::JointTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<arms_ros2_control_msgs::srv::JointTrajectory_Request>::value &&
    has_fixed_size<arms_ros2_control_msgs::srv::JointTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory_Request>::value &&
    has_bounded_size<arms_ros2_control_msgs::srv::JointTrajectory_Response>::value
  >
{
};

template<>
struct is_service<arms_ros2_control_msgs::srv::JointTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<arms_ros2_control_msgs::srv::JointTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arms_ros2_control_msgs::srv::JointTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__TRAITS_HPP_
