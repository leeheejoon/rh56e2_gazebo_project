// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/ExecutePath.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arms_ros2_control_msgs/srv/detail/execute_path__struct.h"
#include "arms_ros2_control_msgs/srv/detail/execute_path__type_support.h"
#include "arms_ros2_control_msgs/srv/detail/execute_path__functions.h"
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

typedef struct _ExecutePath_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_Request_type_support_ids_t;

static const _ExecutePath_Request_type_support_ids_t _ExecutePath_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecutePath_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecutePath_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecutePath_Request_type_support_symbol_names_t _ExecutePath_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecutePath_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecutePath_Request)),
  }
};

typedef struct _ExecutePath_Request_type_support_data_t
{
  void * data[2];
} _ExecutePath_Request_type_support_data_t;

static _ExecutePath_Request_type_support_data_t _ExecutePath_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecutePath_Request_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecutePath_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecutePath_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecutePath_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecutePath_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecutePath_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath_Request__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecutePath_Request)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecutePath_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__functions.h"
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

typedef struct _ExecutePath_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_Response_type_support_ids_t;

static const _ExecutePath_Response_type_support_ids_t _ExecutePath_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecutePath_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecutePath_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecutePath_Response_type_support_symbol_names_t _ExecutePath_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecutePath_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecutePath_Response)),
  }
};

typedef struct _ExecutePath_Response_type_support_data_t
{
  void * data[2];
} _ExecutePath_Response_type_support_data_t;

static _ExecutePath_Response_type_support_data_t _ExecutePath_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecutePath_Response_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecutePath_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecutePath_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecutePath_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecutePath_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecutePath_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath_Response__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecutePath_Response)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecutePath_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__functions.h"
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

typedef struct _ExecutePath_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_Event_type_support_ids_t;

static const _ExecutePath_Event_type_support_ids_t _ExecutePath_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecutePath_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecutePath_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecutePath_Event_type_support_symbol_names_t _ExecutePath_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecutePath_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecutePath_Event)),
  }
};

typedef struct _ExecutePath_Event_type_support_data_t
{
  void * data[2];
} _ExecutePath_Event_type_support_data_t;

static _ExecutePath_Event_type_support_data_t _ExecutePath_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecutePath_Event_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecutePath_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecutePath_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecutePath_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecutePath_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecutePath_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath_Event__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecutePath_Event)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecutePath_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__type_support.h"
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
typedef struct _ExecutePath_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_type_support_ids_t;

static const _ExecutePath_type_support_ids_t _ExecutePath_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecutePath_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecutePath_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecutePath_type_support_symbol_names_t _ExecutePath_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecutePath)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecutePath)),
  }
};

typedef struct _ExecutePath_type_support_data_t
{
  void * data[2];
} _ExecutePath_type_support_data_t;

static _ExecutePath_type_support_data_t _ExecutePath_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecutePath_service_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecutePath_service_typesupport_ids.typesupport_identifier[0],
  &_ExecutePath_service_typesupport_symbol_names.symbol_name[0],
  &_ExecutePath_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecutePath_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ExecutePath_Request_message_type_support_handle,
  &ExecutePath_Response_message_type_support_handle,
  &ExecutePath_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    ExecutePath
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    ExecutePath
  ),
  &arms_ros2_control_msgs__srv__ExecutePath__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecutePath)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecutePath_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
