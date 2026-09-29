// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__rosidl_typesupport_introspection_c.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__functions.h"
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__struct.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `max_velocity`
// Member `max_acceleration`
// Member `max_jerk`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__msg__JointWaypoint__init(message_memory);
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__msg__JointWaypoint__fini(message_memory);
}

size_t arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__max_velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__max_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__max_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__max_velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__max_acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__max_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__max_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__max_acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__max_jerk(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_jerk(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_jerk(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__max_jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_jerk(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__max_jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_jerk(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__max_jerk(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_member_array[8] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, position),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__position,  // size() function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__position,  // get_const(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__position,  // get(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__position,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__position,  // assign(index, value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, velocity),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__velocity,  // size() function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__velocity,  // get_const(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__velocity,  // get(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__velocity,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__velocity,  // assign(index, value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__velocity  // resize(index) function pointer
  },
  {
    "blend_ratio_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, blend_ratio_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, max_velocity),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__max_velocity,  // size() function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_velocity,  // get_const(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_velocity,  // get(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__max_velocity,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__max_velocity,  // assign(index, value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__max_velocity  // resize(index) function pointer
  },
  {
    "max_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, max_acceleration),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__max_acceleration,  // size() function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_acceleration,  // get_const(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_acceleration,  // get(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__max_acceleration,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__max_acceleration,  // assign(index, value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__max_acceleration  // resize(index) function pointer
  },
  {
    "max_jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, max_jerk),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__size_function__JointWaypoint__max_jerk,  // size() function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_const_function__JointWaypoint__max_jerk,  // get_const(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__get_function__JointWaypoint__max_jerk,  // get(index) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__fetch_function__JointWaypoint__max_jerk,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__assign_function__JointWaypoint__max_jerk,  // assign(index, value) function pointer
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__resize_function__JointWaypoint__max_jerk  // resize(index) function pointer
  },
  {
    "time_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, time_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__JointWaypoint, total_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_members = {
  "arms_ros2_control_msgs__msg",  // message namespace
  "JointWaypoint",  // message name
  8,  // number of fields
  sizeof(arms_ros2_control_msgs__msg__JointWaypoint),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_member_array,  // message members
  arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_hash,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_description,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, msg, JointWaypoint)() {
  if (!arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__msg__JointWaypoint__rosidl_typesupport_introspection_c__JointWaypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
