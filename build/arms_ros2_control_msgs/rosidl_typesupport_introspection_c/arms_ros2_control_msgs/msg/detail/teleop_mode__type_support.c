// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arms_ros2_control_msgs/msg/detail/teleop_mode__rosidl_typesupport_introspection_c.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arms_ros2_control_msgs/msg/detail/teleop_mode__functions.h"
#include "arms_ros2_control_msgs/msg/detail/teleop_mode__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arms_ros2_control_msgs__msg__TeleopMode__init(message_memory);
}

void arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_fini_function(void * message_memory)
{
  arms_ros2_control_msgs__msg__TeleopMode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_member_array[6] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__TeleopMode, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__TeleopMode, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__TeleopMode, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mirror_movement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__TeleopMode, mirror_movement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__TeleopMode, speed_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arms_ros2_control_msgs__msg__TeleopMode, speed_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_members = {
  "arms_ros2_control_msgs__msg",  // message namespace
  "TeleopMode",  // message name
  6,  // number of fields
  sizeof(arms_ros2_control_msgs__msg__TeleopMode),
  false,  // has_any_key_member_
  arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_member_array,  // message members
  arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_init_function,  // function to initialize message memory (memory has to be allocated)
  arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_type_support_handle = {
  0,
  &arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_members,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__TeleopMode__get_type_hash,
  &arms_ros2_control_msgs__msg__TeleopMode__get_type_description,
  &arms_ros2_control_msgs__msg__TeleopMode__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, msg, TeleopMode)() {
  arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_type_support_handle.typesupport_identifier) {
    arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arms_ros2_control_msgs__msg__TeleopMode__rosidl_typesupport_introspection_c__TeleopMode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
