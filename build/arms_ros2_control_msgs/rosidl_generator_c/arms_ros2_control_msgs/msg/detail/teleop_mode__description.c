// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/msg/detail/teleop_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__msg__TeleopMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xa0, 0xd4, 0x36, 0x51, 0x45, 0x1c, 0xcb,
      0xdb, 0x00, 0xbf, 0x74, 0xe5, 0xcb, 0xee, 0x60,
      0xd5, 0x90, 0x69, 0xe2, 0xd4, 0xba, 0x65, 0x33,
      0x71, 0x7c, 0x9a, 0xe6, 0x4f, 0x83, 0xbd, 0x11,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char arms_ros2_control_msgs__msg__TeleopMode__TYPE_NAME[] = "arms_ros2_control_msgs/msg/TeleopMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__stamp[] = "stamp";
static char arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__active[] = "active";
static char arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__control_mode[] = "control_mode";
static char arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__mirror_movement[] = "mirror_movement";
static char arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__speed_level[] = "speed_level";
static char arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__speed_scale[] = "speed_scale";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__msg__TeleopMode__FIELDS[] = {
  {
    {arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__control_mode, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__mirror_movement, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__speed_level, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__msg__TeleopMode__FIELD_NAME__speed_scale, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__msg__TeleopMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__msg__TeleopMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__msg__TeleopMode__TYPE_NAME, 37, 37},
      {arms_ros2_control_msgs__msg__TeleopMode__FIELDS, 6, 6},
    },
    {arms_ros2_control_msgs__msg__TeleopMode__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# control mode\n"
  "uint8 CONTROL_ARM=0\n"
  "uint8 CONTROL_CHASSIS=1\n"
  "\n"
  "builtin_interfaces/Time stamp\n"
  "\n"
  "# true when teleop commands are active (joystick must enable; keyboard always true)\n"
  "bool active\n"
  "uint8 control_mode\n"
  "bool mirror_movement\n"
  "int32 speed_level\n"
  "float32 speed_scale";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__msg__TeleopMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__msg__TeleopMode__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 265, 265},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__msg__TeleopMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__msg__TeleopMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
