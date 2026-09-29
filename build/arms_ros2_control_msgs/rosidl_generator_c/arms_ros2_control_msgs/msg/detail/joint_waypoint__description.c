// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__msg__JointWaypoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x2b, 0xb5, 0x68, 0x2d, 0x4e, 0x93, 0x19,
      0x08, 0x4a, 0x92, 0xef, 0x0e, 0x1c, 0x48, 0x07,
      0x4a, 0xc5, 0x15, 0x27, 0xb2, 0x6b, 0xe3, 0x42,
      0x15, 0x5c, 0x6c, 0x57, 0xbc, 0xb9, 0xce, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME[] = "arms_ros2_control_msgs/msg/JointWaypoint";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__position[] = "position";
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__velocity[] = "velocity";
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__blend_ratio_percent[] = "blend_ratio_percent";
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__max_velocity[] = "max_velocity";
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__max_acceleration[] = "max_acceleration";
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__max_jerk[] = "max_jerk";
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__time_mode[] = "time_mode";
static char arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__total_time[] = "total_time";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__msg__JointWaypoint__FIELDS[] = {
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__blend_ratio_percent, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__max_velocity, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__max_acceleration, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__max_jerk, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__time_mode, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__FIELD_NAME__total_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__msg__JointWaypoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME, 40, 40},
      {arms_ros2_control_msgs__msg__JointWaypoint__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# TrajectoryWaypoint.msg\n"
  "# \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe8\\xb7\\xaf\\xe7\\x82\\xb9\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\n"
  "\n"
  "#\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xef\\xbc\\x88movej\\xef\\xbc\\x89\\xe6\\x88\\x96\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9f\\xe5\\xba\\xa6(speedj)\n"
  "float64[] position          # \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\n"
  "float64[] velocity         # \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9f\\xe5\\xba\\xa6\n"
  "float64 blend_ratio_percent    # \\xe8\\xbd\\xac\\xe6\\x8e\\xa5\\xe6\\xaf\\x94\\xe4\\xbe\\x8b\\xe7\\x99\\xbe\\xe5\\x88\\x86\\xe6\\xaf\\x94\\xef\\xbc\\x880-1\\xef\\xbc\\x89\\xef\\xbc\\x8c\\xe7\\x94\\xa8\\xe4\\xba\\x8e\\xe5\\xa4\\x9a\\xe7\\x82\\xb9\\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe7\\x9a\\x84\\xe5\\xb9\\xb3\\xe6\\xbb\\x91\\xe8\\xbd\\xac\\xe6\\x8e\\xa5\n"
  "\n"
  "#\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe7\\x9a\\x84\\xe5\\x8f\\x82\\xe6\\x95\\xb0\n"
  "float64[] max_velocity\n"
  "float64[] max_acceleration\n"
  "float64[] max_jerk\n"
  "\n"
  "bool time_mode\n"
  "float64 total_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__msg__JointWaypoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 302, 302},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__msg__JointWaypoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__msg__JointWaypoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
