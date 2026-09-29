// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from arms_ros2_control_msgs:msg/Inputs.idl
// generated code does not contain a copyright notice
#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arms_ros2_control_msgs/msg/detail/inputs__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_arms_ros2_control_msgs__msg__Inputs(
  const arms_ros2_control_msgs__msg__Inputs * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_deserialize_arms_ros2_control_msgs__msg__Inputs(
  eprosima::fastcdr::Cdr &,
  arms_ros2_control_msgs__msg__Inputs * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_arms_ros2_control_msgs__msg__Inputs(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_arms_ros2_control_msgs__msg__Inputs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_key_arms_ros2_control_msgs__msg__Inputs(
  const arms_ros2_control_msgs__msg__Inputs * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_key_arms_ros2_control_msgs__msg__Inputs(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_key_arms_ros2_control_msgs__msg__Inputs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, msg, Inputs)();

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
