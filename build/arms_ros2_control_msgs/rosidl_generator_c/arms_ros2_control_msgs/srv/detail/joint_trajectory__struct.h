// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/joint_trajectory.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'waypoints'
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__struct.h"

/// Struct defined in srv/JointTrajectory in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__JointTrajectory_Request
{
  /// 关节名称列表
  rosidl_runtime_c__String__Sequence joint_names;
  /// 轨迹点列表
  arms_ros2_control_msgs__msg__JointWaypoint__Sequence waypoints;
} arms_ros2_control_msgs__srv__JointTrajectory_Request;

// Struct for a sequence of arms_ros2_control_msgs__srv__JointTrajectory_Request.
typedef struct arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence
{
  arms_ros2_control_msgs__srv__JointTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/JointTrajectory in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__JointTrajectory_Response
{
  /// 是否成功
  bool success;
  /// 结果消息
  rosidl_runtime_c__String message;
  /// 实际规划的总运动时间
  double planned_duration;
} arms_ros2_control_msgs__srv__JointTrajectory_Response;

// Struct for a sequence of arms_ros2_control_msgs__srv__JointTrajectory_Response.
typedef struct arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence
{
  arms_ros2_control_msgs__srv__JointTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__srv__JointTrajectory_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__srv__JointTrajectory_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/JointTrajectory in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__JointTrajectory_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence request;
  arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence response;
} arms_ros2_control_msgs__srv__JointTrajectory_Event;

// Struct for a sequence of arms_ros2_control_msgs__srv__JointTrajectory_Event.
typedef struct arms_ros2_control_msgs__srv__JointTrajectory_Event__Sequence
{
  arms_ros2_control_msgs__srv__JointTrajectory_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__JointTrajectory_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
