// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_capability.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/WbcCapability in the package arms_ros2_control_msgs.
/**
  * WbcCapability.msg
  * ocs2_wbc_controller约束功能启用信息
 */
typedef struct arms_ros2_control_msgs__msg__WbcCapability
{
  bool has_mobile_base;
  bool has_body_relative_constraint;
  bool has_waist_lock;
  bool has_head_coupling;
  bool has_custom_joint_lock;
  bool has_bimanual_coupling;
  bool body_tracking_ee_enabled;
  bool head_tracking_ee_enabled;
  bool has_home_joint_reference;
  /// Configured ability to gaze at the midpoint of both end effectors.
  bool head_midpoint_gaze_enabled;
} arms_ros2_control_msgs__msg__WbcCapability;

// Struct for a sequence of arms_ros2_control_msgs__msg__WbcCapability.
typedef struct arms_ros2_control_msgs__msg__WbcCapability__Sequence
{
  arms_ros2_control_msgs__msg__WbcCapability * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__msg__WbcCapability__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__STRUCT_H_
