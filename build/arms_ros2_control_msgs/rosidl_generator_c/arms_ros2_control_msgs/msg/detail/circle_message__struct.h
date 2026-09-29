// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:msg/CircleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/circle_message.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'midpoint'
// Member 'endpoint'
// Member 'right_midpoint'
// Member 'right_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'center'
// Member 'right_center'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'axis'
// Member 'right_axis'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'frame_id'
// Member 'arm_name'
// Member 'ik_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CircleMessage in the package arms_ros2_control_msgs.
/**
  * circle_trajectory.msg
  * 圆形轨迹消息定义
 */
typedef struct arms_ros2_control_msgs__msg__CircleMessage
{
  /// ====== 方法1：三点法定义圆弧 ======
  /// 需要提供3个点：起点、中间点、终点
  /// 其中起点通常由当前位置确定，这里只需提供中间点和终点
  /// 圆弧中间点
  geometry_msgs__msg__Pose midpoint;
  /// 圆弧终点
  geometry_msgs__msg__Pose endpoint;
  /// 双臂模式下右臂圆弧中间点
  geometry_msgs__msg__Pose right_midpoint;
  /// 双臂模式下右臂圆弧终点
  geometry_msgs__msg__Pose right_endpoint;
  /// ====== 方法2：参数法定义圆弧 ======
  /// 直接输入圆弧几何参数
  /// 圆心坐标
  geometry_msgs__msg__Point center;
  /// 旋转轴（单位向量）
  geometry_msgs__msg__Vector3 axis;
  /// 旋转角度（弧度）
  double rotate_angle;
  /// 双臂模式下右臂圆心坐标
  geometry_msgs__msg__Point right_center;
  /// 双臂模式下右臂旋转轴（单位向量）
  geometry_msgs__msg__Vector3 right_axis;
  /// 双臂模式下右臂旋转角度（弧度）
  double right_rotate_angle;
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
  /// true:使用三点法; false:使用参数法
  bool use_three_point_method;
  /// true:球面插值; false:线性插值
  bool use_slerp_for_orientation;
  /// true 时间模式；false：参数约束
  bool time_mode;
  /// 坐标系id
  rosidl_runtime_c__String frame_id;
  /// 'left'左臂，'right'右臂，'both'双臂
  rosidl_runtime_c__String arm_name;
  /// 'BFGS','DLS','AUTO','SDK'
  rosidl_runtime_c__String ik_type;
} arms_ros2_control_msgs__msg__CircleMessage;

// Struct for a sequence of arms_ros2_control_msgs__msg__CircleMessage.
typedef struct arms_ros2_control_msgs__msg__CircleMessage__Sequence
{
  arms_ros2_control_msgs__msg__CircleMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__msg__CircleMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__STRUCT_H_
