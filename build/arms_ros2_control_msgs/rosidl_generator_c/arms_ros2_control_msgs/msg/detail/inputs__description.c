// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:msg/Inputs.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/msg/detail/inputs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__msg__Inputs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0xea, 0xfb, 0x7d, 0x67, 0xb0, 0x1a, 0x5d,
      0xac, 0x05, 0xeb, 0x5c, 0x26, 0x77, 0x6b, 0x08,
      0x0c, 0x0a, 0x5c, 0x71, 0x01, 0x5c, 0x0f, 0x73,
      0x7a, 0xc8, 0x42, 0xcd, 0x70, 0x02, 0xf7, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arms_ros2_control_msgs__msg__Inputs__TYPE_NAME[] = "arms_ros2_control_msgs/msg/Inputs";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__x[] = "x";
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__y[] = "y";
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__z[] = "z";
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__roll[] = "roll";
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__pitch[] = "pitch";
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__yaw[] = "yaw";
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__target[] = "target";
static char arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__hand_command[] = "hand_command";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__msg__Inputs__FIELDS[] = {
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__target, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__Inputs__FIELD_NAME__hand_command, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__msg__Inputs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__msg__Inputs__TYPE_NAME, 33, 33},
      {arms_ros2_control_msgs__msg__Inputs__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# control input message\n"
  "\n"
  "# position\n"
  "float32 x\n"
  "float32 y\n"
  "float32 z\n"
  "\n"
  "# rotation\n"
  "float32 roll\n"
  "float32 pitch\n"
  "float32 yaw\n"
  "\n"
  "# command target, left(1) or right arm(2)\n"
  "int32 target\n"
  "\n"
  "# hand/gripper: nan=no command; 0=close / 1=open (target_command); else 0~1 open ratio (target_percent)\n"
  "float32 hand_command";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__msg__Inputs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__msg__Inputs__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 299, 299},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__msg__Inputs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__msg__Inputs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
