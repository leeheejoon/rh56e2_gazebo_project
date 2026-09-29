// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:msg/LinearMessage.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/msg/detail/linear_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__msg__LinearMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0xdf, 0x33, 0x1a, 0x89, 0x07, 0x86, 0x47,
      0x05, 0xe1, 0x7e, 0x24, 0xb2, 0xa8, 0xba, 0xe4,
      0x27, 0x7a, 0xba, 0x44, 0x61, 0x52, 0x5c, 0x4b,
      0x51, 0x50, 0xb9, 0x9d, 0xb9, 0x55, 0xec, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
#endif

static char arms_ros2_control_msgs__msg__LinearMessage__TYPE_NAME[] = "arms_ros2_control_msgs/msg/LinearMessage";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__endpoint[] = "endpoint";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__right_endpoint[] = "right_endpoint";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_linear_velocity[] = "max_linear_velocity";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_linear_acceleration[] = "max_linear_acceleration";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_linear_jerk[] = "max_linear_jerk";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_angular_velocity[] = "max_angular_velocity";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_angular_acceleration[] = "max_angular_acceleration";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_angular_jerk[] = "max_angular_jerk";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__duration[] = "duration";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__time_mode[] = "time_mode";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__frame_id[] = "frame_id";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__arm_name[] = "arm_name";
static char arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__ik_type[] = "ik_type";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__msg__LinearMessage__FIELDS[] = {
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__endpoint, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__right_endpoint, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_linear_velocity, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_linear_acceleration, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_linear_jerk, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_angular_velocity, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_angular_acceleration, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__max_angular_jerk, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__time_mode, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__frame_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__arm_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__LinearMessage__FIELD_NAME__ik_type, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__msg__LinearMessage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__msg__LinearMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__msg__LinearMessage__TYPE_NAME, 40, 40},
      {arms_ros2_control_msgs__msg__LinearMessage__FIELDS, 13, 13},
    },
    {arms_ros2_control_msgs__msg__LinearMessage__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# linear_trajectory.msg\n"
  "# \\xe7\\x9b\\xb4\\xe7\\xba\\xbf\\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe5\\xae\\x9a\\xe4\\xb9\\x89\n"
  "\n"
  "# ====== \\xe7\\x9b\\xb4\\xe7\\xba\\xbf\\xe7\\xbb\\x88\\xe7\\x82\\xb9 ======\n"
  "geometry_msgs/Pose endpoint  # \\xe7\\x9b\\xb4\\xe7\\xba\\xbf\\xe7\\xbb\\x88\\xe7\\x82\\xb9\n"
  "geometry_msgs/Pose right_endpoint  # \\xe5\\x8f\\x8c\\xe8\\x87\\x82\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe4\\xb8\\x8b\\xe5\\x8f\\xb3\\xe8\\x87\\x82\\xe7\\x9b\\xb4\\xe7\\xba\\xbf\\xe7\\xbb\\x88\\xe7\\x82\\xb9\n"
  "\n"
  "# ====== \\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe5\\x8f\\x82\\xe6\\x95\\xb0 ======\n"
  "# \\xe7\\xba\\xbf\\xe6\\x80\\xa7\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe7\\xba\\xa6\\xe6\\x9d\\x9f\\xef\\xbc\\x88\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9am/s, m/s\\xc2\\xb2, m/s\\xc2\\xb3\\xef\\xbc\\x89\n"
  "float64 max_linear_velocity\n"
  "float64 max_linear_acceleration\n"
  "float64 max_linear_jerk\n"
  "\n"
  "# \\xe8\\xa7\\x92\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe7\\xba\\xa6\\xe6\\x9d\\x9f\\xef\\xbc\\x88\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9arad/s, rad/s\\xc2\\xb2, rad/s\\xc2\\xb3\\xef\\xbc\\x89\n"
  "float64 max_angular_velocity\n"
  "float64 max_angular_acceleration\n"
  "float64 max_angular_jerk\n"
  "\n"
  "float64 duration                   # \\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe5\\xae\\x9a\\xe4\\xb9\\x89\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe6\\x97\\xb6\\xe9\\x97\\xb4\n"
  "\n"
  "# ====== \\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe9\\x80\\x89\\xe9\\xa1\\xb9 ======\n"
  "bool time_mode                     # true \\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xef\\xbc\\x9bfalse\\xef\\xbc\\x9a\\xe5\\x8f\\x82\\xe6\\x95\\xb0\\xe7\\xba\\xa6\\xe6\\x9d\\x9f\n"
  "string frame_id                    # \\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe7\\xb3\\xbbid\n"
  "string arm_name                    #\\xe8\\xa6\\x81\\xe5\\x8f\\x91\\xe5\\x93\\xaa\\xe4\\xb8\\xaa\\xe6\\x89\\x8b\\xef\\xbc\\x8c\"left\"\\xe3\\x80\\x81\"right\"\\xe6\\x88\\x96\\xe8\\x80\\x85\"both\"\n"
  "string ik_type                     #'BFGS','DLS','AUTO'";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__msg__LinearMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__msg__LinearMessage__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 692, 692},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__msg__LinearMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__msg__LinearMessage__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
