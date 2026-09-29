// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

#include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__KinematicsService__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xfa, 0x59, 0x4b, 0x21, 0x2f, 0xb0, 0x18,
      0x0a, 0x93, 0x14, 0xa0, 0x85, 0xf3, 0xc8, 0x63,
      0x63, 0xb0, 0x6f, 0x6e, 0xcd, 0xf1, 0x07, 0x04,
      0xd2, 0xf8, 0x64, 0xc2, 0x62, 0x6a, 0x8c, 0x7d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x1f, 0x69, 0xd3, 0xb9, 0xe6, 0xb9, 0x86,
      0x89, 0x39, 0xa9, 0xd9, 0xf0, 0x4b, 0x7c, 0xc9,
      0xfc, 0xed, 0xe8, 0x40, 0xee, 0x67, 0x74, 0x9f,
      0xa1, 0x33, 0xa3, 0x11, 0x02, 0x66, 0xa2, 0xa9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x44, 0x85, 0x4b, 0xb6, 0xb7, 0x74, 0x6c,
      0x96, 0x5a, 0x73, 0x1b, 0x4e, 0xed, 0xa7, 0x29,
      0x0a, 0xac, 0xb8, 0x7c, 0x38, 0x3a, 0xbb, 0x08,
      0xcd, 0x5d, 0xcc, 0xd4, 0xc6, 0x36, 0x6d, 0x74,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arms_ros2_control_msgs
const rosidl_type_hash_t *
arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x2d, 0x3e, 0x68, 0x48, 0x55, 0x85, 0x50,
      0xf6, 0x0a, 0xbf, 0x80, 0x80, 0xc6, 0x97, 0x95,
      0x55, 0x90, 0xcc, 0x19, 0xb0, 0xb9, 0x18, 0x54,
      0x3a, 0x12, 0x48, 0x36, 0x13, 0x21, 0x4d, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char arms_ros2_control_msgs__srv__KinematicsService__TYPE_NAME[] = "arms_ros2_control_msgs/srv/KinematicsService";
