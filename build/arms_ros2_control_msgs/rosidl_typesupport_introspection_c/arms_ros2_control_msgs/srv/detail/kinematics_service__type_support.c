// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__rosidl_typesupport_introspection_c.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.h"


// Include directives for member types
// Member `operation_type`
// Member `arm_type`
// Member `solver_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `target_poses`
#include "geometry_msgs/msg/pose.h"
// Member `target_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__srv__KinematicsService_Request__init(message_memory);
}

void arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__srv__KinematicsService_Request__fini(message_memory);
}

size_t arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__size_function__KinematicsService_Request__joint_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Request__joint_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_function__KinematicsService_Request__joint_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Request__joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Request__joint_angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Request__joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_function__KinematicsService_Request__joint_angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Request__joint_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__size_function__KinematicsService_Request__target_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Request__target_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_function__KinematicsService_Request__target_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Request__target_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Request__target_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Request__target_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_function__KinematicsService_Request__target_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Request__target_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_member_array[9] = {
  {
    "operation_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, operation_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, arm_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solver_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, solver_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, joint_angles),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__size_function__KinematicsService_Request__joint_angles,  // size() function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Request__joint_angles,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_function__KinematicsService_Request__joint_angles,  // get(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Request__joint_angles,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Request__joint_angles,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Request__joint_angles  // resize(index) function pointer
  },
  {
    "target_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, target_poses),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__size_function__KinematicsService_Request__target_poses,  // size() function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Request__target_poses,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__get_function__KinematicsService_Request__target_poses,  // get(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Request__target_poses,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Request__target_poses,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Request__target_poses  // resize(index) function pointer
  },
  {
    "max_iterations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, max_iterations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dls_damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, dls_damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_random_restart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Request, enable_random_restart),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_members = {
  "arms_ros2_control_msgs__srv",  // message namespace
  "KinematicsService_Request",  // message name
  9,  // number of fields
  sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_member_array,  // message members
  arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Request)() {
  arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.h"


// Include directives for member types
// Member `message`
// Member `used_solver`
// Member `additional_info`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `result_poses`
// already included above
// #include "geometry_msgs/msg/pose.h"
// Member `result_poses`
// already included above
// #include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `result_joint_angles`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__srv__KinematicsService_Response__init(message_memory);
}

void arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__srv__KinematicsService_Response__fini(message_memory);
}

size_t arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__size_function__KinematicsService_Response__result_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Response__result_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_function__KinematicsService_Response__result_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Response__result_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Response__result_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Response__result_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_function__KinematicsService_Response__result_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Response__result_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__size_function__KinematicsService_Response__result_joint_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Response__result_joint_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_function__KinematicsService_Response__result_joint_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Response__result_joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Response__result_joint_angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Response__result_joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_function__KinematicsService_Response__result_joint_angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Response__result_joint_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_member_array[10] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, success),  // bytes offset in struct
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
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, result_poses),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__size_function__KinematicsService_Response__result_poses,  // size() function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Response__result_poses,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_function__KinematicsService_Response__result_poses,  // get(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Response__result_poses,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Response__result_poses,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Response__result_poses  // resize(index) function pointer
  },
  {
    "result_joint_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, result_joint_angles),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__size_function__KinematicsService_Response__result_joint_angles,  // size() function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Response__result_joint_angles,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__get_function__KinematicsService_Response__result_joint_angles,  // get(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Response__result_joint_angles,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Response__result_joint_angles,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Response__result_joint_angles  // resize(index) function pointer
  },
  {
    "used_solver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, used_solver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iterations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, iterations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, final_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "computation_time_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, computation_time_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_out_of_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, is_out_of_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Response, additional_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_members = {
  "arms_ros2_control_msgs__srv",  // message namespace
  "KinematicsService_Response",  // message name
  10,  // number of fields
  sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_member_array,  // message members
  arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Response)() {
  arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "arms_ros2_control_msgs/srv/kinematics_service.h"
// Member `request`
// Member `response`
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__srv__KinematicsService_Event__init(message_memory);
}

void arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__srv__KinematicsService_Event__fini(message_memory);
}

