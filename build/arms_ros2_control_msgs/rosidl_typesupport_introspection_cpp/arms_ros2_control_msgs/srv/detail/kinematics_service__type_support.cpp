// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void KinematicsService_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arms_ros2_control_msgs::srv::KinematicsService_Request(_init);
}

void KinematicsService_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arms_ros2_control_msgs::srv::KinematicsService_Request *>(message_memory);
  typed_message->~KinematicsService_Request();
}

size_t size_function__KinematicsService_Request__joint_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsService_Request__joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsService_Request__joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsService_Request__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__KinematicsService_Request__joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__KinematicsService_Request__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__KinematicsService_Request__joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__KinematicsService_Request__joint_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsService_Request__target_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsService_Request__target_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsService_Request__target_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsService_Request__target_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__KinematicsService_Request__target_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__KinematicsService_Request__target_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__KinematicsService_Request__target_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__KinematicsService_Request__target_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KinematicsService_Request_message_member_array[9] = {
  {
    "operation_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, operation_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, arm_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "solver_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, solver_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsService_Request__joint_angles,  // size() function pointer
    get_const_function__KinematicsService_Request__joint_angles,  // get_const(index) function pointer
    get_function__KinematicsService_Request__joint_angles,  // get(index) function pointer
    fetch_function__KinematicsService_Request__joint_angles,  // fetch(index, &value) function pointer
    assign_function__KinematicsService_Request__joint_angles,  // assign(index, value) function pointer
    resize_function__KinematicsService_Request__joint_angles  // resize(index) function pointer
  },
  {
    "target_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, target_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsService_Request__target_poses,  // size() function pointer
    get_const_function__KinematicsService_Request__target_poses,  // get_const(index) function pointer
    get_function__KinematicsService_Request__target_poses,  // get(index) function pointer
    fetch_function__KinematicsService_Request__target_poses,  // fetch(index, &value) function pointer
    assign_function__KinematicsService_Request__target_poses,  // assign(index, value) function pointer
    resize_function__KinematicsService_Request__target_poses  // resize(index) function pointer
  },
  {
    "max_iterations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, max_iterations),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, tolerance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dls_damping",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, dls_damping),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enable_random_restart",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Request, enable_random_restart),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KinematicsService_Request_message_members = {
  "arms_ros2_control_msgs::srv",  // message namespace
  "KinematicsService_Request",  // message name
  9,  // number of fields
  sizeof(arms_ros2_control_msgs::srv::KinematicsService_Request),
  false,  // has_any_key_member_
  KinematicsService_Request_message_member_array,  // message members
  KinematicsService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicsService_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KinematicsService_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicsService_Request_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Request>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_introspection_cpp::KinematicsService_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService_Request)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_introspection_cpp::KinematicsService_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void KinematicsService_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arms_ros2_control_msgs::srv::KinematicsService_Response(_init);
}

void KinematicsService_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arms_ros2_control_msgs::srv::KinematicsService_Response *>(message_memory);
  typed_message->~KinematicsService_Response();
}

size_t size_function__KinematicsService_Response__result_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsService_Response__result_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsService_Response__result_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsService_Response__result_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__KinematicsService_Response__result_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__KinematicsService_Response__result_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__KinematicsService_Response__result_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__KinematicsService_Response__result_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsService_Response__result_joint_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsService_Response__result_joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsService_Response__result_joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsService_Response__result_joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__KinematicsService_Response__result_joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__KinematicsService_Response__result_joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__KinematicsService_Response__result_joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__KinematicsService_Response__result_joint_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KinematicsService_Response_message_member_array[10] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, result_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsService_Response__result_poses,  // size() function pointer
    get_const_function__KinematicsService_Response__result_poses,  // get_const(index) function pointer
    get_function__KinematicsService_Response__result_poses,  // get(index) function pointer
    fetch_function__KinematicsService_Response__result_poses,  // fetch(index, &value) function pointer
    assign_function__KinematicsService_Response__result_poses,  // assign(index, value) function pointer
    resize_function__KinematicsService_Response__result_poses  // resize(index) function pointer
  },
  {
    "result_joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, result_joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsService_Response__result_joint_angles,  // size() function pointer
    get_const_function__KinematicsService_Response__result_joint_angles,  // get_const(index) function pointer
    get_function__KinematicsService_Response__result_joint_angles,  // get(index) function pointer
    fetch_function__KinematicsService_Response__result_joint_angles,  // fetch(index, &value) function pointer
    assign_function__KinematicsService_Response__result_joint_angles,  // assign(index, value) function pointer
    resize_function__KinematicsService_Response__result_joint_angles  // resize(index) function pointer
  },
  {
    "used_solver",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, used_solver),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "iterations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, iterations),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "final_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, final_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "computation_time_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, computation_time_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_out_of_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, is_out_of_range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "additional_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Response, additional_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KinematicsService_Response_message_members = {
  "arms_ros2_control_msgs::srv",  // message namespace
  "KinematicsService_Response",  // message name
  10,  // number of fields
  sizeof(arms_ros2_control_msgs::srv::KinematicsService_Response),
  false,  // has_any_key_member_
  KinematicsService_Response_message_member_array,  // message members
  KinematicsService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicsService_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KinematicsService_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicsService_Response_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Response>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_introspection_cpp::KinematicsService_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService_Response)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_introspection_cpp::KinematicsService_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void KinematicsService_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arms_ros2_control_msgs::srv::KinematicsService_Event(_init);
}

