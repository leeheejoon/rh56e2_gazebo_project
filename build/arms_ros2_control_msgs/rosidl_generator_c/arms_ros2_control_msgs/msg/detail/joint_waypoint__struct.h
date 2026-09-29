// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/joint_waypoint.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'velocity'
// Member 'max_velocity'
// Member 'max_acceleration'
// Member 'max_jerk'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointWaypoint in the package arms_ros2_control_msgs.
/**
  * TrajectoryWaypoint.msg
  * 关节路点信息
 */
typedef struct arms_ros2_control_msgs__msg__JointWaypoint
{
  /// 目标关节位置（movej）或关节速度(speedj)
  ///  关节位置
  rosidl_runtime_c__double__Sequence position;
  /// 关节速度
  rosidl_runtime_c__double__Sequence velocity;
  /// 转接比例百分比（0-1），用于多点轨迹的平滑转接
  double blend_ratio_percent;
  /// 规划的参数
  rosidl_runtime_c__double__Sequence max_velocity;
  rosidl_runtime_c__double__Sequence max_acceleration;
  rosidl_runtime_c__double__Sequence max_jerk;
  bool time_mode;
  double total_time;
} arms_ros2_control_msgs__msg__JointWaypoint;

// Struct for a sequence of arms_ros2_control_msgs__msg__JointWaypoint.
typedef struct arms_ros2_control_msgs__msg__JointWaypoint__Sequence
{
  arms_ros2_control_msgs__msg__JointWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__msg__JointWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__STRUCT_H_