size_t arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__size_function__KinematicsService_Event__request(
  const void * untyped_member)
{
  const arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * member =
    (const arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Event__request(
  const void * untyped_member, size_t index)
{
  const arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * member =
    (const arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_function__KinematicsService_Event__request(
  void * untyped_member, size_t index)
{
  arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * member =
    (arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arms_ros2_control_msgs__srv__KinematicsService_Request * item =
    ((const arms_ros2_control_msgs__srv__KinematicsService_Request *)
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Event__request(untyped_member, index));
  arms_ros2_control_msgs__srv__KinematicsService_Request * value =
    (arms_ros2_control_msgs__srv__KinematicsService_Request *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arms_ros2_control_msgs__srv__KinematicsService_Request * item =
    ((arms_ros2_control_msgs__srv__KinematicsService_Request *)
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_function__KinematicsService_Event__request(untyped_member, index));
  const arms_ros2_control_msgs__srv__KinematicsService_Request * value =
    (const arms_ros2_control_msgs__srv__KinematicsService_Request *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Event__request(
  void * untyped_member, size_t size)
{
  arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * member =
    (arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence *)(untyped_member);
  arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__fini(member);
  return arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__init(member, size);
}

size_t arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__size_function__KinematicsService_Event__response(
  const void * untyped_member)
{
  const arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * member =
    (const arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Event__response(
  const void * untyped_member, size_t index)
{
  const arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * member =
    (const arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_function__KinematicsService_Event__response(
  void * untyped_member, size_t index)
{
  arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * member =
    (arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arms_ros2_control_msgs__srv__KinematicsService_Response * item =
    ((const arms_ros2_control_msgs__srv__KinematicsService_Response *)
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Event__response(untyped_member, index));
  arms_ros2_control_msgs__srv__KinematicsService_Response * value =
    (arms_ros2_control_msgs__srv__KinematicsService_Response *)(untyped_value);
  *value = *item;
}

void arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arms_ros2_control_msgs__srv__KinematicsService_Response * item =
    ((arms_ros2_control_msgs__srv__KinematicsService_Response *)
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_function__KinematicsService_Event__response(untyped_member, index));
  const arms_ros2_control_msgs__srv__KinematicsService_Response * value =
    (const arms_ros2_control_msgs__srv__KinematicsService_Response *)(untyped_value);
  *item = *value;
}

bool arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Event__response(
  void * untyped_member, size_t size)
{
  arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * member =
    (arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence *)(untyped_member);
  arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__fini(member);
  return arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Event, info),  // bytes offset in struct
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
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Event, request),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__size_function__KinematicsService_Event__request,  // size() function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Event__request,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_function__KinematicsService_Event__request,  // get(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Event__request,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Event__request,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Event__request  // resize(index) function pointer
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
    offsetof(arms_ros2_control_msgs__srv__KinematicsService_Event, response),  // bytes offset in struct
    NULL,  // default value
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__size_function__KinematicsService_Event__response,  // size() function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_const_function__KinematicsService_Event__response,  // get_const(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__get_function__KinematicsService_Event__response,  // get(index) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__fetch_function__KinematicsService_Event__response,  // fetch(index, &value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__assign_function__KinematicsService_Event__response,  // assign(index, value) function pointer
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__resize_function__KinematicsService_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_members = {
  "arms_ros2_control_msgs__srv",  // message namespace
  "KinematicsService_Event",  // message name
  3,  // number of fields
  sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_member_array,  // message members
  arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Event)() {
  arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Request)();
  arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Response)();
  if (!arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_service_members = {
  "arms_ros2_control_msgs__srv",  // service namespace
  "KinematicsService",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_Request_message_type_support_handle,
  NULL,  // response message
  // arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_Response_message_type_support_handle
  NULL  // event_message
  // arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_Response_message_type_support_handle
};


static rosidl_service_type_support_t arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_service_type_support_handle = {
  0,
  &arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_service_members,
  get_service_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__rosidl_typesupport_introspection_c__KinematicsService_Request_message_type_support_handle,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__rosidl_typesupport_introspection_c__KinematicsService_Response_message_type_support_handle,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__rosidl_typesupport_introspection_c__KinematicsService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    KinematicsService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    KinematicsService
  ),
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService)(void) {
  if (!arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_service_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Event)()->data;
  }

  return &arms_ros2_control_msgs__srv__detail__kinematics_service__rosidl_typesupport_introspection_c__KinematicsService_service_type_support_handle;
}
