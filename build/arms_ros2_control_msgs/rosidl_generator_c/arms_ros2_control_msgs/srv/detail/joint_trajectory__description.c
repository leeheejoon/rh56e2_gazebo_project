// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__JointTrajectory__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xd4, 0x45, 0xa9, 0xe1, 0x21, 0xaa, 0x53,
      0x6c, 0x4c, 0x0f, 0xcc, 0x48, 0xb2, 0x7e, 0x10,
      0x27, 0xa3, 0x4f, 0x50, 0x40, 0xf7, 0x0a, 0x2b,
      0x77, 0x19, 0x1a, 0x3a, 0xbb, 0xf2, 0x30, 0x08,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xb3, 0xd1, 0x05, 0x96, 0xeb, 0x83, 0x7c,
      0x9a, 0x8d, 0x43, 0xd3, 0x6d, 0xb0, 0x89, 0x13,
      0xe4, 0x6b, 0x48, 0xd0, 0x4e, 0x71, 0xe1, 0xe8,
      0x7f, 0x71, 0x5e, 0x5b, 0xed, 0x06, 0xbc, 0xc1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa2, 0x54, 0x34, 0x62, 0xab, 0x7a, 0xa2, 0xae,
      0xcf, 0x78, 0x32, 0x2e, 0x1d, 0x4d, 0x96, 0xcf,
      0x65, 0x5a, 0xb6, 0x60, 0x13, 0x90, 0xe9, 0x8f,
      0x96, 0xce, 0xb1, 0x75, 0xda, 0x97, 0xe9, 0x5e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x1d, 0x7b, 0x09, 0x4d, 0x6c, 0x9d, 0xe9,
      0xf7, 0x5e, 0xa3, 0x9b, 0xdb, 0x95, 0x0b, 0x6b,
      0x8f, 0x94, 0xdc, 0x62, 0x8c, 0xfc, 0x52, 0x84,
      0xb2, 0x5c, 0x7d, 0xdd, 0x05, 0xfb, 0xac, 0xdc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t arms_ros2_control_msgs__msg__JointWaypoint__EXPECTED_HASH = {1, {
    0xa1, 0x2b, 0xb5, 0x68, 0x2d, 0x4e, 0x93, 0x19,
    0x08, 0x4a, 0x92, 0xef, 0x0e, 0x1c, 0x48, 0x07,
    0x4a, 0xc5, 0x15, 0x27, 0xb2, 0x6b, 0xe3, 0x42,
    0x15, 0x5c, 0x6c, 0x57, 0xbc, 0xb9, 0xce, 0x5b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char arms_ros2_control_msgs__srv__JointTrajectory__TYPE_NAME[] = "arms_ros2_control_msgs/srv/JointTrajectory";
static char arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME[] = "arms_ros2_control_msgs/msg/JointWaypoint";
static char arms_ros2_control_msgs__srv__JointTrajectory_Event__TYPE_NAME[] = "arms_ros2_control_msgs/srv/JointTrajectory_Event";
static char arms_ros2_control_msgs__srv__JointTrajectory_Request__TYPE_NAME[] = "arms_ros2_control_msgs/srv/JointTrajectory_Request";
static char arms_ros2_control_msgs__srv__JointTrajectory_Response__TYPE_NAME[] = "arms_ros2_control_msgs/srv/JointTrajectory_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__JointTrajectory__FIELD_NAME__request_message[] = "request_message";
static char arms_ros2_control_msgs__srv__JointTrajectory__FIELD_NAME__response_message[] = "response_message";
static char arms_ros2_control_msgs__srv__JointTrajectory__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__JointTrajectory__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__JointTrajectory__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arms_ros2_control_msgs__srv__JointTrajectory_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arms_ros2_control_msgs__srv__JointTrajectory_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arms_ros2_control_msgs__srv__JointTrajectory_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__srv__JointTrajectory__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__srv__JointTrajectory__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__JointTrajectory__TYPE_NAME, 42, 42},
      {arms_ros2_control_msgs__srv__JointTrajectory__FIELDS, 3, 3},
    },
    {arms_ros2_control_msgs__srv__JointTrajectory__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&arms_ros2_control_msgs__msg__JointWaypoint__EXPECTED_HASH, arms_ros2_control_msgs__msg__JointWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = arms_ros2_control_msgs__msg__JointWaypoint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__JointTrajectory_Request__FIELD_NAME__joint_names[] = "joint_names";
static char arms_ros2_control_msgs__srv__JointTrajectory_Request__FIELD_NAME__waypoints[] = "waypoints";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__JointTrajectory_Request__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Request__FIELD_NAME__joint_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Request__FIELD_NAME__waypoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__srv__JointTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__JointTrajectory_Request__TYPE_NAME, 50, 50},
      {arms_ros2_control_msgs__srv__JointTrajectory_Request__FIELDS, 2, 2},
    },
    {arms_ros2_control_msgs__srv__JointTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&arms_ros2_control_msgs__msg__JointWaypoint__EXPECTED_HASH, arms_ros2_control_msgs__msg__JointWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = arms_ros2_control_msgs__msg__JointWaypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELD_NAME__success[] = "success";
static char arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELD_NAME__message[] = "message";
static char arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELD_NAME__planned_duration[] = "planned_duration";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELD_NAME__planned_duration, 16, 16},
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
arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__JointTrajectory_Response__TYPE_NAME, 51, 51},
      {arms_ros2_control_msgs__srv__JointTrajectory_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELD_NAME__info[] = "info";
static char arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELD_NAME__request[] = "request";
static char arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arms_ros2_control_msgs__srv__JointTrajectory_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arms_ros2_control_msgs__srv__JointTrajectory_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__srv__JointTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arms_ros2_control_msgs__msg__JointWaypoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__JointTrajectory_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__JointTrajectory_Event__TYPE_NAME, 48, 48},
      {arms_ros2_control_msgs__srv__JointTrajectory_Event__FIELDS, 3, 3},
    },
    {arms_ros2_control_msgs__srv__JointTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&arms_ros2_control_msgs__msg__JointWaypoint__EXPECTED_HASH, arms_ros2_control_msgs__msg__JointWaypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = arms_ros2_control_msgs__msg__JointWaypoint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "string[] joint_names                          # \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe5\\x90\\x8d\\xe7\\xa7\\xb0\\xe5\\x88\\x97\\xe8\\xa1\\xa8\n"
  "JointWaypoint[] waypoints                # \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe7\\x82\\xb9\\xe5\\x88\\x97\\xe8\\xa1\\xa8\n"
  "---\n"
  "#\\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "bool success                  # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\n"
  "string message                # \\xe7\\xbb\\x93\\xe6\\x9e\\x9c\\xe6\\xb6\\x88\\xe6\\x81\\xaf\n"
  "float64 planned_duration      # \\xe5\\xae\\x9e\\xe9\\x99\\x85\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe7\\x9a\\x84\\xe6\\x80\\xbb\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe6\\x97\\xb6\\xe9\\x97\\xb4";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__JointTrajectory__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__JointTrajectory__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 236, 236},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__JointTrajectory_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__JointTrajectory_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__JointTrajectory_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__JointTrajectory_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__JointTrajectory_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__JointTrajectory_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__JointTrajectory__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__JointTrajectory__get_individual_type_description_source(NULL),
    sources[1] = *arms_ros2_control_msgs__msg__JointWaypoint__get_individual_type_description_source(NULL);
    sources[2] = *arms_ros2_control_msgs__srv__JointTrajectory_Event__get_individual_type_description_source(NULL);
    sources[3] = *arms_ros2_control_msgs__srv__JointTrajectory_Request__get_individual_type_description_source(NULL);
    sources[4] = *arms_ros2_control_msgs__srv__JointTrajectory_Response__get_individual_type_description_source(NULL);
    sources[5] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__JointTrajectory_Request__get_individual_type_description_source(NULL),
    sources[1] = *arms_ros2_control_msgs__msg__JointWaypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__JointTrajectory_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__JointTrajectory_Event__get_individual_type_description_source(NULL),
    sources[1] = *arms_ros2_control_msgs__msg__JointWaypoint__get_individual_type_description_source(NULL);
    sources[2] = *arms_ros2_control_msgs__srv__JointTrajectory_Request__get_individual_type_description_source(NULL);
    sources[3] = *arms_ros2_control_msgs__srv__JointTrajectory_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
