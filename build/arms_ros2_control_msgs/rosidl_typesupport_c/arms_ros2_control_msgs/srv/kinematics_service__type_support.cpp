// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__type_support.h"
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
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

typedef struct _KinematicsService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_Request_type_support_ids_t;

static const _KinematicsService_Request_type_support_ids_t _KinematicsService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, KinematicsService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, KinematicsService_Request)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::KinematicsService_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
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

typedef struct _KinematicsService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_Response_type_support_ids_t;

static const _KinematicsService_Response_type_support_ids_t _KinematicsService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, KinematicsService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, KinematicsService_Response)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::KinematicsService_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__type_support.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"
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

typedef struct _KinematicsService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_Event_type_support_ids_t;

static const _KinematicsService_Event_type_support_ids_t _KinematicsService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, KinematicsService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, KinematicsService_Event)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::KinematicsService_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__type_support.h"
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
typedef struct _KinematicsService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _KinematicsService_type_support_ids_t;

static const _KinematicsService_type_support_ids_t _KinematicsService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, srv, KinematicsService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arms_ros2_control_msgs, srv, KinematicsService)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_KinematicsService_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &KinematicsService_Request_message_type_support_handle,
  &KinematicsService_Response_message_type_support_handle,
  &KinematicsService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    KinematicsService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arms_ros2_control_msgs,
    srv,
    KinematicsService
  ),
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_hash,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description,
  &arms_ros2_control_msgs__srv__KinematicsService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arms_ros2_control_msgs, srv, KinematicsService)() {
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_c::KinematicsService_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
