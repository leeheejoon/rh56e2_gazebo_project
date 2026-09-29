// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__functions.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace arms_ros2_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
cdr_serialize(
  const arms_ros2_control_msgs::msg::WbcCurrentState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_state
  cdr << ros_message.base_state;

  // Member: body_state
  cdr << ros_message.body_state;

  // Member: bimanual_state
  cdr << ros_message.bimanual_state;

  // Member: left_arm_state
  cdr << ros_message.left_arm_state;

  // Member: right_arm_state
  cdr << ros_message.right_arm_state;

  // Member: home_joint_reference_enabled
  cdr << (ros_message.home_joint_reference_enabled ? true : false);

  // Member: head_state
  cdr << ros_message.head_state;

  // Member: head_midpoint_gaze_active
  cdr << (ros_message.head_midpoint_gaze_active ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arms_ros2_control_msgs::msg::WbcCurrentState & ros_message)
{
  // Member: base_state
  cdr >> ros_message.base_state;

  // Member: body_state
  cdr >> ros_message.body_state;

  // Member: bimanual_state
  cdr >> ros_message.bimanual_state;

  // Member: left_arm_state
  cdr >> ros_message.left_arm_state;

  // Member: right_arm_state
  cdr >> ros_message.right_arm_state;

  // Member: home_joint_reference_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.home_joint_reference_enabled = tmp ? true : false;
  }

  // Member: head_state
  cdr >> ros_message.head_state;

  // Member: head_midpoint_gaze_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.head_midpoint_gaze_active = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
get_serialized_size(
  const arms_ros2_control_msgs::msg::WbcCurrentState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_state
  {
    size_t item_size = sizeof(ros_message.base_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: body_state
  {
    size_t item_size = sizeof(ros_message.body_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bimanual_state
  {
    size_t item_size = sizeof(ros_message.bimanual_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_arm_state
  {
    size_t item_size = sizeof(ros_message.left_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_arm_state
  {
    size_t item_size = sizeof(ros_message.right_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: home_joint_reference_enabled
  {
    size_t item_size = sizeof(ros_message.home_joint_reference_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_state
  {
    size_t item_size = sizeof(ros_message.head_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_midpoint_gaze_active
  {
    size_t item_size = sizeof(ros_message.head_midpoint_gaze_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
max_serialized_size_WbcCurrentState(
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

  // Member: base_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: body_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: bimanual_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: left_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: right_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: home_joint_reference_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: head_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: head_midpoint_gaze_active
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
    using DataType = arms_ros2_control_msgs::msg::WbcCurrentState;
    is_plain =
      (
      offsetof(DataType, head_midpoint_gaze_active) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
cdr_serialize_key(
  const arms_ros2_control_msgs::msg::WbcCurrentState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_state
  cdr << ros_message.base_state;

  // Member: body_state
  cdr << ros_message.body_state;

  // Member: bimanual_state
  cdr << ros_message.bimanual_state;

  // Member: left_arm_state
  cdr << ros_message.left_arm_state;

  // Member: right_arm_state
  cdr << ros_message.right_arm_state;

  // Member: home_joint_reference_enabled
  cdr << (ros_message.home_joint_reference_enabled ? true : false);

  // Member: head_state
  cdr << ros_message.head_state;

  // Member: head_midpoint_gaze_active
  cdr << (ros_message.head_midpoint_gaze_active ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
get_serialized_size_key(
  const arms_ros2_control_msgs::msg::WbcCurrentState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_state
  {
    size_t item_size = sizeof(ros_message.base_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: body_state
  {
    size_t item_size = sizeof(ros_message.body_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bimanual_state
  {
    size_t item_size = sizeof(ros_message.bimanual_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: left_arm_state
  {
    size_t item_size = sizeof(ros_message.left_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right_arm_state
  {
    size_t item_size = sizeof(ros_message.right_arm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: home_joint_reference_enabled
  {
    size_t item_size = sizeof(ros_message.home_joint_reference_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_state
  {
    size_t item_size = sizeof(ros_message.head_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_midpoint_gaze_active
  {
    size_t item_size = sizeof(ros_message.head_midpoint_gaze_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
max_serialized_size_key_WbcCurrentState(
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

  // Member: base_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: body_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bimanual_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_arm_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: home_joint_reference_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: head_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: head_midpoint_gaze_active
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
    using DataType = arms_ros2_control_msgs::msg::WbcCurrentState;
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
  auto typed_message =
    static_cast<const arms_ros2_control_msgs::msg::WbcCurrentState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WbcCurrentState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arms_ros2_control_msgs::msg::WbcCurrentState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WbcCurrentState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arms_ros2_control_msgs::msg::WbcCurrentState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WbcCurrentState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WbcCurrentState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WbcCurrentState__callbacks = {
  "arms_ros2_control_msgs::msg",
  "WbcCurrentState",
  _WbcCurrentState__cdr_serialize,
  _WbcCurrentState__cdr_deserialize,
  _WbcCurrentState__get_serialized_size,
  _WbcCurrentState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WbcCurrentState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WbcCurrentState__callbacks,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__WbcCurrentState__get_type_hash,
  &arms_ros2_control_msgs__msg__WbcCurrentState__get_type_description,
  &arms_ros2_control_msgs__msg__WbcCurrentState__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::msg::WbcCurrentState>()
{
  return &arms_ros2_control_msgs::msg::typesupport_fastrtps_cpp::_WbcCurrentState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, msg, WbcCurrentState)() {
  return &arms_ros2_control_msgs::msg::typesupport_fastrtps_cpp::_WbcCurrentState__handle;
}

#ifdef __cplusplus
}
#endif
