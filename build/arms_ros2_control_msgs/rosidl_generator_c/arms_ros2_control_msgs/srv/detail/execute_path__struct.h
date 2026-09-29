// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:srv/ExecutePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/execute_path.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_arm_path'
// Member 'right_arm_path'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in srv/ExecutePath in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__ExecutePath_Request
{
  /// 左臂路径点（坐标在 base frame 下）
  nav_msgs__msg__Path left_arm_path;
  /// 右臂路径点（双臂模式有效，单臂模式忽略）
  nav_msgs__msg__Path right_arm_path;
  /// 轨迹执行时长（秒），0 表示使用参数服务器默认值
  double trajectory_duration;
} arms_ros2_control_msgs__srv__ExecutePath_Request;

// Struct for a sequence of arms_ros2_control_msgs__srv__ExecutePath_Request.
typedef struct arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence
{
  arms_ros2_control_msgs__srv__ExecutePath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecutePath in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__ExecutePath_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// 实际使用的轨迹时长（秒）
  double estimated_duration;
} arms_ros2_control_msgs__srv__ExecutePath_Response;

// Struct for a sequence of arms_ros2_control_msgs__srv__ExecutePath_Response.
typedef struct arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence
{
  arms_ros2_control_msgs__srv__ExecutePath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__srv__ExecutePath_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__srv__ExecutePath_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ExecutePath in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__ExecutePath_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence request;
  arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence response;
} arms_ros2_control_msgs__srv__ExecutePath_Event;

// Struct for a sequence of arms_ros2_control_msgs__srv__ExecutePath_Event.
typedef struct arms_ros2_control_msgs__srv__ExecutePath_Event__Sequence
{
  arms_ros2_control_msgs__srv__ExecutePath_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__ExecutePath_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__STRUCT_H_
