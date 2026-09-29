// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_current_state.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BASE_LOCKED'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BASE_LOCKED = 0
};

/// Constant 'BASE_UNLOCKED'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BASE_UNLOCKED = 1
};

/// Constant 'BODY_FREE'.
/**
  * body
 */
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BODY_FREE = 0
};

/// Constant 'BODY_VERTICAL'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BODY_VERTICAL = 1
};

/// Constant 'BODY_TRACKING'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BODY_TRACKING = 2
};

/// Constant 'BODY_LOCKED'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BODY_LOCKED = 3
};

/// Constant 'BODY_CUSTOM_LOCKED'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BODY_CUSTOM_LOCKED = 5
};

/// Constant 'BIMANUAL_INDEPENDENT'.
/**
  * bimanual
 */
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BIMANUAL_INDEPENDENT = 0
};

/// Constant 'BIMANUAL_COUPLED'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__BIMANUAL_COUPLED = 1
};

/// Constant 'ARM_DISABLED'.
/**
  * arm
 */
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__ARM_DISABLED = 0
};

/// Constant 'ARM_ENABLED'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__ARM_ENABLED = 1
};

/// Constant 'HEAD_DISABLED'.
/**
  * Independent head task.
 */
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__HEAD_DISABLED = 0
};

/// Constant 'HEAD_TRACKING'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__HEAD_TRACKING = 1
};

/// Constant 'HEAD_GAZE'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__HEAD_GAZE = 2
};

/// Constant 'HEAD_FORWARD'.
enum
{
  arms_ros2_control_msgs__msg__WbcCurrentState__HEAD_FORWARD = 3
};

/// Struct defined in msg/WbcCurrentState in the package arms_ros2_control_msgs.
/**
  * base
 */
typedef struct arms_ros2_control_msgs__msg__WbcCurrentState
{
  uint8_t base_state;
  /// Selected body mode; temporarily overridden by the legacy head/waist constraints in HEAD_FORWARD.
  uint8_t body_state;
  uint8_t bimanual_state;
  uint8_t left_arm_state;
  uint8_t right_arm_state;
  bool home_joint_reference_enabled;
  uint8_t head_state;
  /// Task activation, not a guarantee of alignment or reachability. Independent of body_state.
  bool head_midpoint_gaze_active;
} arms_ros2_control_msgs__msg__WbcCurrentState;

// Struct for a sequence of arms_ros2_control_msgs__msg__WbcCurrentState.
typedef struct arms_ros2_control_msgs__msg__WbcCurrentState__Sequence
{
  arms_ros2_control_msgs__msg__WbcCurrentState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__msg__WbcCurrentState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__STRUCT_H_
