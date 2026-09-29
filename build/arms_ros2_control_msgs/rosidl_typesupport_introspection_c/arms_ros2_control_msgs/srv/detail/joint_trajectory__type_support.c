// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arms_ros2_control_msgs:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "arms_ros2_control_msgs/msg/joint_waypoint.h"
// Member `waypoints`
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__srv__JointTrajectory_Request__init(message_memory);
}

void arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Request__fini(message_memory);
}

size_t arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Request__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Request__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Request__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Request__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Request__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Request__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Request__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Request__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Request__waypoints(
  const void * untyped_member)
{
  const arms_ros2_control_msgs__msg__JointWaypoint__Sequence * member =
    (const arms_ros2_control_msgs__msg__JointWaypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Request__waypoints(
  const void * untyped_member, size_t index)
{
  const arms_ros2_control_msgs__msg__JointWaypoint__Sequence * member =
    (const arms_ros2_control_msgs__msg__JointWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Request__waypoints(
  void * untyped_member, size_t index)
{
  arms_ros2_control_msgs__msg__JointWaypoint__Sequence * member =
    (arms_ros2_control_msgs__msg__JointWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Request__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arms_ros2_control_msgs__msg__JointWaypoint * item =
    ((const arms_ros2_control_msgs__msg__JointWaypoint *)
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Request__waypoints(untyped_member, index));
  arms_ros2_control_msgs__msg__JointWaypoint * value =
    (arms_ros2_control_msgs__msg__JointWaypoint *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Request__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arms_ros2_control_msgs__msg__JointWaypoint * item =
    ((arms_ros2_control_msgs__msg__JointWaypoint *)
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Request__waypoints(untyped_member, index));
  const arms_ros2_control_msgs__msg__JointWaypoint * value =
    (const arms_ros2_control_msgs__msg__JointWaypoint *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Request__waypoints(
  void * untyped_member, size_t size)
{
  arms_ros2_control_msgs__msg__JointWaypoint__Sequence * member =
    (arms_ros2_control_msgs__msg__JointWaypoint__Sequence *)(untyped_member);
  arms_ros2_control_msgs__msg__JointWaypoint__Sequence__fini(member);
  return arms_ros2_control_msgs__msg__JointWaypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_member_array[2] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Request, joint_names),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Request__joint_names,  // size() function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Request__joint_names,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Request__joint_names,  // get(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Request__joint_names,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Request__joint_names,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Request__joint_names  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Request, waypoints),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Request__waypoints,  // size() function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Request__waypoints,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Request__waypoints,  // get(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Request__waypoints,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Request__waypoints,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Request__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_members = {
  "arms_ros2_control_msgs__srv",  // message namespace
  "JointTrajectory_Request",  // message name
  2,  // number of fields
  sizeof(arms_ros2_control_msgs__srv__JointTrajectory_Request),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_member_array,  // message members
  arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Request)() {
  arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, msg, JointWaypoint)();
  if (!arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__srv__JointTrajectory_Response__init(message_memory);
}

void arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planned_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Response, planned_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_members = {
  "arms_ros2_control_msgs__srv",  // message namespace
  "JointTrajectory_Response",  // message name
  3,  // number of fields
  sizeof(arms_ros2_control_msgs__srv__JointTrajectory_Response),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_member_array,  // message members
  arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Response)() {
  if (!arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "arms_ros2_control_msgs/srv/joint_trajectory.h"
// Member `request`
// Member `response`
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__srv__JointTrajectory_Event__init(message_memory);
}

void arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Event__fini(message_memory);
}

size_t arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Event__request(
  const void * untyped_member)
{
  const arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence * member =
    (const arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Event__request(
  const void * untyped_member, size_t index)
{
  const arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence * member =
    (const arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Event__request(
  void * untyped_member, size_t index)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence * member =
    (arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arms_ros2_control_msgs__srv__JointTrajectory_Request * item =
    ((const arms_ros2_control_msgs__srv__JointTrajectory_Request *)
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Event__request(untyped_member, index));
  arms_ros2_control_msgs__srv__JointTrajectory_Request * value =
    (arms_ros2_control_msgs__srv__JointTrajectory_Request *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Request * item =
    ((arms_ros2_control_msgs__srv__JointTrajectory_Request *)
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Event__request(untyped_member, index));
  const arms_ros2_control_msgs__srv__JointTrajectory_Request * value =
    (const arms_ros2_control_msgs__srv__JointTrajectory_Request *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Event__request(
  void * untyped_member, size_t size)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence * member =
    (arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence *)(untyped_member);
  arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__fini(member);
  return arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Event__response(
  const void * untyped_member)
{
  const arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence * member =
    (const arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Event__response(
  const void * untyped_member, size_t index)
{
  const arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence * member =
    (const arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Event__response(
  void * untyped_member, size_t index)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence * member =
    (arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arms_ros2_control_msgs__srv__JointTrajectory_Response * item =
    ((const arms_ros2_control_msgs__srv__JointTrajectory_Response *)
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Event__response(untyped_member, index));
  arms_ros2_control_msgs__srv__JointTrajectory_Response * value =
    (arms_ros2_control_msgs__srv__JointTrajectory_Response *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Response * item =
    ((arms_ros2_control_msgs__srv__JointTrajectory_Response *)
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Event__response(untyped_member, index));
  const arms_ros2_control_msgs__srv__JointTrajectory_Response * value =
    (const arms_ros2_control_msgs__srv__JointTrajectory_Response *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Event__response(
  void * untyped_member, size_t size)
{
  arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence * member =
    (arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence *)(untyped_member);
  arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__fini(member);
  return arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Event, request),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Event__request,  // size() function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Event__request,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Event__request,  // get(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Event__request,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Event__request,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__JointTrajectory_Event, response),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__size_function__JointTrajectory_Event__response,  // size() function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_const_function__JointTrajectory_Event__response,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__get_function__JointTrajectory_Event__response,  // get(index) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__fetch_function__JointTrajectory_Event__response,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__assign_function__JointTrajectory_Event__response,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__resize_function__JointTrajectory_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_members = {
  "arms_ros2_control_msgs__srv",  // message namespace
  "JointTrajectory_Event",  // message name
  3,  // number of fields
  sizeof(arms_ros2_control_msgs__srv__JointTrajectory_Event),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_member_array,  // message members
  arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Event)() {
  arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Request)();
  arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Response)();
  if (!arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_members = {
  "arms_ros2_control_msgs__srv",  // service namespace
  "JointTrajectory",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle,
  NULL,  // response message
  // arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle
  NULL  // event_message
  // arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle
};


static rosidl_service_type_support_t arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_members,
  get_service_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__rosidl_typesupport_introspection_c__JointTrajectory_Request_message_type_support_handle,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__rosidl_typesupport_introspection_c__JointTrajectory_Response_message_type_support_handle,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__rosidl_typesupport_introspection_c__JointTrajectory_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    JointTrajectory
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    JointTrajectory
  ),
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory)(void) {
  if (!arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Event)()->data;
  }

  return &arms_ros2_control_msgs__srv__detail__joint_trajectory__rosidl_typesupport_introspection_c__JointTrajectory_service_type_support_handle;
}
