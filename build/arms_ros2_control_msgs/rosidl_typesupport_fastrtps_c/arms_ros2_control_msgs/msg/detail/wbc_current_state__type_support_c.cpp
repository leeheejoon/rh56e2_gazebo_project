// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__struct.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__functions.h"
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


using _WbcCurrentState__ros_msg_type = arms_ros2_control_msgs__msg__WbcCurrentState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_arms_ros2_control_msgs__msg__WbcCurrentState(
  const arms_ros2_control_msgs__msg__WbcCurrentState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: base_state
  {
    cdr << ros_message->base_state;
  }

  // Field name: body_state
  {
    cdr << ros_message->body_state;
  }

  // Field name: bimanual_state
  {
    cdr << ros_message->bimanual_state;
  }

  // Field name: left_arm_state
  {
    cdr << ros_message->left_arm_state;
  }

  // Field name: right_arm_state
  {
    cdr << ros_message->right_arm_state;
  }

  // Field name: home_joint_reference_enabled
  {
    cdr << (ros_message->home_joint_reference_enabled ? true : false);
  }

  // Field name: head_state
  {
    cdr << ros_message->head_state;
  }

  // Field name: head_midpoint_gaze_active
  {
    cdr << (ros_message->head_midpoint_gaze_active ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_deserialize_arms_ros2_control_msgs__msg__WbcCurrentState(
  eprosima::fastcdr::Cdr & cdr,
  arms_ros2_control_msgs__msg__WbcCurrentState * ros_message)
{
  // Field name: base_state
  {
    cdr >> ros_message->base_state;
  }

  // Field name: body_state
  {
    cdr >> ros_message->body_state;
  }

  // Field name: bimanual_state
  {
    cdr >> ros_message->bimanual_state;
  }

  // Field name: left_arm_state
  {
    cdr >> ros_message->left_arm_state;
  }

  // Field name: right_arm_state
  {
    cdr >> ros_message->right_arm_state;
  }

  // Field name: home_joint_reference_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->home_joint_reference_enabled = tmp ? true : false;
  }

  // Field name: head_state
  {
    cdr >> ros_message->head_state;
  }

  // Field name: head_midpoint_gaze_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->head_midpoint_gaze_active = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_arms_ros2_control_msgs__msg__WbcCurrentState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WbcCurrentState__ros_msg_type * ros_message = static_cast<const _WbcCurrentState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: base_state
  {
    size_t item_size = sizeof(ros_message->base_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_state
  {
    size_t item_size = sizeof(ros_message->body_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bimanual_state
  {
    size_t item_size = sizeof(ros_message->bimanual_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_arm_state
  {
    size_t item_size = sizeof(ros_message->left_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_arm_state
  {
    size_t item_size = sizeof(ros_message->right_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: home_joint_reference_enabled
  {
    size_t item_size = sizeof(ros_message->home_joint_reference_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_state
  {
    size_t item_size = sizeof(ros_message->head_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_midpoint_gaze_active
  {
    size_t item_size = sizeof(ros_message->head_midpoint_gaze_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_arms_ros2_control_msgs__msg__WbcCurrentState(
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

  // Field name: base_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: body_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: bimanual_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: home_joint_reference_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_midpoint_gaze_active
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
    using DataType = arms_ros2_control_msgs__msg__WbcCurrentState;
    is_plain =
      (
      offsetof(DataType, head_midpoint_gaze_active) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_key_arms_ros2_control_msgs__msg__WbcCurrentState(
  const arms_ros2_control_msgs__msg__WbcCurrentState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: base_state
  {
    cdr << ros_message->base_state;
  }

  // Field name: body_state
  {
    cdr << ros_message->body_state;
  }

  // Field name: bimanual_state
  {
    cdr << ros_message->bimanual_state;
  }

  // Field name: left_arm_state
  {
    cdr << ros_message->left_arm_state;
  }

  // Field name: right_arm_state
  {
    cdr << ros_message->right_arm_state;
  }

  // Field name: home_joint_reference_enabled
  {
    cdr << (ros_message->home_joint_reference_enabled ? true : false);
  }

  // Field name: head_state
  {
    cdr << ros_message->head_state;
  }

  // Field name: head_midpoint_gaze_active
  {
    cdr << (ros_message->head_midpoint_gaze_active ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_key_arms_ros2_control_msgs__msg__WbcCurrentState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WbcCurrentState__ros_msg_type * ros_message = static_cast<const _WbcCurrentState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: base_state
  {
    size_t item_size = sizeof(ros_message->base_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: body_state
  {
    size_t item_size = sizeof(ros_message->body_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bimanual_state
  {
    size_t item_size = sizeof(ros_message->bimanual_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_arm_state
  {
    size_t item_size = sizeof(ros_message->left_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_arm_state
  {
    size_t item_size = sizeof(ros_message->right_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: home_joint_reference_enabled
  {
    size_t item_size = sizeof(ros_message->home_joint_reference_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_state
  {
    size_t item_size = sizeof(ros_message->head_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: head_midpoint_gaze_active
  {
    size_t item_size = sizeof(ros_message->head_midpoint_gaze_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_key_arms_ros2_control_msgs__msg__WbcCurrentState(
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
  // Field name: base_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: body_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: bimanual_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: right_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: home_joint_reference_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: head_midpoint_gaze_active
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
    using DataType = arms_ros2_control_msgs__msg__WbcCurrentState;
    is_plain =
      (
      offsetof(DataType, head_midpoint_gaze_active) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _WbcCurrentState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arms_ros2_control_msgs__msg__WbcCurrentState * ros_message = static_cast<const arms_ros2_control_msgs__msg__WbcCurrentState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arms_ros2_control_msgs__msg__WbcCurrentState(ros_message, cdr);
}

static bool _WbcCurrentState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arms_ros2_control_msgs__msg__WbcCurrentState * ros_message = static_cast<arms_ros2_control_msgs__msg__WbcCurrentState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arms_ros2_control_msgs__msg__WbcCurrentState(cdr, ros_message);
}

static uint32_t _WbcCurrentState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arms_ros2_control_msgs__msg__WbcCurrentState(
      untyped_ros_message, 0));
}

static size_t _WbcCurrentState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arms_ros2_control_msgs__msg__WbcCurrentState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WbcCurrentState = {
  "arms_ros2_control_msgs::msg",
  "WbcCurrentState",
  _WbcCurrentState__cdr_serialize,
  _WbcCurrentState__cdr_deserialize,
  _WbcCurrentState__get_serialized_size,
  _WbcCurrentState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WbcCurrentState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WbcCurrentState,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__WbcCurrentState__get_type_hash,
  &arms_ros2_control_msgs__msg__WbcCurrentState__get_type_description,
  &arms_ros2_control_msgs__msg__WbcCurrentState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, msg, WbcCurrentState)() {
  return &_WbcCurrentState__type_support;
}

#if defined(__cplusplus)
}
#endif
