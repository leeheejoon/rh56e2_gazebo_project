// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:msg/Inputs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/inputs.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Inputs in the package arms_ros2_control_msgs.
/**
  * control input message
 */
typedef struct arms_ros2_control_msgs__msg__Inputs
{
  /// position
  float x;
  float y;
  float z;
  /// rotation
  float roll;
  float pitch;
  float yaw;
  /// command target, left(1) or right arm(2)
  int32_t target;
  /// hand/gripper: nan=no command; 0=close / 1=open (target_command); else 0~1 open ratio (target_percent)
  float hand_command;
} arms_ros2_control_msgs__msg__Inputs;

// Struct for a sequence of arms_ros2_control_msgs__msg__Inputs.
typedef struct arms_ros2_control_msgs__msg__Inputs__Sequence
{
  arms_ros2_control_msgs__msg__Inputs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__msg__Inputs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__STRUCT_H_
