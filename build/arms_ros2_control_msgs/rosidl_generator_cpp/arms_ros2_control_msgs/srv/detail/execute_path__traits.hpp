// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:srv/ExecutePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/execute_path.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/srv/detail/execute_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'left_arm_path'
// Member 'right_arm_path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecutePath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_arm_path
  {
    out << "left_arm_path: ";
    to_flow_style_yaml(msg.left_arm_path, out);
    out << ", ";
  }

  // member: right_arm_path
  {
    out << "right_arm_path: ";
    to_flow_style_yaml(msg.right_arm_path, out);
    out << ", ";
  }

  // member: trajectory_duration
  {
    out << "trajectory_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_arm_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_arm_path:\n";
    to_block_style_yaml(msg.left_arm_path, out, indentation + 2);
  }

  // member: right_arm_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_arm_path:\n";
    to_block_style_yaml(msg.right_arm_path, out, indentation + 2);
  }

  // member: trajectory_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePath_Request & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::srv::ExecutePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::ExecutePath_Request & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::ExecutePath_Request>()
{
  return "arms_ros2_control_msgs::srv::ExecutePath_Request";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::ExecutePath_Request>()
{
  return "arms_ros2_control_msgs/srv/ExecutePath_Request";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::ExecutePath_Request>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath_Request>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::ExecutePath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arms_ros2_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecutePath_Response & msg,
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

  // member: estimated_duration
  {
    out << "estimated_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePath_Response & msg,
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

  // member: estimated_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePath_Response & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::srv::ExecutePath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::ExecutePath_Response & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::ExecutePath_Response>()
{
  return "arms_ros2_control_msgs::srv::ExecutePath_Response";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::ExecutePath_Response>()
{
  return "arms_ros2_control_msgs/srv/ExecutePath_Response";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::ExecutePath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::ExecutePath_Response>
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
  const ExecutePath_Event & msg,
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
  const ExecutePath_Event & msg,
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

inline std::string to_yaml(const ExecutePath_Event & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::srv::ExecutePath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::ExecutePath_Event & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::ExecutePath_Event>()
{
  return "arms_ros2_control_msgs::srv::ExecutePath_Event";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::ExecutePath_Event>()
{
  return "arms_ros2_control_msgs/srv/ExecutePath_Event";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::ExecutePath_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath_Event>
  : std::integral_constant<bool, has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath_Request>::value && has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::ExecutePath_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::ExecutePath>()
{
  return "arms_ros2_control_msgs::srv::ExecutePath";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::ExecutePath>()
{
  return "arms_ros2_control_msgs/srv/ExecutePath";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::ExecutePath>
  : std::integral_constant<
    bool,
    has_fixed_size<arms_ros2_control_msgs::srv::ExecutePath_Request>::value &&
    has_fixed_size<arms_ros2_control_msgs::srv::ExecutePath_Response>::value
  >
{
};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath>
  : std::integral_constant<
    bool,
    has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath_Request>::value &&
    has_bounded_size<arms_ros2_control_msgs::srv::ExecutePath_Response>::value
  >
{
};

template<>
struct is_service<arms_ros2_control_msgs::srv::ExecutePath>
  : std::true_type
{
};

template<>
struct is_service_request<arms_ros2_control_msgs::srv::ExecutePath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arms_ros2_control_msgs::srv::ExecutePath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__TRAITS_HPP_
