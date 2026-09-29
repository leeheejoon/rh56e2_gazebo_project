// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/ExecutePath.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arms_ros2_control_msgs/srv/detail/execute_path__functions.h"
#include "arms_ros2_control_msgs/srv/detail/execute_path__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecutePath_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_Request_type_support_ids_t;

static const _ExecutePath_Request_type_support_ids_t _ExecutePath_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, ExecutePath_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, ExecutePath_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecutePath_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath_Request__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Request>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::ExecutePath_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, ExecutePath_Request)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecutePath_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_Response_type_support_ids_t;

static const _ExecutePath_Response_type_support_ids_t _ExecutePath_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, ExecutePath_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, ExecutePath_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecutePath_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath_Response__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Response>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::ExecutePath_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, ExecutePath_Response)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecutePath_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_Event_type_support_ids_t;

static const _ExecutePath_Event_type_support_ids_t _ExecutePath_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, ExecutePath_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, ExecutePath_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__ExecutePath_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath_Event__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Event>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::ExecutePath_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, ExecutePath_Event)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arms_ros2_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecutePath_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecutePath_type_support_ids_t;

static const _ExecutePath_type_support_ids_t _ExecutePath_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, ExecutePath)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, ExecutePath)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecutePath_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<arms_ros2_control_msgs::srv::ExecutePath>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<arms_ros2_control_msgs::srv::ExecutePath>,
  &arms_ros2_control_msgs__srv__ExecutePath__get_type_hash,
  &arms_ros2_control_msgs__srv__ExecutePath__get_type_description,
  &arms_ros2_control_msgs__srv__ExecutePath__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::ExecutePath_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, ExecutePath)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<arms_ros2_control_msgs::srv::ExecutePath>();
}

#ifdef __cplusplus
}
#endif
