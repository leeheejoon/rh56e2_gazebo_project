// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arms_ros2_control_msgs:msg/CircleMessage.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/circle_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arms_ros2_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arms_ros2_control_msgs/msg/detail/circle_message__struct.h"
#include "arms_ros2_control_msgs/msg/detail/circle_message__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // center, right_center
#include "geometry_msgs/msg/detail/pose__functions.h"  // endpoint, midpoint, right_endpoint, right_midpoint
#include "geometry_msgs/msg/detail/vector3__functions.h"  // axis, right_axis
#include "rosidl_runtime_c/string.h"  // arm_name, frame_id, ik_type
#include "rosidl_runtime_c/string_functions.h"  // arm_name, frame_id, ik_type

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arms_ros2_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _CircleMessage__ros_msg_type = arms_ros2_control_msgs__msg__CircleMessage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_arms_ros2_control_msgs__msg__CircleMessage(
  const arms_ros2_control_msgs__msg__CircleMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: midpoint
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->midpoint, cdr);
  }

  // Field name: endpoint
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->endpoint, cdr);
  }

  // Field name: right_midpoint
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->right_midpoint, cdr);
  }

  // Field name: right_endpoint
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->right_endpoint, cdr);
  }

  // Field name: center
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->center, cdr);
  }

  // Field name: axis
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->axis, cdr);
  }

  // Field name: rotate_angle
  {
    cdr << ros_message->rotate_angle;
  }

  // Field name: right_center
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->right_center, cdr);
  }

  // Field name: right_axis
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->right_axis, cdr);
  }

  // Field name: right_rotate_angle
  {
    cdr << ros_message->right_rotate_angle;
  }

  // Field name: max_linear_velocity
  {
    cdr << ros_message->max_linear_velocity;
  }

  // Field name: max_linear_acceleration
  {
    cdr << ros_message->max_linear_acceleration;
  }

  // Field name: max_linear_jerk
  {
    cdr << ros_message->max_linear_jerk;
  }

  // Field name: max_angular_velocity
  {
    cdr << ros_message->max_angular_velocity;
  }

  // Field name: max_angular_acceleration
  {
    cdr << ros_message->max_angular_acceleration;
  }

  // Field name: max_angular_jerk
  {
    cdr << ros_message->max_angular_jerk;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: use_three_point_method
  {
    cdr << (ros_message->use_three_point_method ? true : false);
  }

  // Field name: use_slerp_for_orientation
  {
    cdr << (ros_message->use_slerp_for_orientation ? true : false);
  }

  // Field name: time_mode
  {
    cdr << (ros_message->time_mode ? true : false);
  }

  // Field name: frame_id
  {
    const rosidl_runtime_c__String * str = &ros_message->frame_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: arm_name
  {
    const rosidl_runtime_c__String * str = &ros_message->arm_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ik_type
  {
    const rosidl_runtime_c__String * str = &ros_message->ik_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_deserialize_arms_ros2_control_msgs__msg__CircleMessage(
  eprosima::fastcdr::Cdr & cdr,
  arms_ros2_control_msgs__msg__CircleMessage * ros_message)
{
  // Field name: midpoint
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->midpoint);
  }

  // Field name: endpoint
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->endpoint);
  }

  // Field name: right_midpoint
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->right_midpoint);
  }

  // Field name: right_endpoint
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->right_endpoint);
  }

  // Field name: center
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->center);
  }

  // Field name: axis
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->axis);
  }

  // Field name: rotate_angle
  {
    cdr >> ros_message->rotate_angle;
  }

  // Field name: right_center
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->right_center);
  }

  // Field name: right_axis
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->right_axis);
  }

  // Field name: right_rotate_angle
  {
    cdr >> ros_message->right_rotate_angle;
  }

  // Field name: max_linear_velocity
  {
    cdr >> ros_message->max_linear_velocity;
  }

  // Field name: max_linear_acceleration
  {
    cdr >> ros_message->max_linear_acceleration;
  }

  // Field name: max_linear_jerk
  {
    cdr >> ros_message->max_linear_jerk;
  }

  // Field name: max_angular_velocity
  {
    cdr >> ros_message->max_angular_velocity;
  }

  // Field name: max_angular_acceleration
  {
    cdr >> ros_message->max_angular_acceleration;
  }

  // Field name: max_angular_jerk
  {
    cdr >> ros_message->max_angular_jerk;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  // Field name: use_three_point_method
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_three_point_method = tmp ? true : false;
  }

  // Field name: use_slerp_for_orientation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_slerp_for_orientation = tmp ? true : false;
  }

  // Field name: time_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->time_mode = tmp ? true : false;
  }

  // Field name: frame_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->frame_id.data) {
      rosidl_runtime_c__String__init(&ros_message->frame_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->frame_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'frame_id'\n");
      return false;
    }
  }

  // Field name: arm_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->arm_name.data) {
      rosidl_runtime_c__String__init(&ros_message->arm_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->arm_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'arm_name'\n");
      return false;
    }
  }

  // Field name: ik_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ik_type.data) {
      rosidl_runtime_c__String__init(&ros_message->ik_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ik_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ik_type'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_arms_ros2_control_msgs__msg__CircleMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CircleMessage__ros_msg_type * ros_message = static_cast<const _CircleMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: midpoint
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->midpoint), current_alignment);

  // Field name: endpoint
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->endpoint), current_alignment);

  // Field name: right_midpoint
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->right_midpoint), current_alignment);

  // Field name: right_endpoint
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->right_endpoint), current_alignment);

  // Field name: center
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->center), current_alignment);

  // Field name: axis
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->axis), current_alignment);

  // Field name: rotate_angle
  {
    size_t item_size = sizeof(ros_message->rotate_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_center
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->right_center), current_alignment);

  // Field name: right_axis
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->right_axis), current_alignment);

  // Field name: right_rotate_angle
  {
    size_t item_size = sizeof(ros_message->right_rotate_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_linear_velocity
  {
    size_t item_size = sizeof(ros_message->max_linear_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_linear_acceleration
  {
    size_t item_size = sizeof(ros_message->max_linear_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_linear_jerk
  {
    size_t item_size = sizeof(ros_message->max_linear_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_angular_velocity
  {
    size_t item_size = sizeof(ros_message->max_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_angular_acceleration
  {
    size_t item_size = sizeof(ros_message->max_angular_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_angular_jerk
  {
    size_t item_size = sizeof(ros_message->max_angular_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_three_point_method
  {
    size_t item_size = sizeof(ros_message->use_three_point_method);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_slerp_for_orientation
  {
    size_t item_size = sizeof(ros_message->use_slerp_for_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_mode
  {
    size_t item_size = sizeof(ros_message->time_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->frame_id.size + 1);

  // Field name: arm_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->arm_name.size + 1);

  // Field name: ik_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ik_type.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_arms_ros2_control_msgs__msg__CircleMessage(
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

  // Field name: midpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: endpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_midpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_endpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: axis
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rotate_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: right_center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_axis
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_rotate_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_linear_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_linear_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_linear_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_angular_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_angular_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: use_three_point_method
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_slerp_for_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: frame_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: arm_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ik_type
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arms_ros2_control_msgs__msg__CircleMessage;
    is_plain =
      (
      offsetof(DataType, ik_type) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
bool cdr_serialize_key_arms_ros2_control_msgs__msg__CircleMessage(
  const arms_ros2_control_msgs__msg__CircleMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: midpoint
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->midpoint, cdr);
  }

  // Field name: endpoint
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->endpoint, cdr);
  }

  // Field name: right_midpoint
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->right_midpoint, cdr);
  }

  // Field name: right_endpoint
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->right_endpoint, cdr);
  }

  // Field name: center
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->center, cdr);
  }

  // Field name: axis
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->axis, cdr);
  }

  // Field name: rotate_angle
  {
    cdr << ros_message->rotate_angle;
  }

  // Field name: right_center
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->right_center, cdr);
  }

  // Field name: right_axis
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->right_axis, cdr);
  }

  // Field name: right_rotate_angle
  {
    cdr << ros_message->right_rotate_angle;
  }

  // Field name: max_linear_velocity
  {
    cdr << ros_message->max_linear_velocity;
  }

  // Field name: max_linear_acceleration
  {
    cdr << ros_message->max_linear_acceleration;
  }

  // Field name: max_linear_jerk
  {
    cdr << ros_message->max_linear_jerk;
  }

  // Field name: max_angular_velocity
  {
    cdr << ros_message->max_angular_velocity;
  }

  // Field name: max_angular_acceleration
  {
    cdr << ros_message->max_angular_acceleration;
  }

  // Field name: max_angular_jerk
  {
    cdr << ros_message->max_angular_jerk;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: use_three_point_method
  {
    cdr << (ros_message->use_three_point_method ? true : false);
  }

  // Field name: use_slerp_for_orientation
  {
    cdr << (ros_message->use_slerp_for_orientation ? true : false);
  }

  // Field name: time_mode
  {
    cdr << (ros_message->time_mode ? true : false);
  }

  // Field name: frame_id
  {
    const rosidl_runtime_c__String * str = &ros_message->frame_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: arm_name
  {
    const rosidl_runtime_c__String * str = &ros_message->arm_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ik_type
  {
    const rosidl_runtime_c__String * str = &ros_message->ik_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t get_serialized_size_key_arms_ros2_control_msgs__msg__CircleMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CircleMessage__ros_msg_type * ros_message = static_cast<const _CircleMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: midpoint
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->midpoint), current_alignment);

  // Field name: endpoint
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->endpoint), current_alignment);

  // Field name: right_midpoint
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->right_midpoint), current_alignment);

  // Field name: right_endpoint
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->right_endpoint), current_alignment);

  // Field name: center
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->center), current_alignment);

  // Field name: axis
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->axis), current_alignment);

  // Field name: rotate_angle
  {
    size_t item_size = sizeof(ros_message->rotate_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right_center
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->right_center), current_alignment);

  // Field name: right_axis
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->right_axis), current_alignment);

  // Field name: right_rotate_angle
  {
    size_t item_size = sizeof(ros_message->right_rotate_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_linear_velocity
  {
    size_t item_size = sizeof(ros_message->max_linear_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_linear_acceleration
  {
    size_t item_size = sizeof(ros_message->max_linear_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_linear_jerk
  {
    size_t item_size = sizeof(ros_message->max_linear_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_angular_velocity
  {
    size_t item_size = sizeof(ros_message->max_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_angular_acceleration
  {
    size_t item_size = sizeof(ros_message->max_angular_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_angular_jerk
  {
    size_t item_size = sizeof(ros_message->max_angular_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_three_point_method
  {
    size_t item_size = sizeof(ros_message->use_three_point_method);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: use_slerp_for_orientation
  {
    size_t item_size = sizeof(ros_message->use_slerp_for_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_mode
  {
    size_t item_size = sizeof(ros_message->time_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->frame_id.size + 1);

  // Field name: arm_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->arm_name.size + 1);

  // Field name: ik_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ik_type.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arms_ros2_control_msgs
size_t max_serialized_size_key_arms_ros2_control_msgs__msg__CircleMessage(
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
  // Field name: midpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: endpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_midpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_endpoint
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: axis
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rotate_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: right_center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_axis
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_rotate_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_linear_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_linear_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_linear_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_angular_acceleration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_angular_jerk
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: use_three_point_method
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: use_slerp_for_orientation
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: frame_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: arm_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ik_type
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arms_ros2_control_msgs__msg__CircleMessage;
    is_plain =
      (
      offsetof(DataType, ik_type) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CircleMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arms_ros2_control_msgs__msg__CircleMessage * ros_message = static_cast<const arms_ros2_control_msgs__msg__CircleMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arms_ros2_control_msgs__msg__CircleMessage(ros_message, cdr);
}

static bool _CircleMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arms_ros2_control_msgs__msg__CircleMessage * ros_message = static_cast<arms_ros2_control_msgs__msg__CircleMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arms_ros2_control_msgs__msg__CircleMessage(cdr, ros_message);
}

static uint32_t _CircleMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arms_ros2_control_msgs__msg__CircleMessage(
      untyped_ros_message, 0));
}

static size_t _CircleMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arms_ros2_control_msgs__msg__CircleMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CircleMessage = {
  "arms_ros2_control_msgs::msg",
  "CircleMessage",
  _CircleMessage__cdr_serialize,
  _CircleMessage__cdr_deserialize,
  _CircleMessage__get_serialized_size,
  _CircleMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CircleMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CircleMessage,
  get_message_typesupport_handle_function,
  &arms_ros2_control_msgs__msg__CircleMessage__get_type_hash,
  &arms_ros2_control_msgs__msg__CircleMessage__get_type_description,
  &arms_ros2_control_msgs__msg__CircleMessage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arms_ros2_control_msgs, msg, CircleMessage)() {
  return &_CircleMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
