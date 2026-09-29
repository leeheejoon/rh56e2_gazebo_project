// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/kinematics_service.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__TRAITS_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const KinematicsService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: operation_type
  {
    out << "operation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_type, out);
    out << ", ";
  }

  // member: arm_type
  {
    out << "arm_type: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_type, out);
    out << ", ";
  }

  // member: solver_type
  {
    out << "solver_type: ";
    rosidl_generator_traits::value_to_yaml(msg.solver_type, out);
    out << ", ";
  }

  // member: joint_angles
  {
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []";
    } else {
      out << "joint_angles: [";
      size_t pending_items = msg.joint_angles.size();
      for (auto item : msg.joint_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_poses
  {
    if (msg.target_poses.size() == 0) {
      out << "target_poses: []";
    } else {
      out << "target_poses: [";
      size_t pending_items = msg.target_poses.size();
      for (auto item : msg.target_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_iterations
  {
    out << "max_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iterations, out);
    out << ", ";
  }

  // member: tolerance
  {
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
    out << ", ";
  }

  // member: dls_damping
  {
    out << "dls_damping: ";
    rosidl_generator_traits::value_to_yaml(msg.dls_damping, out);
    out << ", ";
  }

  // member: enable_random_restart
  {
    out << "enable_random_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_random_restart, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KinematicsService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operation_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_type: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_type, out);
    out << "\n";
  }

  // member: arm_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_type: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_type, out);
    out << "\n";
  }

  // member: solver_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solver_type: ";
    rosidl_generator_traits::value_to_yaml(msg.solver_type, out);
    out << "\n";
  }

  // member: joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []\n";
    } else {
      out << "joint_angles:\n";
      for (auto item : msg.joint_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_poses.size() == 0) {
      out << "target_poses: []\n";
    } else {
      out << "target_poses:\n";
      for (auto item : msg.target_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: max_iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iterations, out);
    out << "\n";
  }

  // member: tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
    out << "\n";
  }

  // member: dls_damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dls_damping: ";
    rosidl_generator_traits::value_to_yaml(msg.dls_damping, out);
    out << "\n";
  }

  // member: enable_random_restart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_random_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_random_restart, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KinematicsService_Request & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::srv::KinematicsService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::KinematicsService_Request>()
{
  return "arms_ros2_control_msgs::srv::KinematicsService_Request";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::KinematicsService_Request>()
{
  return "arms_ros2_control_msgs/srv/KinematicsService_Request";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::KinematicsService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::KinematicsService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result_poses'
// already included above
// #include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace arms_ros2_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const KinematicsService_Response & msg,
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

  // member: result_poses
  {
    if (msg.result_poses.size() == 0) {
      out << "result_poses: []";
    } else {
      out << "result_poses: [";
      size_t pending_items = msg.result_poses.size();
      for (auto item : msg.result_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: result_joint_angles
  {
    if (msg.result_joint_angles.size() == 0) {
      out << "result_joint_angles: []";
    } else {
      out << "result_joint_angles: [";
      size_t pending_items = msg.result_joint_angles.size();
      for (auto item : msg.result_joint_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: used_solver
  {
    out << "used_solver: ";
    rosidl_generator_traits::value_to_yaml(msg.used_solver, out);
    out << ", ";
  }

  // member: iterations
  {
    out << "iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations, out);
    out << ", ";
  }

  // member: final_error
  {
    out << "final_error: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error, out);
    out << ", ";
  }

  // member: computation_time_ms
  {
    out << "computation_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.computation_time_ms, out);
    out << ", ";
  }

  // member: is_out_of_range
  {
    out << "is_out_of_range: ";
    rosidl_generator_traits::value_to_yaml(msg.is_out_of_range, out);
    out << ", ";
  }

  // member: additional_info
  {
    out << "additional_info: ";
    rosidl_generator_traits::value_to_yaml(msg.additional_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KinematicsService_Response & msg,
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

  // member: result_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result_poses.size() == 0) {
      out << "result_poses: []\n";
    } else {
      out << "result_poses:\n";
      for (auto item : msg.result_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: result_joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result_joint_angles.size() == 0) {
      out << "result_joint_angles: []\n";
    } else {
      out << "result_joint_angles:\n";
      for (auto item : msg.result_joint_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: used_solver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "used_solver: ";
    rosidl_generator_traits::value_to_yaml(msg.used_solver, out);
    out << "\n";
  }

  // member: iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations, out);
    out << "\n";
  }

  // member: final_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_error: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error, out);
    out << "\n";
  }

  // member: computation_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "computation_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.computation_time_ms, out);
    out << "\n";
  }

  // member: is_out_of_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_out_of_range: ";
    rosidl_generator_traits::value_to_yaml(msg.is_out_of_range, out);
    out << "\n";
  }

  // member: additional_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "additional_info: ";
    rosidl_generator_traits::value_to_yaml(msg.additional_info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KinematicsService_Response & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::srv::KinematicsService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::KinematicsService_Response>()
{
  return "arms_ros2_control_msgs::srv::KinematicsService_Response";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::KinematicsService_Response>()
{
  return "arms_ros2_control_msgs/srv/KinematicsService_Response";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::KinematicsService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::KinematicsService_Response>
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
  const KinematicsService_Event & msg,
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
  const KinematicsService_Event & msg,
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

inline std::string to_yaml(const KinematicsService_Event & msg, bool use_flow_style = false)
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
  const arms_ros2_control_msgs::srv::KinematicsService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  arms_ros2_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arms_ros2_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arms_ros2_control_msgs::srv::KinematicsService_Event & msg)
{
  return arms_ros2_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::KinematicsService_Event>()
{
  return "arms_ros2_control_msgs::srv::KinematicsService_Event";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::KinematicsService_Event>()
{
  return "arms_ros2_control_msgs/srv/KinematicsService_Event";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::KinematicsService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService_Event>
  : std::integral_constant<bool, has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService_Request>::value && has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<arms_ros2_control_msgs::srv::KinematicsService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arms_ros2_control_msgs::srv::KinematicsService>()
{
  return "arms_ros2_control_msgs::srv::KinematicsService";
}

template<>
inline const char * name<arms_ros2_control_msgs::srv::KinematicsService>()
{
  return "arms_ros2_control_msgs/srv/KinematicsService";
}

template<>
struct has_fixed_size<arms_ros2_control_msgs::srv::KinematicsService>
  : std::integral_constant<
    bool,
    has_fixed_size<arms_ros2_control_msgs::srv::KinematicsService_Request>::value &&
    has_fixed_size<arms_ros2_control_msgs::srv::KinematicsService_Response>::value
  >
{
};

template<>
struct has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService>
  : std::integral_constant<
    bool,
    has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService_Request>::value &&
    has_bounded_size<arms_ros2_control_msgs::srv::KinematicsService_Response>::value
  >
{
};

template<>
struct is_service<arms_ros2_control_msgs::srv::KinematicsService>
  : std::true_type
{
};

template<>
struct is_service_request<arms_ros2_control_msgs::srv::KinematicsService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arms_ros2_control_msgs::srv::KinematicsService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__TRAITS_HPP_