void KinematicsService_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arms_ros2_control_msgs::srv::KinematicsService_Event *>(message_memory);
  typed_message->~KinematicsService_Event();
}

size_t size_function__KinematicsService_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<arms_ros2_control_msgs::srv::KinematicsService_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsService_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<arms_ros2_control_msgs::srv::KinematicsService_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsService_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<arms_ros2_control_msgs::srv::KinematicsService_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const arms_ros2_control_msgs::srv::KinematicsService_Request *>(
    get_const_function__KinematicsService_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<arms_ros2_control_msgs::srv::KinematicsService_Request *>(untyped_value);
  value = item;
}

void assign_function__KinematicsService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<arms_ros2_control_msgs::srv::KinematicsService_Request *>(
    get_function__KinematicsService_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const arms_ros2_control_msgs::srv::KinematicsService_Request *>(untyped_value);
  item = value;
}

void resize_function__KinematicsService_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<arms_ros2_control_msgs::srv::KinematicsService_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicsService_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<arms_ros2_control_msgs::srv::KinematicsService_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicsService_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<arms_ros2_control_msgs::srv::KinematicsService_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicsService_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<arms_ros2_control_msgs::srv::KinematicsService_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicsService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const arms_ros2_control_msgs::srv::KinematicsService_Response *>(
    get_const_function__KinematicsService_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<arms_ros2_control_msgs::srv::KinematicsService_Response *>(untyped_value);
  value = item;
}

void assign_function__KinematicsService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<arms_ros2_control_msgs::srv::KinematicsService_Response *>(
    get_function__KinematicsService_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const arms_ros2_control_msgs::srv::KinematicsService_Response *>(untyped_value);
  item = value;
}

void resize_function__KinematicsService_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<arms_ros2_control_msgs::srv::KinematicsService_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KinematicsService_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsService_Event__request,  // size() function pointer
    get_const_function__KinematicsService_Event__request,  // get_const(index) function pointer
    get_function__KinematicsService_Event__request,  // get(index) function pointer
    fetch_function__KinematicsService_Event__request,  // fetch(index, &value) function pointer
    assign_function__KinematicsService_Event__request,  // assign(index, value) function pointer
    resize_function__KinematicsService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arms_ros2_control_msgs::srv::KinematicsService_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicsService_Event__response,  // size() function pointer
    get_const_function__KinematicsService_Event__response,  // get_const(index) function pointer
    get_function__KinematicsService_Event__response,  // get(index) function pointer
    fetch_function__KinematicsService_Event__response,  // fetch(index, &value) function pointer
    assign_function__KinematicsService_Event__response,  // assign(index, value) function pointer
    resize_function__KinematicsService_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KinematicsService_Event_message_members = {
  "arms_ros2_control_msgs::srv",  // message namespace
  "KinematicsService_Event",  // message name
  3,  // number of fields
  sizeof(arms_ros2_control_msgs::srv::KinematicsService_Event),
  false,  // has_any_key_member_
  KinematicsService_Event_message_member_array,  // message members
  KinematicsService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicsService_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KinematicsService_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicsService_Event_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Event>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_introspection_cpp::KinematicsService_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService_Event)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_introspection_cpp::KinematicsService_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers KinematicsService_service_members = {
  "arms_ros2_control_msgs::srv",  // service namespace
  "KinematicsService",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t KinematicsService_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicsService_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<arms_ros2_control_msgs::srv::KinematicsService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<arms_ros2_control_msgs::srv::KinematicsService>,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::arms_ros2_control_msgs::srv::rosidl_typesupport_introspection_cpp::KinematicsService_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::arms_ros2_control_msgs::srv::KinematicsService_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::arms_ros2_control_msgs::srv::KinematicsService_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::arms_ros2_control_msgs::srv::KinematicsService_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService>();
}

#ifdef __cplusplus
}
#endif
