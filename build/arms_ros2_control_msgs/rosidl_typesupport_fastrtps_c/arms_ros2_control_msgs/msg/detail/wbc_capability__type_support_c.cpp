// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__struct.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WbcCapability__ros_msg_type = arms_ros2_control_msgs__msg__WbcCapability;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_arms_ros2_control_msgs__msg__WbcCapability(
  const arms_ros2_control_msgs__msg__WbcCapability * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: has_mobile_base
  {
    cdr << (ros_message->has_mobile_base ? true : false);
  }

  // Field name: has_body_relative_constraint
  {
    cdr << (ros_message->has_body_relative_constraint ? true : false);
  }

  // Field name: has_waist_lock
  {
    cdr << (ros_message->has_waist_lock ? true : false);
  }

  // Field name: has_head_coupling
  {
    cdr << (ros_message->has_head_coupling ? true : false);
  }

  // Field name: has_custom_joint_lock
  {
    cdr << (ros_message->has_custom_joint_lock ? true : false);
  }

  // Field name: has_bimanual_coupling
  {
    cdr << (ros_message->has_bimanual_coupling ? true : false);
  }

  // Field name: body_tracking_ee_enabled
  {
    cdr << (ros_message->body_tracking_ee_enabled ? true : false);
  }

  // Field name: head_tracking_ee_enabled
  {
    cdr << (ros_message->head_tracking_ee_enabled ? true : false);
  }

  // Field name: has_home_joint_reference
  {
    cdr << (ros_message->has_home_joint_reference ? true : false);
  }

  // Field name: head_midpoint_gaze_enabled
  {
    cdr << (ros_message->head_midpoint_gaze_enabled ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_deserialize_arms_ros2_control_msgs__msg__WbcCapability(
  eprosima::fastcdr::Cdr & cdr,
  arms_ros2_control_msgs__msg__WbcCapability * ros_message)
{
  // Field name: has_mobile_base
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_mobile_base = tmp ? true : false;
  }

  // Field name: has_body_relative_constraint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_body_relative_constraint = tmp ? true : false;
  }

  // Field name: has_waist_lock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_waist_lock = tmp ? true : false;
  }

  // Field name: has_head_coupling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_head_coupling = tmp ? true : false;
  }

  // Field name: has_custom_joint_lock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_custom_joint_lock = tmp ? true : false;
  }

  // Field name: has_bimanual_coupling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_bimanual_coupling = tmp ? true : false;
  }

  // Field name: body_tracking_ee_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->body_tracking_ee_enabled = tmp ? true : false;
  }

  // Field name: head_tracking_ee_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->head_tracking_ee_enabled = tmp ? true : false;
  }

  // Field name: has_home_joint_reference
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_home_joint_reference = tmp ? true : false;
  }

  // Field name: head_midpoint_gaze_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->head_midpoint_gaze_enabled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_arms_ros2_control_msgs__msg__WbcCapability(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WbcCapability__ros_msg_type * ros_message = static_cast<const _WbcCapability__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: has_mobile_base
  {
    size_t item_size = sizeof(ros_message->has_mobile_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_body_relative_constraint
  {
    size_t item_size = sizeof(ros_message->has_body_relative_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_waist_lock
  {
    size_t item_size = sizeof(ros_message->has_waist_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_head_coupling
  {
    size_t item_size = sizeof(ros_message->has_head_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_custom_joint_lock
  {
    size_t item_size = sizeof(ros_message->has_custom_joint_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_bimanual_coupling
  {
    size_t item_size = sizeof(ros_message->has_bimanual_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message->body_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message->head_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_home_joint_reference
  {
    size_t item_size = sizeof(ros_message->has_home_joint_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_midpoint_gaze_enabled
  {
    size_t item_size = sizeof(ros_message->head_midpoint_gaze_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_arms_ros2_control_msgs__msg__WbcCapability(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: has_mobile_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_body_relative_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_waist_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_head_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_custom_joint_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_bimanual_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: body_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_home_joint_reference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_midpoint_gaze_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arms_ros2_control_msgs__msg__WbcCapability;
    is_plain =
      (
      offsetof(DataType, head_midpoint_gaze_enabled) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_key_arms_ros2_control_msgs__msg__WbcCapability(
  const arms_ros2_control_msgs__msg__WbcCapability * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: has_mobile_base
  {
    cdr << (ros_message->has_mobile_base ? true : false);
  }

  // Field name: has_body_relative_constraint
  {
    cdr << (ros_message->has_body_relative_constraint ? true : false);
  }

  // Field name: has_waist_lock
  {
    cdr << (ros_message->has_waist_lock ? true : false);
  }

  // Field name: has_head_coupling
  {
    cdr << (ros_message->has_head_coupling ? true : false);
  }

  // Field name: has_custom_joint_lock
  {
    cdr << (ros_message->has_custom_joint_lock ? true : false);
  }

  // Field name: has_bimanual_coupling
  {
    cdr << (ros_message->has_bimanual_coupling ? true : false);
  }

  // Field name: body_tracking_ee_enabled
  {
    cdr << (ros_message->body_tracking_ee_enabled ? true : false);
  }

  // Field name: head_tracking_ee_enabled
  {
    cdr << (ros_message->head_tracking_ee_enabled ? true : false);
  }

  // Field name: has_home_joint_reference
  {
    cdr << (ros_message->has_home_joint_reference ? true : false);
  }

  // Field name: head_midpoint_gaze_enabled
  {
    cdr << (ros_message->head_midpoint_gaze_enabled ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_key_arms_ros2_control_msgs__msg__WbcCapability(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WbcCapability__ros_msg_type * ros_message = static_cast<const _WbcCapability__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: has_mobile_base
  {
    size_t item_size = sizeof(ros_message->has_mobile_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_body_relative_constraint
  {
    size_t item_size = sizeof(ros_message->has_body_relative_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_waist_lock
  {
    size_t item_size = sizeof(ros_message->has_waist_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_head_coupling
  {
    size_t item_size = sizeof(ros_message->has_head_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_custom_joint_lock
  {
    size_t item_size = sizeof(ros_message->has_custom_joint_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_bimanual_coupling
  {
    size_t item_size = sizeof(ros_message->has_bimanual_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message->body_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message->head_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_home_joint_reference
  {
    size_t item_size = sizeof(ros_message->has_home_joint_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_midpoint_gaze_enabled
  {
    size_t item_size = sizeof(ros_message->head_midpoint_gaze_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_key_arms_ros2_control_msgs__msg__WbcCapability(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: has_mobile_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_body_relative_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_waist_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_head_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_custom_joint_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_bimanual_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: body_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_home_joint_reference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_midpoint_gaze_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arms_ros2_control_msgs__msg__WbcCapability;
    is_plain =
      (
      offsetof(DataType, head_midpoint_gaze_enabled) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _WbcCapability__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arms_ros2_control_msgs__msg__WbcCapability * ros_message = static_cast<const arms_ros2_control_msgs__msg__WbcCapability *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arms_ros2_control_msgs__msg__WbcCapability(ros_message, cdr);
}

static bool _WbcCapability__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arms_ros2_control_msgs__msg__WbcCapability * ros_message = static_cast<arms_ros2_control_msgs__msg__WbcCapability *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arms_ros2_control_msgs__msg__WbcCapability(cdr, ros_message);
}

static uint32_t _WbcCapability__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arms_ros2_control_msgs__msg__WbcCapability(
      untyped_ros_message, 0));
}

static size_t _WbcCapability__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arms_ros2_control_msgs__msg__WbcCapability(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WbcCapability = {
  "arms_ros2_control_msgs::msg",
  "WbcCapability",
  _WbcCapability__cdr_serialize,
  _WbcCapability__cdr_deserialize,
  _WbcCapability__get_serialized_size,
  _WbcCapability__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WbcCapability__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WbcCapability,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__WbcCapability__get_type_hash,
  &arms_ros2_control_msgs__msg__WbcCapability__get_type_description,
  &arms_ros2_control_msgs__msg__WbcCapability__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, msg, WbcCapability)() {
  return &_WbcCapability__type_support;
}

#if defined(__cplusplus)
}
#endif
