// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__struct.h"
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // max_acceleration, max_jerk, max_velocity, position, velocity
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // max_acceleration, max_jerk, max_velocity, position, velocity

// forward declare type support functions


using _JointWaypoint__ros_msg_type = arms_ros2_control_msgs__msg__JointWaypoint;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_arms_ros2_control_msgs__msg__JointWaypoint(
  const arms_ros2_control_msgs__msg__JointWaypoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    size_t size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: blend_ratio_percent
  {
    cdr << ros_message->blend_ratio_percent;
  }

  // Field name: max_velocity
  {
    size_t size = ros_message->max_velocity.size;
    auto array_ptr = ros_message->max_velocity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: max_acceleration
  {
    size_t size = ros_message->max_acceleration.size;
    auto array_ptr = ros_message->max_acceleration.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: max_jerk
  {
    size_t size = ros_message->max_jerk.size;
    auto array_ptr = ros_message->max_jerk.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: time_mode
  {
    cdr << (ros_message->time_mode ? true : false);
  }

  // Field name: total_time
  {
    cdr << ros_message->total_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_deserialize_arms_ros2_control_msgs__msg__JointWaypoint(
  eprosima::fastcdr::Cdr & cdr,
  arms_ros2_control_msgs__msg__JointWaypoint * ros_message)
{
  // Field name: position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->position.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->position);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->position, size)) {
      fprintf(stderr, "failed to create array for field 'position'");
      return false;
    }
    auto array_ptr = ros_message->position.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: velocity
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->velocity.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->velocity);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->velocity, size)) {
      fprintf(stderr, "failed to create array for field 'velocity'");
      return false;
    }
    auto array_ptr = ros_message->velocity.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: blend_ratio_percent
  {
    cdr >> ros_message->blend_ratio_percent;
  }

  // Field name: max_velocity
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->max_velocity.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->max_velocity);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->max_velocity, size)) {
      fprintf(stderr, "failed to create array for field 'max_velocity'");
      return false;
    }
    auto array_ptr = ros_message->max_velocity.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: max_acceleration
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->max_acceleration.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->max_acceleration);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->max_acceleration, size)) {
      fprintf(stderr, "failed to create array for field 'max_acceleration'");
      return false;
    }
    auto array_ptr = ros_message->max_acceleration.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: max_jerk
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->max_jerk.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->max_jerk);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->max_jerk, size)) {
      fprintf(stderr, "failed to create array for field 'max_jerk'");
      return false;
    }
    auto array_ptr = ros_message->max_jerk.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: time_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->time_mode = tmp ? true : false;
  }

  // Field name: total_time
  {
    cdr >> ros_message->total_time;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_arms_ros2_control_msgs__msg__JointWaypoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointWaypoint__ros_msg_type * ros_message = static_cast<const _JointWaypoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  {
    size_t array_size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t array_size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: blend_ratio_percent
  {
    size_t item_size = sizeof(ros_message->blend_ratio_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_velocity
  {
    size_t array_size = ros_message->max_velocity.size;
    auto array_ptr = ros_message->max_velocity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_acceleration
  {
    size_t array_size = ros_message->max_acceleration.size;
    auto array_ptr = ros_message->max_acceleration.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_jerk
  {
    size_t array_size = ros_message->max_jerk.size;
    auto array_ptr = ros_message->max_jerk.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_mode
  {
    size_t item_size = sizeof(ros_message->time_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_time
  {
    size_t item_size = sizeof(ros_message->total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_arms_ros2_control_msgs__msg__JointWaypoint(
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

  // Field name: position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: velocity
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: blend_ratio_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_velocity
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_acceleration
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_jerk
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: time_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: total_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arms_ros2_control_msgs__msg__JointWaypoint;
    is_plain =
      (
      offsetof(DataType, total_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_key_arms_ros2_control_msgs__msg__JointWaypoint(
  const arms_ros2_control_msgs__msg__JointWaypoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position
  {
    size_t size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: blend_ratio_percent
  {
    cdr << ros_message->blend_ratio_percent;
  }

  // Field name: max_velocity
  {
    size_t size = ros_message->max_velocity.size;
    auto array_ptr = ros_message->max_velocity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: max_acceleration
  {
    size_t size = ros_message->max_acceleration.size;
    auto array_ptr = ros_message->max_acceleration.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: max_jerk
  {
    size_t size = ros_message->max_jerk.size;
    auto array_ptr = ros_message->max_jerk.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: time_mode
  {
    cdr << (ros_message->time_mode ? true : false);
  }

  // Field name: total_time
  {
    cdr << ros_message->total_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_key_arms_ros2_control_msgs__msg__JointWaypoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointWaypoint__ros_msg_type * ros_message = static_cast<const _JointWaypoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position
  {
    size_t array_size = ros_message->position.size;
    auto array_ptr = ros_message->position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t array_size = ros_message->velocity.size;
    auto array_ptr = ros_message->velocity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: blend_ratio_percent
  {
    size_t item_size = sizeof(ros_message->blend_ratio_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_velocity
  {
    size_t array_size = ros_message->max_velocity.size;
    auto array_ptr = ros_message->max_velocity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_acceleration
  {
    size_t array_size = ros_message->max_acceleration.size;
    auto array_ptr = ros_message->max_acceleration.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_jerk
  {
    size_t array_size = ros_message->max_jerk.size;
    auto array_ptr = ros_message->max_jerk.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_mode
  {
    size_t item_size = sizeof(ros_message->time_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_time
  {
    size_t item_size = sizeof(ros_message->total_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_key_arms_ros2_control_msgs__msg__JointWaypoint(
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
  // Field name: position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: velocity
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: blend_ratio_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_velocity
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_acceleration
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_jerk
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: time_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: total_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arms_ros2_control_msgs__msg__JointWaypoint;
    is_plain =
      (
      offsetof(DataType, total_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _JointWaypoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arms_ros2_control_msgs__msg__JointWaypoint * ros_message = static_cast<const arms_ros2_control_msgs__msg__JointWaypoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arms_ros2_control_msgs__msg__JointWaypoint(ros_message, cdr);
}

static bool _JointWaypoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arms_ros2_control_msgs__msg__JointWaypoint * ros_message = static_cast<arms_ros2_control_msgs__msg__JointWaypoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arms_ros2_control_msgs__msg__JointWaypoint(cdr, ros_message);
}

static uint32_t _JointWaypoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arms_ros2_control_msgs__msg__JointWaypoint(
      untyped_ros_message, 0));
}

static size_t _JointWaypoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arms_ros2_control_msgs__msg__JointWaypoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointWaypoint = {
  "arms_ros2_control_msgs::msg",
  "JointWaypoint",
  _JointWaypoint__cdr_serialize,
  _JointWaypoint__cdr_deserialize,
  _JointWaypoint__get_serialized_size,
  _JointWaypoint__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JointWaypoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointWaypoint,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_hash,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_description,
  &arms_ros2_control_msgs__msg__JointWaypoint__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, msg, JointWaypoint)() {
  return &_JointWaypoint__type_support;
}

#if defined(__cplusplus)
}
#endif
