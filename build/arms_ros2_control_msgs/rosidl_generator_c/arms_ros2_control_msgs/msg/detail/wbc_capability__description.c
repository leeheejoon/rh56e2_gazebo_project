// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/msg/detail/wbc_capability__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__msg__WbcCapability__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0x6a, 0xa3, 0xaa, 0x2b, 0x4f, 0x54, 0x81,
      0xdc, 0xf6, 0x2b, 0x6c, 0xa7, 0xfa, 0xb8, 0x4a,
      0x5c, 0xff, 0xba, 0xef, 0xb5, 0x74, 0x21, 0xb5,
      0xb8, 0x70, 0x1e, 0x75, 0xbc, 0x5a, 0xf0, 0x8a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arms_ros2_control_msgs__msg__WbcCapability__TYPE_NAME[] = "arms_ros2_control_msgs/msg/WbcCapability";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_mobile_base[] = "has_mobile_base";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_body_relative_constraint[] = "has_body_relative_constraint";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_waist_lock[] = "has_waist_lock";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_head_coupling[] = "has_head_coupling";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_custom_joint_lock[] = "has_custom_joint_lock";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_bimanual_coupling[] = "has_bimanual_coupling";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__body_tracking_ee_enabled[] = "body_tracking_ee_enabled";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__head_tracking_ee_enabled[] = "head_tracking_ee_enabled";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_home_joint_reference[] = "has_home_joint_reference";
static char arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__head_midpoint_gaze_enabled[] = "head_midpoint_gaze_enabled";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__msg__WbcCapability__FIELDS[] = {
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_mobile_base, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_body_relative_constraint, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_waist_lock, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_head_coupling, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_custom_joint_lock, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_bimanual_coupling, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__body_tracking_ee_enabled, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__head_tracking_ee_enabled, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__has_home_joint_reference, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__WbcCapability__FIELD_NAME__head_midpoint_gaze_enabled, 26, 26},
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
arms_ros2_control_msgs__msg__WbcCapability__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__msg__WbcCapability__TYPE_NAME, 40, 40},
      {arms_ros2_control_msgs__msg__WbcCapability__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# WbcCapability.msg\n"
  "# ocs2_wbc_controller\\xe7\\xba\\xa6\\xe6\\x9d\\x9f\\xe5\\x8a\\x9f\\xe8\\x83\\xbd\\xe5\\x90\\xaf\\xe7\\x94\\xa8\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\n"
  "\n"
  "bool has_mobile_base\n"
  "bool has_body_relative_constraint\n"
  "bool has_waist_lock\n"
  "bool has_head_coupling\n"
  "bool has_custom_joint_lock\n"
  "bool has_bimanual_coupling\n"
  "bool body_tracking_ee_enabled\n"
  "bool head_tracking_ee_enabled\n"
  "bool has_home_joint_reference\n"
  "\n"
  "# Configured ability to gaze at the midpoint of both end effectors.\n"
  "bool head_midpoint_gaze_enabled";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__msg__WbcCapability__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__msg__WbcCapability__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 394, 394},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__msg__WbcCapability__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__msg__WbcCapability__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
