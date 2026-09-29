// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:srv/MovecUseIK.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/movec_use_ik.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__MOVEC_USE_IK__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__MOVEC_USE_IK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'circle_params'
#include "arms_ros2_control_msgs/msg/detail/circle_message__struct.h"

/// Struct defined in srv/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__MovecUseIK_Request
{
  arms_ros2_control_msgs__msg__CircleMessage circle_params;
} arms_ros2_control_msgs__srv__MovecUseIK_Request;

// Struct for a sequence of arms_ros2_control_msgs__srv__MovecUseIK_Request.
typedef struct arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence
{
  arms_ros2_control_msgs__srv__MovecUseIK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__MovecUseIK_Response
{
  bool success;
  rosidl_runtime_c__String message;
  double estimated_duration;
} arms_ros2_control_msgs__srv__MovecUseIK_Response;

// Struct for a sequence of arms_ros2_control_msgs__srv__MovecUseIK_Response.
typedef struct arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence
{
  arms_ros2_control_msgs__srv__MovecUseIK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__srv__MovecUseIK_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__srv__MovecUseIK_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__MovecUseIK_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence request;
  arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence response;
} arms_ros2_control_msgs__srv__MovecUseIK_Event;

// Struct for a sequence of arms_ros2_control_msgs__srv__MovecUseIK_Event.
typedef struct arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence
{
  arms_ros2_control_msgs__srv__MovecUseIK_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__MOVEC_USE_IK__STRUCT_H_
