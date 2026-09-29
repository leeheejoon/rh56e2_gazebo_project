// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__msg__WbcCurrentState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0x93, 0xa3, 0x38, 0xac, 0xc4, 0x9e, 0x59,
      0x53, 0xf8, 0x61, 0x20, 0xbb, 0x3b, 0xea, 0x35,
      0x3c, 0xd6, 0xbb, 0x6f, 0xa0, 0x16, 0x75, 0x0e,
      0xe2, 0x9e, 0x12, 0x90, 0x59, 0x8f, 0x16, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arms_ros2_control_msgs__msg__WbcCurrentState__TYPE_NAME[] = "arms_ros2_control_msgs/msg/WbcCurrentState";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__base_state[] = "base_state";
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__body_state[] = "body_state";
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__bimanual_state[] = "bimanual_state";
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__left_arm_state[] = "left_arm_state";
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__right_arm_state[] = "right_arm_state";
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__home_joint_reference_enabled[] = "home_joint_reference_enabled";
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__head_state[] = "head_state";
static char arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__head_midpoint_gaze_active[] = "head_midpoint_gaze_active";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__msg__WbcCurrentState__FIELDS[] = {
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__base_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__body_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__bimanual_state, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__left_arm_state, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__right_arm_state, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__home_joint_reference_enabled, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__head_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCurrentState__FIELD_NAME__head_midpoint_gaze_active, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__msg__WbcCurrentState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__msg__WbcCurrentState__TYPE_NAME, 42, 42},
      {arms_ros2_control_msgs__msg__WbcCurrentState__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# base\n"
  "uint8 BASE_LOCKED=0\n"
  "uint8 BASE_UNLOCKED=1\n"
  "\n"
  "# body\n"
  "uint8 BODY_FREE=0\n"
  "uint8 BODY_VERTICAL=1\n"
  "uint8 BODY_TRACKING=2\n"
  "uint8 BODY_LOCKED=3\n"
  "uint8 BODY_CUSTOM_LOCKED=5\n"
  "\n"
  "# bimanual\n"
  "uint8 BIMANUAL_INDEPENDENT=0\n"
  "uint8 BIMANUAL_COUPLED=1\n"
  "\n"
  "# arm\n"
  "uint8 ARM_DISABLED=0\n"
  "uint8 ARM_ENABLED=1\n"
  "\n"
  "uint8 base_state\n"
  "# Selected body mode; temporarily overridden by the legacy head/waist constraints in HEAD_FORWARD.\n"
  "uint8 body_state\n"
  "uint8 bimanual_state\n"
  "uint8 left_arm_state\n"
  "uint8 right_arm_state\n"
  "bool home_joint_reference_enabled\n"
  "\n"
  "# Independent head task.\n"
  "uint8 HEAD_DISABLED=0\n"
  "uint8 HEAD_TRACKING=1\n"
  "uint8 HEAD_GAZE=2\n"
  "uint8 HEAD_FORWARD=3\n"
  "uint8 head_state\n"
  "\n"
  "# Task activation, not a guarantee of alignment or reachability. Independent of body_state.\n"
  "bool head_midpoint_gaze_active";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__msg__WbcCurrentState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__msg__WbcCurrentState__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 762, 762},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__msg__WbcCurrentState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__msg__WbcCurrentState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