static char arms_ros2_control_msgs__srv__KinematicsService_Event__TYPE_NAME[] = "arms_ros2_control_msgs/srv/KinematicsService_Event";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__TYPE_NAME[] = "arms_ros2_control_msgs/srv/KinematicsService_Request";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__TYPE_NAME[] = "arms_ros2_control_msgs/srv/KinematicsService_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__KinematicsService__FIELD_NAME__request_message[] = "request_message";
static char arms_ros2_control_msgs__srv__KinematicsService__FIELD_NAME__response_message[] = "response_message";
static char arms_ros2_control_msgs__srv__KinematicsService__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__KinematicsService__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__KinematicsService__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arms_ros2_control_msgs__srv__KinematicsService_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arms_ros2_control_msgs__srv__KinematicsService_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arms_ros2_control_msgs__srv__KinematicsService_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__srv__KinematicsService__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__srv__KinematicsService__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__KinematicsService__TYPE_NAME, 44, 44},
      {arms_ros2_control_msgs__srv__KinematicsService__FIELDS, 3, 3},
    },
    {arms_ros2_control_msgs__srv__KinematicsService__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__operation_type[] = "operation_type";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__arm_type[] = "arm_type";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__solver_type[] = "solver_type";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__joint_angles[] = "joint_angles";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__target_poses[] = "target_poses";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__max_iterations[] = "max_iterations";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__tolerance[] = "tolerance";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__dls_damping[] = "dls_damping";
static char arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__enable_random_restart[] = "enable_random_restart";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__KinematicsService_Request__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__operation_type, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__arm_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__solver_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__joint_angles, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__target_poses, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__max_iterations, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__tolerance, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__dls_damping, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELD_NAME__enable_random_restart, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__srv__KinematicsService_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__KinematicsService_Request__TYPE_NAME, 52, 52},
      {arms_ros2_control_msgs__srv__KinematicsService_Request__FIELDS, 9, 9},
    },
    {arms_ros2_control_msgs__srv__KinematicsService_Request__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
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
// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__success[] = "success";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__message[] = "message";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__result_poses[] = "result_poses";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__result_joint_angles[] = "result_joint_angles";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__used_solver[] = "used_solver";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__iterations[] = "iterations";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__final_error[] = "final_error";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__computation_time_ms[] = "computation_time_ms";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__is_out_of_range[] = "is_out_of_range";
static char arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__additional_info[] = "additional_info";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__KinematicsService_Response__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__result_poses, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__result_joint_angles, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__used_solver, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__iterations, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__final_error, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__computation_time_ms, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__is_out_of_range, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELD_NAME__additional_info, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__srv__KinematicsService_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__KinematicsService_Response__TYPE_NAME, 53, 53},
      {arms_ros2_control_msgs__srv__KinematicsService_Response__FIELDS, 10, 10},
    },
    {arms_ros2_control_msgs__srv__KinematicsService_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
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
// Define type names, field names, and default values
static char arms_ros2_control_msgs__srv__KinematicsService_Event__FIELD_NAME__info[] = "info";
static char arms_ros2_control_msgs__srv__KinematicsService_Event__FIELD_NAME__request[] = "request";
static char arms_ros2_control_msgs__srv__KinematicsService_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field arms_ros2_control_msgs__srv__KinematicsService_Event__FIELDS[] = {
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arms_ros2_control_msgs__srv__KinematicsService_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arms_ros2_control_msgs__srv__KinematicsService_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arms_ros2_control_msgs__srv__KinematicsService_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arms_ros2_control_msgs__srv__KinematicsService_Event__TYPE_NAME, 50, 50},
      {arms_ros2_control_msgs__srv__KinematicsService_Event__FIELDS, 3, 3},
    },
    {arms_ros2_control_msgs__srv__KinematicsService_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe5\\xad\\xa6\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe5\\xae\\x9a\\xe4\\xb9\\x89\n"
  "# \\xe6\\x94\\xaf\\xe6\\x8c\\x81\\xe6\\xad\\xa3\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe5\\xad\\xa6\\xef\\xbc\\x88FK\\xef\\xbc\\x89\\xe5\\x92\\x8c\\xe9\\x80\\x86\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe5\\xad\\xa6\\xef\\xbc\\x88IK\\xef\\xbc\\x89\n"
  "\n"
  "# ====== \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86 ======\n"
  "# \\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b: \"fk\" \\xe6\\x88\\x96 \"ik\"\n"
  "string operation_type\n"
  "\n"
  "# \\xe6\\x89\\x8b\\xe8\\x87\\x82\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b: \"left\", \"right\", \"both\"\n"
  "string arm_type\n"
  "\n"
  "# \\xe6\\xb1\\x82\\xe8\\xa7\\xa3\\xe5\\x99\\xa8\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b: \"dls\", \"bfgs\", \"auto\"\n"
  "# dls: \\xe9\\x98\\xbb\\xe5\\xb0\\xbc\\xe6\\x9c\\x80\\xe5\\xb0\\x8f\\xe4\\xba\\x8c\\xe4\\xb9\\x98\\xe6\\xb3\\x95\n"
  "# bfgs: BFGS\\xe4\\xbc\\x98\\xe5\\x8c\\x96\\xe6\\xb3\\x95\n"
  "# auto: \\xe8\\x87\\xaa\\xe5\\x8a\\xa8\\xe9\\x80\\x89\\xe6\\x8b\\xa9\\xef\\xbc\\x88\\xe6\\x8e\\xa8\\xe8\\x8d\\x90SDK auto\\xef\\xbc\\x8c\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe5\\x90\\x8e\\xe5\\x9b\\x9e\\xe9\\x80\\x80\\xef\\xbc\\x89\n"
  "string solver_type  # \\xe9\\xbb\\x98\\xe8\\xae\\xa4 \"auto\"\n"
  "\n"
  "# \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe8\\xa7\\x92\\xe5\\xba\\xa6 (\\xe7\\x94\\xa8\\xe4\\xba\\x8eFK\\xef\\xbc\\x8c\\xe6\\x88\\x96\\xe4\\xbd\\x9c\\xe4\\xb8\\xbaIK\\xe7\\x9a\\x84\\xe5\\x88\\x9d\\xe5\\xa7\\x8b\\xe7\\x8c\\x9c\\xe6\\xb5\\x8b)\n"
  "# \\xe5\\xaf\\xb9\\xe4\\xba\\x8e\\xe5\\x8d\\x95\\xe8\\x87\\x82: 7\\xe4\\xb8\\xaa\\xe5\\x85\\xb3\\xe8\\x8a\\x82\n"
  "# \\xe5\\xaf\\xb9\\xe4\\xba\\x8e\\xe5\\x8f\\x8c\\xe8\\x87\\x82: 14\\xe4\\xb8\\xaa\\xe5\\x85\\xb3\\xe8\\x8a\\x82 (\\xe5\\xb7\\xa6\\xe8\\x87\\x827\\xe4\\xb8\\xaa + \\xe5\\x8f\\xb3\\xe8\\x87\\x827\\xe4\\xb8\\xaa)\n"
  "float64[] joint_angles\n"
  "\n"
  "# \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf (\\xe7\\x94\\xa8\\xe4\\xba\\x8eIK)\n"
  "# \\xe5\\xaf\\xb9\\xe4\\xba\\x8e\\xe5\\x8d\\x95\\xe8\\x87\\x82: 1\\xe4\\xb8\\xaa\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf\n"
  "# \\xe5\\xaf\\xb9\\xe4\\xba\\x8e\\xe5\\x8f\\x8c\\xe8\\x87\\x82: 2\\xe4\\xb8\\xaa\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf (\\xe5\\xb7\\xa6\\xe8\\x87\\x82\\xe5\\x92\\x8c\\xe5\\x8f\\xb3\\xe8\\x87\\x82)\n"
  "geometry_msgs/Pose[] target_poses\n"
  "\n"
  "# IK\\xe5\\x8f\\x82\\xe6\\x95\\xb0\n"
  "int32 max_iterations      # \\xe6\\x9c\\x80\\xe5\\xa4\\xa7\\xe8\\xbf\\xad\\xe4\\xbb\\xa3\\xe6\\xac\\xa1\\xe6\\x95\\xb0 (\\xe9\\xbb\\x98\\xe8\\xae\\xa4: 100)\n"
  "float64 tolerance         # \\xe5\\xae\\xb9\\xe5\\xb7\\xae (\\xe9\\xbb\\x98\\xe8\\xae\\xa4: 1e-6)\n"
  "float64 dls_damping       # DLS\\xe9\\x98\\xbb\\xe5\\xb0\\xbc\\xe7\\xb3\\xbb\\xe6\\x95\\xb0 (\\xe9\\xbb\\x98\\xe8\\xae\\xa4: 0.01)\n"
  "bool enable_random_restart # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x90\\xaf\\xe7\\x94\\xa8\\xe9\\x9a\\x8f\\xe6\\x9c\\xba\\xe9\\x87\\x8d\\xe5\\x90\\xaf (\\xe9\\xbb\\x98\\xe8\\xae\\xa4: false)\n"
  "\n"
  "---\n"
  "# ====== \\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86 ======\n"
  "bool success\n"
  "string message\n"
  "\n"
  "# \\xe8\\xae\\xa1\\xe7\\xae\\x97\\xe7\\xbb\\x93\\xe6\\x9e\\x9c\n"
  "# \\xe5\\xaf\\xb9\\xe4\\xba\\x8eFK: \\xe8\\xae\\xa1\\xe7\\xae\\x97\\xe5\\x87\\xba\\xe7\\x9a\\x84\\xe4\\xbd\\x8d\\xe5\\xa7\\xbf (\\xe5\\x8d\\x95\\xe8\\x87\\x82: 1\\xe4\\xb8\\xaa, \\xe5\\x8f\\x8c\\xe8\\x87\\x82: 2\\xe4\\xb8\\xaa)\n"
  "# \\xe5\\xaf\\xb9\\xe4\\xba\\x8eIK: \\xe8\\xae\\xa1\\xe7\\xae\\x97\\xe5\\x87\\xba\\xe7\\x9a\\x84\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe8\\xa7\\x92\\xe5\\xba\\xa6\n"
  "geometry_msgs/Pose[] result_poses\n"
  "float64[] result_joint_angles\n"
  "\n"
  "# \\xe6\\xb1\\x82\\xe8\\xa7\\xa3\\xe5\\x99\\xa8\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\n"
  "string used_solver        # \\xe5\\xae\\x9e\\xe9\\x99\\x85\\xe4\\xbd\\xbf\\xe7\\x94\\xa8\\xe7\\x9a\\x84\\xe6\\xb1\\x82\\xe8\\xa7\\xa3\\xe5\\x99\\xa8\n"
  "int32 iterations          # \\xe8\\xbf\\xad\\xe4\\xbb\\xa3\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "float64 final_error       # \\xe6\\x9c\\x80\\xe7\\xbb\\x88\\xe8\\xaf\\xaf\\xe5\\xb7\\xae\n"
  "float64 computation_time_ms # \\xe8\\xae\\xa1\\xe7\\xae\\x97\\xe8\\x80\\x97\\xe6\\x97\\xb6 (\\xe6\\xaf\\xab\\xe7\\xa7\\x92)\n"
  "bool is_out_of_range      # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe8\\xb6\\x85\\xe5\\x87\\xba\\xe5\\xb7\\xa5\\xe4\\xbd\\x9c\\xe7\\xa9\\xba\\xe9\\x97\\xb4\n"
  "#bool[] is_degenerate      # \\xe5\\x90\\x84\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\xa5\\x87\\xe5\\xbc\\x82\\xef\\xbc\\x88\\xe4\\xbb\\x85SDK\\xef\\xbc\\x89\n"
  "#bool is_joint_exceeded    # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe8\\xb6\\x85\\xe5\\x87\\xba\\xe9\\x99\\x90\\xe4\\xbd\\x8d\\xef\\xbc\\x88\\xe4\\xbb\\x85SDK\\xef\\xbc\\x89\n"
  "string additional_info    # \\xe9\\x99\\x84\\xe5\\x8a\\xa0\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xef\\xbc\\x88\\xe5\\xa6\\x82SDK\\xe8\\xbf\\x94\\xe5\\x9b\\x9e\\xe7\\x9a\\x84\\xe8\\xaf\\xa6\\xe7\\xbb\\x86\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xef\\xbc\\x89";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__KinematicsService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__KinematicsService__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1130, 1130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__KinematicsService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__KinematicsService_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__KinematicsService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__KinematicsService_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arms_ros2_control_msgs__srv__KinematicsService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arms_ros2_control_msgs__srv__KinematicsService_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__KinematicsService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__KinematicsService__get_individual_type_description_source(NULL),
    sources[1] = *arms_ros2_control_msgs__srv__KinematicsService_Event__get_individual_type_description_source(NULL);
    sources[2] = *arms_ros2_control_msgs__srv__KinematicsService_Request__get_individual_type_description_source(NULL);
    sources[3] = *arms_ros2_control_msgs__srv__KinematicsService_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__KinematicsService_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__KinematicsService_Response__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arms_ros2_control_msgs__srv__KinematicsService_Event__get_individual_type_description_source(NULL),
    sources[1] = *arms_ros2_control_msgs__srv__KinematicsService_Request__get_individual_type_description_source(NULL);
    sources[2] = *arms_ros2_control_msgs__srv__KinematicsService_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
