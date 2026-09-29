// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.h"
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__type_support.h"
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _JointTrajectory_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_Request_type_support_ids_t;

static const _JointTrajectory_Request_type_support_ids_t _JointTrajectory_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointTrajectory_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointTrajectory_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointTrajectory_Request_type_support_symbol_names_t _JointTrajectory_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, JointTrajectory_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Request)),
  }
};

typedef struct _JointTrajectory_Request_type_support_data_t
{
  void * data[2];
} _JointTrajectory_Request_type_support_data_t;

static _JointTrajectory_Request_type_support_data_t _JointTrajectory_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointTrajectory_Request_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_JointTrajectory_Request_message_typesupport_ids.typesupport_identifier[0],
  &_JointTrajectory_Request_message_typesupport_symbol_names.symbol_name[0],
  &_JointTrajectory_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointTrajectory_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, JointTrajectory_Request)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::JointTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _JointTrajectory_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_Response_type_support_ids_t;

static const _JointTrajectory_Response_type_support_ids_t _JointTrajectory_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointTrajectory_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointTrajectory_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointTrajectory_Response_type_support_symbol_names_t _JointTrajectory_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, JointTrajectory_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Response)),
  }
};

typedef struct _JointTrajectory_Response_type_support_data_t
{
  void * data[2];
} _JointTrajectory_Response_type_support_data_t;

static _JointTrajectory_Response_type_support_data_t _JointTrajectory_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointTrajectory_Response_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_JointTrajectory_Response_message_typesupport_ids.typesupport_identifier[0],
  &_JointTrajectory_Response_message_typesupport_symbol_names.symbol_name[0],
  &_JointTrajectory_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointTrajectory_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, JointTrajectory_Response)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::JointTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _JointTrajectory_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_Event_type_support_ids_t;

static const _JointTrajectory_Event_type_support_ids_t _JointTrajectory_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointTrajectory_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointTrajectory_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointTrajectory_Event_type_support_symbol_names_t _JointTrajectory_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, JointTrajectory_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory_Event)),
  }
};

typedef struct _JointTrajectory_Event_type_support_data_t
{
  void * data[2];
} _JointTrajectory_Event_type_support_data_t;

static _JointTrajectory_Event_type_support_data_t _JointTrajectory_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointTrajectory_Event_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_JointTrajectory_Event_message_typesupport_ids.typesupport_identifier[0],
  &_JointTrajectory_Event_message_typesupport_symbol_names.symbol_name[0],
  &_JointTrajectory_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointTrajectory_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, JointTrajectory_Event)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::JointTrajectory_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _JointTrajectory_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_type_support_ids_t;

static const _JointTrajectory_type_support_ids_t _JointTrajectory_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointTrajectory_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointTrajectory_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointTrajectory_type_support_symbol_names_t _JointTrajectory_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, JointTrajectory)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, JointTrajectory)),
  }
};

typedef struct _JointTrajectory_type_support_data_t
{
  void * data[2];
} _JointTrajectory_type_support_data_t;

static _JointTrajectory_type_support_data_t _JointTrajectory_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointTrajectory_service_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_JointTrajectory_service_typesupport_ids.typesupport_identifier[0],
  &_JointTrajectory_service_typesupport_symbol_names.symbol_name[0],
  &_JointTrajectory_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t JointTrajectory_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &JointTrajectory_Request_message_type_support_handle,
  &JointTrajectory_Response_message_type_support_handle,
  &JointTrajectory_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    JointTrajectory
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    JointTrajectory
  ),
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, JointTrajectory)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::JointTrajectory_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
