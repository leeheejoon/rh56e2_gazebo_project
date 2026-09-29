// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/ExecuteLinear.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arms_ros2_control_msgs/srv/detail/execute_linear__struct.h"
#include "arms_ros2_control_msgs/srv/detail/execute_linear__type_support.h"
#include "arms_ros2_control_msgs/srv/detail/execute_linear__functions.h"
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

typedef struct _ExecuteLinear_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteLinear_Request_type_support_ids_t;

static const _ExecuteLinear_Request_type_support_ids_t _ExecuteLinear_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteLinear_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteLinear_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteLinear_Request_type_support_symbol_names_t _ExecuteLinear_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecuteLinear_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecuteLinear_Request)),
  }
};

typedef struct _ExecuteLinear_Request_type_support_data_t
{
  void * data[2];
} _ExecuteLinear_Request_type_support_data_t;

static _ExecuteLinear_Request_type_support_data_t _ExecuteLinear_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteLinear_Request_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecuteLinear_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteLinear_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteLinear_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteLinear_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteLinear_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Request__get_type_description,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecuteLinear_Request)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecuteLinear_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_linear__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_linear__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_linear__functions.h"
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

typedef struct _ExecuteLinear_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteLinear_Response_type_support_ids_t;

static const _ExecuteLinear_Response_type_support_ids_t _ExecuteLinear_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteLinear_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteLinear_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteLinear_Response_type_support_symbol_names_t _ExecuteLinear_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecuteLinear_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecuteLinear_Response)),
  }
};

typedef struct _ExecuteLinear_Response_type_support_data_t
{
  void * data[2];
} _ExecuteLinear_Response_type_support_data_t;

static _ExecuteLinear_Response_type_support_data_t _ExecuteLinear_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteLinear_Response_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecuteLinear_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteLinear_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteLinear_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteLinear_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteLinear_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Response__get_type_description,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecuteLinear_Response)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecuteLinear_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_linear__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_linear__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_linear__functions.h"
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

typedef struct _ExecuteLinear_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteLinear_Event_type_support_ids_t;

static const _ExecuteLinear_Event_type_support_ids_t _ExecuteLinear_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteLinear_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteLinear_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteLinear_Event_type_support_symbol_names_t _ExecuteLinear_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecuteLinear_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecuteLinear_Event)),
  }
};

typedef struct _ExecuteLinear_Event_type_support_data_t
{
  void * data[2];
} _ExecuteLinear_Event_type_support_data_t;

static _ExecuteLinear_Event_type_support_data_t _ExecuteLinear_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteLinear_Event_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecuteLinear_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteLinear_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteLinear_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteLinear_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteLinear_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Event__get_type_description,
  &arms_ros2_control_msgs__srv__ExecuteLinear_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecuteLinear_Event)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecuteLinear_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_linear__type_support.h"
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
typedef struct _ExecuteLinear_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteLinear_type_support_ids_t;

static const _ExecuteLinear_type_support_ids_t _ExecuteLinear_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteLinear_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteLinear_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteLinear_type_support_symbol_names_t _ExecuteLinear_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, ExecuteLinear)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, ExecuteLinear)),
  }
};

typedef struct _ExecuteLinear_type_support_data_t
{
  void * data[2];
} _ExecuteLinear_type_support_data_t;

static _ExecuteLinear_type_support_data_t _ExecuteLinear_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteLinear_service_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_ExecuteLinear_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteLinear_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteLinear_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteLinear_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteLinear_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ExecuteLinear_Request_message_type_support_handle,
  &ExecuteLinear_Response_message_type_support_handle,
  &ExecuteLinear_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    ExecuteLinear
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    ExecuteLinear
  ),
  &arms_ros2_control_msgs__srv__ExecuteLinear__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecuteLinear__get_type_description,
  &arms_ros2_control_msgs__srv__ExecuteLinear__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, ExecuteLinear)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::ExecuteLinear_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
