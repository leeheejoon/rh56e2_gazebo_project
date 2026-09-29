// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__rosidl_typesupport_fastrtps_cpp.hpp"
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__functions.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__struct.hpp"

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
  const arms_ros2_control_msgs::msg::WbcCapability & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: has_mobile_base
  cdr << (ros_message.has_mobile_base ? true : false);

  // Member: has_body_relative_constraint
  cdr << (ros_message.has_body_relative_constraint ? true : false);

  // Member: has_waist_lock
  cdr << (ros_message.has_waist_lock ? true : false);

  // Member: has_head_coupling
  cdr << (ros_message.has_head_coupling ? true : false);

  // Member: has_custom_joint_lock
  cdr << (ros_message.has_custom_joint_lock ? true : false);

  // Member: has_bimanual_coupling
  cdr << (ros_message.has_bimanual_coupling ? true : false);

  // Member: body_tracking_ee_enabled
  cdr << (ros_message.body_tracking_ee_enabled ? true : false);

  // Member: head_tracking_ee_enabled
  cdr << (ros_message.head_tracking_ee_enabled ? true : false);

  // Member: has_home_joint_reference
  cdr << (ros_message.has_home_joint_reference ? true : false);

  // Member: head_midpoint_gaze_enabled
  cdr << (ros_message.head_midpoint_gaze_enabled ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arms_ros2_control_msgs::msg::WbcCapability & ros_message)
{
  // Member: has_mobile_base
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_mobile_base = tmp ? true : false;
  }

  // Member: has_body_relative_constraint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_body_relative_constraint = tmp ? true : false;
  }

  // Member: has_waist_lock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_waist_lock = tmp ? true : false;
  }

  // Member: has_head_coupling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_head_coupling = tmp ? true : false;
  }

  // Member: has_custom_joint_lock
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_custom_joint_lock = tmp ? true : false;
  }

  // Member: has_bimanual_coupling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_bimanual_coupling = tmp ? true : false;
  }

  // Member: body_tracking_ee_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.body_tracking_ee_enabled = tmp ? true : false;
  }

  // Member: head_tracking_ee_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.head_tracking_ee_enabled = tmp ? true : false;
  }

  // Member: has_home_joint_reference
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_home_joint_reference = tmp ? true : false;
  }

  // Member: head_midpoint_gaze_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.head_midpoint_gaze_enabled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
get_serialized_size(
  const arms_ros2_control_msgs::msg::WbcCapability & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: has_mobile_base
  {
    size_t item_size = sizeof(ros_message.has_mobile_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_body_relative_constraint
  {
    size_t item_size = sizeof(ros_message.has_body_relative_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_waist_lock
  {
    size_t item_size = sizeof(ros_message.has_waist_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_head_coupling
  {
    size_t item_size = sizeof(ros_message.has_head_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_custom_joint_lock
  {
    size_t item_size = sizeof(ros_message.has_custom_joint_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_bimanual_coupling
  {
    size_t item_size = sizeof(ros_message.has_bimanual_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: body_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message.body_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message.head_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_home_joint_reference
  {
    size_t item_size = sizeof(ros_message.has_home_joint_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_midpoint_gaze_enabled
  {
    size_t item_size = sizeof(ros_message.head_midpoint_gaze_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
max_serialized_size_WbcCapability(
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

  // Member: has_mobile_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: has_body_relative_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: has_waist_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: has_head_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: has_custom_joint_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: has_bimanual_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: body_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: head_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: has_home_joint_reference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: head_midpoint_gaze_enabled
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
    using DataType = arms_ros2_control_msgs::msg::WbcCapability;
    is_plain =
      (
      offsetof(DataType, head_midpoint_gaze_enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
cdr_serialize_key(
  const arms_ros2_control_msgs::msg::WbcCapability & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: has_mobile_base
  cdr << (ros_message.has_mobile_base ? true : false);

  // Member: has_body_relative_constraint
  cdr << (ros_message.has_body_relative_constraint ? true : false);

  // Member: has_waist_lock
  cdr << (ros_message.has_waist_lock ? true : false);

  // Member: has_head_coupling
  cdr << (ros_message.has_head_coupling ? true : false);

  // Member: has_custom_joint_lock
  cdr << (ros_message.has_custom_joint_lock ? true : false);

  // Member: has_bimanual_coupling
  cdr << (ros_message.has_bimanual_coupling ? true : false);

  // Member: body_tracking_ee_enabled
  cdr << (ros_message.body_tracking_ee_enabled ? true : false);

  // Member: head_tracking_ee_enabled
  cdr << (ros_message.head_tracking_ee_enabled ? true : false);

  // Member: has_home_joint_reference
  cdr << (ros_message.has_home_joint_reference ? true : false);

  // Member: head_midpoint_gaze_enabled
  cdr << (ros_message.head_midpoint_gaze_enabled ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
get_serialized_size_key(
  const arms_ros2_control_msgs::msg::WbcCapability & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: has_mobile_base
  {
    size_t item_size = sizeof(ros_message.has_mobile_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_body_relative_constraint
  {
    size_t item_size = sizeof(ros_message.has_body_relative_constraint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_waist_lock
  {
    size_t item_size = sizeof(ros_message.has_waist_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_head_coupling
  {
    size_t item_size = sizeof(ros_message.has_head_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_custom_joint_lock
  {
    size_t item_size = sizeof(ros_message.has_custom_joint_lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_bimanual_coupling
  {
    size_t item_size = sizeof(ros_message.has_bimanual_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: body_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message.body_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_tracking_ee_enabled
  {
    size_t item_size = sizeof(ros_message.head_tracking_ee_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: has_home_joint_reference
  {
    size_t item_size = sizeof(ros_message.has_home_joint_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: head_midpoint_gaze_enabled
  {
    size_t item_size = sizeof(ros_message.head_midpoint_gaze_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arms_ros2_control_msgs
max_serialized_size_key_WbcCapability(
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

  // Member: has_mobile_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_body_relative_constraint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_waist_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_head_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_custom_joint_lock
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_bimanual_coupling
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: body_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: head_tracking_ee_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_home_joint_reference
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: head_midpoint_gaze_enabled
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
    using DataType = arms_ros2_control_msgs::msg::WbcCapability;
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
  auto typed_message =
    static_cast<const arms_ros2_control_msgs::msg::WbcCapability *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WbcCapability__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arms_ros2_control_msgs::msg::WbcCapability *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WbcCapability__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arms_ros2_control_msgs::msg::WbcCapability *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WbcCapability__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WbcCapability(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WbcCapability__callbacks = {
  "arms_ros2_control_msgs::msg",
  "WbcCapability",
  _WbcCapability__cdr_serialize,
  _WbcCapability__cdr_deserialize,
  _WbcCapability__get_serialized_size,
  _WbcCapability__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WbcCapability__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WbcCapability__callbacks,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__WbcCapability__get_type_hash,
  &arms_ros2_control_msgs__msg__WbcCapability__get_type_description,
  &arms_ros2_control_msgs__msg__WbcCapability__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arms_ros2_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<arms_ros2_control_msgs::msg::WbcCapability>()
{
  return &arms_ros2_control_msgs::msg::typesupport_fastrtps_cpp::_WbcCapability__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arms_ros2_control_msgs, msg, WbcCapability)() {
  return &arms_ros2_control_msgs::msg::typesupport_fastrtps_cpp::_WbcCapability__handle;
}

#ifdef __cplusplus
}
#endif
