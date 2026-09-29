// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__functions.h"
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arms_ros2_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointWaypoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arms_ros2_control_msgs::msg::JointWaypoint(_init);
}

void JointWaypoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arms_ros2_control_msgs::msg::JointWaypoint *>(message_memory);
  typed_message->~JointWaypoint();
}

size_t size_function__JointWaypoint__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointWaypoint__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointWaypoint__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointWaypoint__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointWaypoint__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointWaypoint__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointWaypoint__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointWaypoint__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointWaypoint__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointWaypoint__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointWaypoint__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointWaypoint__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointWaypoint__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointWaypoint__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointWaypoint__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointWaypoint__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointWaypoint__max_velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointWaypoint__max_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointWaypoint__max_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointWaypoint__max_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointWaypoint__max_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointWaypoint__max_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointWaypoint__max_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointWaypoint__max_velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointWaypoint__max_acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointWaypoint__max_acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointWaypoint__max_acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointWaypoint__max_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointWaypoint__max_acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointWaypoint__max_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointWaypoint__max_acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointWaypoint__max_acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointWaypoint__max_jerk(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointWaypoint__max_jerk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointWaypoint__max_jerk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointWaypoint__max_jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointWaypoint__max_jerk(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointWaypoint__max_jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointWaypoint__max_jerk(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointWaypoint__max_jerk(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointWaypoint_message_member_array[8] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointWaypoint__position,  // size() function pointer
    get_const_function__JointWaypoint__position,  // get_const(index) function pointer
    get_function__JointWaypoint__position,  // get(index) function pointer
    fetch_function__JointWaypoint__position,  // fetch(index, &value) function pointer
    assign_function__JointWaypoint__position,  // assign(index, value) function pointer
    resize_function__JointWaypoint__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointWaypoint__velocity,  // size() function pointer
    get_const_function__JointWaypoint__velocity,  // get_const(index) function pointer
    get_function__JointWaypoint__velocity,  // get(index) function pointer
    fetch_function__JointWaypoint__velocity,  // fetch(index, &value) function pointer
    assign_function__JointWaypoint__velocity,  // assign(index, value) function pointer
    resize_function__JointWaypoint__velocity  // resize(index) function pointer
  },
  {
    "blend_ratio_percent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, blend_ratio_percent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, max_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointWaypoint__max_velocity,  // size() function pointer
    get_const_function__JointWaypoint__max_velocity,  // get_const(index) function pointer
    get_function__JointWaypoint__max_velocity,  // get(index) function pointer
    fetch_function__JointWaypoint__max_velocity,  // fetch(index, &value) function pointer
    assign_function__JointWaypoint__max_velocity,  // assign(index, value) function pointer
    resize_function__JointWaypoint__max_velocity  // resize(index) function pointer
  },
  {
    "max_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, max_acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointWaypoint__max_acceleration,  // size() function pointer
    get_const_function__JointWaypoint__max_acceleration,  // get_const(index) function pointer
    get_function__JointWaypoint__max_acceleration,  // get(index) function pointer
    fetch_function__JointWaypoint__max_acceleration,  // fetch(index, &value) function pointer
    assign_function__JointWaypoint__max_acceleration,  // assign(index, value) function pointer
    resize_function__JointWaypoint__max_acceleration  // resize(index) function pointer
  },
  {
    "max_jerk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, max_jerk),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointWaypoint__max_jerk,  // size() function pointer
    get_const_function__JointWaypoint__max_jerk,  // get_const(index) function pointer
    get_function__JointWaypoint__max_jerk,  // get(index) function pointer
    fetch_function__JointWaypoint__max_jerk,  // fetch(index, &value) function pointer
    assign_function__JointWaypoint__max_jerk,  // assign(index, value) function pointer
    resize_function__JointWaypoint__max_jerk  // resize(index) function pointer
  },
  {
    "time_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, time_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs::msg::JointWaypoint, total_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointWaypoint_message_members = {
  "arms_ros2_control_msgs::msg",  // message namespace
  "JointWaypoint",  // message name
  8,  // number of fields
  sizeof(arms_ros2_control_msgs::msg::JointWaypoint),
  false,  // has_any_key_member_
  JointWaypoint_message_member_array,  // message members
  JointWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  JointWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointWaypoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointWaypoint_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_hash,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_description,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace arms_ros2_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::msg::JointWaypoint>()
{
  return &::arms_ros2_control_msgs::msg::rosidl_typesupport_introspection_cpp::JointWaypoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, msg, JointWaypoint)() {
  return &::arms_ros2_control_msgs::msg::rosidl_typesupport_introspection_cpp::JointWaypoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
