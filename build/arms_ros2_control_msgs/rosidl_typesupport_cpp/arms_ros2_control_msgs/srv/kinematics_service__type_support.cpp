// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
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

typedef struct _KinematicsService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_Request_type_support_ids_t;

static const _KinematicsService_Request_type_support_ids_t _KinematicsService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _KinematicsService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _KinematicsService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _KinematicsService_Request_type_support_symbol_names_t _KinematicsService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, KinematicsService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService_Request)),
  }
};

typedef struct _KinematicsService_Request_type_support_data_t
{
  void * data[2];
} _KinematicsService_Request_type_support_data_t;

static _KinematicsService_Request_type_support_data_t _KinematicsService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _KinematicsService_Request_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_KinematicsService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_KinematicsService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_KinematicsService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t KinematicsService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Request>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::KinematicsService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, KinematicsService_Request)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Request>();
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
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
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

typedef struct _KinematicsService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_Response_type_support_ids_t;

static const _KinematicsService_Response_type_support_ids_t _KinematicsService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _KinematicsService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _KinematicsService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _KinematicsService_Response_type_support_symbol_names_t _KinematicsService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, KinematicsService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService_Response)),
  }
};

typedef struct _KinematicsService_Response_type_support_data_t
{
  void * data[2];
} _KinematicsService_Response_type_support_data_t;

static _KinematicsService_Response_type_support_data_t _KinematicsService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _KinematicsService_Response_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_KinematicsService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_KinematicsService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_KinematicsService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t KinematicsService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Response>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::KinematicsService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, KinematicsService_Response)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Response>();
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
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
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

typedef struct _KinematicsService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_Event_type_support_ids_t;

static const _KinematicsService_Event_type_support_ids_t _KinematicsService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _KinematicsService_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _KinematicsService_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _KinematicsService_Event_type_support_symbol_names_t _KinematicsService_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, KinematicsService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService_Event)),
  }
};

typedef struct _KinematicsService_Event_type_support_data_t
{
  void * data[2];
} _KinematicsService_Event_type_support_data_t;

static _KinematicsService_Event_type_support_data_t _KinematicsService_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _KinematicsService_Event_message_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_KinematicsService_Event_message_typesupport_ids.typesupport_identifier[0],
  &_KinematicsService_Event_message_typesupport_symbol_names.symbol_name[0],
  &_KinematicsService_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t KinematicsService_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Event>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::KinematicsService_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, KinematicsService_Event)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Event>();
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
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
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

typedef struct _KinematicsService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_type_support_ids_t;

static const _KinematicsService_type_support_ids_t _KinematicsService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _KinematicsService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _KinematicsService_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _KinematicsService_type_support_symbol_names_t _KinematicsService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, KinematicsService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, KinematicsService)),
  }
};

typedef struct _KinematicsService_type_support_data_t
{
  void * data[2];
} _KinematicsService_type_support_data_t;

static _KinematicsService_type_support_data_t _KinematicsService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _KinematicsService_service_typesupport_map = {
  2,
  "arms_ros2_control_msgs",
  &_KinematicsService_service_typesupport_ids.typesupport_identifier[0],
  &_KinematicsService_service_typesupport_symbol_names.symbol_name[0],
  &_KinematicsService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t KinematicsService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<arms_ros2_control_msgs::srv::KinematicsService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<arms_ros2_control_msgs::srv::KinematicsService>,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::KinematicsService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, KinematicsService)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<arms_ros2_control_msgs::srv::KinematicsService>();
}

#ifdef __cplusplus
}
#endif
