// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/teleop_mode.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CONTROL_ARM'.
enum
{
  arms_ros2_control_msgs__msg__TeleopMode__CONTROL_ARM = 0
};

/// Constant 'CONTROL_CHASSIS'.
enum
{
  arms_ros2_control_msgs__msg__TeleopMode__CONTROL_CHASSIS = 1
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TeleopMode in the package arms_ros2_control_msgs.
/**
  * control mode
 */
typedef struct arms_ros2_control_msgs__msg__TeleopMode
{
  builtin_interfaces__msg__Time stamp;
  /// true when teleop commands are active (joystick must enable; keyboard always true)
  bool active;
  uint8_t control_mode;
  bool mirror_movement;
  int32_t speed_level;
  float speed_scale;
} arms_ros2_control_msgs__msg__TeleopMode;

// Struct for a sequence of arms_ros2_control_msgs__msg__TeleopMode.
typedef struct arms_ros2_control_msgs__msg__TeleopMode__Sequence
{
  arms_ros2_control_msgs__msg__TeleopMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__msg__TeleopMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__STRUCT_H_
