// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.hpp"
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

typedef struct _JointTrajectory_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_Request_type_support_ids_t;

static const _JointTrajectory_Request_type_support_ids_t _JointTrajectory_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Request>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::JointTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Request)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Request>();
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
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.hpp"
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

typedef struct _JointTrajectory_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_Response_type_support_ids_t;

static const _JointTrajectory_Response_type_support_ids_t _JointTrajectory_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Response>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::JointTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Response)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Response>();
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
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__functions.h"
// already included above
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.hpp"
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

typedef struct _JointTrajectory_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_Event_type_support_ids_t;

static const _JointTrajectory_Event_type_support_ids_t _JointTrajectory_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Event>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::JointTrajectory_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, JointTrajectory_Event)() {
  return get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Event>();
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
// #include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.hpp"
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

typedef struct _JointTrajectory_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointTrajectory_type_support_ids_t;

static const _JointTrajectory_type_support_ids_t _JointTrajectory_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, srv, JointTrajectory)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arms_ros2_control_msgs, srv, JointTrajectory)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointTrajectory_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<arms_ros2_control_msgs::srv::JointTrajectory>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<arms_ros2_control_msgs::srv::JointTrajectory>,
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_hash,
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_description,
  &arms_ros2_control_msgs__srv__JointTrajectory__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory>()
{
  return &::arms_ros2_control_msgs::srv::rosidl_typesupport_cpp::JointTrajectory_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, arms_ros2_control_msgs, srv, JointTrajectory)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<arms_ros2_control_msgs::srv::JointTrajectory>();
}

#ifdef __cplusplus
}
#endif
