// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:msg/LinearMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/linear_message.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'endpoint'
// Member 'right_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'frame_id'
// Member 'arm_name'
// Member 'ik_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LinearMessage in the package arms_ros2_control_msgs.
/**
  * linear_trajectory.msg
  * 直线轨迹消息定义
 */
typedef struct arms_ros2_control_msgs__msg__LinearMessage
{
  /// ====== 直线终点 ======
  /// 直线终点
  geometry_msgs__msg__Pose endpoint;
  /// 双臂模式下右臂直线终点
  geometry_msgs__msg__Pose right_endpoint;
  /// ====== 运动参数 ======
  /// 线性运动约束（单位：m/s, m/s², m/s³）
  double max_linear_velocity;
  double max_linear_acceleration;
  double max_linear_jerk;
  /// 角运动约束（单位：rad/s, rad/s², rad/s³）
  double max_angular_velocity;
  double max_angular_acceleration;
  double max_angular_jerk;
  /// 时间模式定义运动时间
  double duration;
  /// ====== 配置选项 ======
  /// true 时间模式；false：参数约束
  bool time_mode;
  /// 坐标系id
  rosidl_runtime_c__String frame_id;
  /// 要发哪个手，"left"、"right"或者"both"
  rosidl_runtime_c__String arm_name;
  /// 'BFGS','DLS','AUTO'
  rosidl_runtime_c__String ik_type;
} arms_ros2_control_msgs__msg__LinearMessage;

// Struct for a sequence of arms_ros2_control_msgs__msg__LinearMessage.
typedef struct arms_ros2_control_msgs__msg__LinearMessage__Sequence
{
  arms_ros2_control_msgs__msg__LinearMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__msg__LinearMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__STRUCT_H_
