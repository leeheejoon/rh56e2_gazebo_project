// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:msg/CircleMessage.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/circle_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `midpoint`
// Member `endpoint`
// Member `right_midpoint`
// Member `right_endpoint`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `center`
// Member `right_center`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `axis`
// Member `right_axis`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `frame_id`
// Member `arm_name`
// Member `ik_type`
#include "rosidl_runtime_c/string_functions.h"

bool
arms_ros2_control_msgs__msg__CircleMessage__init(arms_ros2_control_msgs__msg__CircleMessage * msg)
{
  if (!msg) {
    return false;
  }
  // midpoint
  if (!geometry_msgs__msg__Pose__init(&msg->midpoint)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__Pose__init(&msg->endpoint)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // right_midpoint
  if (!geometry_msgs__msg__Pose__init(&msg->right_midpoint)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // right_endpoint
  if (!geometry_msgs__msg__Pose__init(&msg->right_endpoint)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // axis
  if (!geometry_msgs__msg__Vector3__init(&msg->axis)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // rotate_angle
  // right_center
  if (!geometry_msgs__msg__Point__init(&msg->right_center)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // right_axis
  if (!geometry_msgs__msg__Vector3__init(&msg->right_axis)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // right_rotate_angle
  // max_linear_velocity
  // max_linear_acceleration
  // max_linear_jerk
  // max_angular_velocity
  // max_angular_acceleration
  // max_angular_jerk
  // duration
  // use_three_point_method
  // use_slerp_for_orientation
  // time_mode
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // arm_name
  if (!rosidl_runtime_c__String__init(&msg->arm_name)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  // ik_type
  if (!rosidl_runtime_c__String__init(&msg->ik_type)) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__msg__CircleMessage__fini(arms_ros2_control_msgs__msg__CircleMessage * msg)
{
  if (!msg) {
    return;
  }
  // midpoint
  geometry_msgs__msg__Pose__fini(&msg->midpoint);
  // endpoint
  geometry_msgs__msg__Pose__fini(&msg->endpoint);
  // right_midpoint
  geometry_msgs__msg__Pose__fini(&msg->right_midpoint);
  // right_endpoint
  geometry_msgs__msg__Pose__fini(&msg->right_endpoint);
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // axis
  geometry_msgs__msg__Vector3__fini(&msg->axis);
  // rotate_angle
  // right_center
  geometry_msgs__msg__Point__fini(&msg->right_center);
  // right_axis
  geometry_msgs__msg__Vector3__fini(&msg->right_axis);
  // right_rotate_angle
  // max_linear_velocity
  // max_linear_acceleration
  // max_linear_jerk
  // max_angular_velocity
  // max_angular_acceleration
  // max_angular_jerk
  // duration
  // use_three_point_method
  // use_slerp_for_orientation
  // time_mode
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // arm_name
  rosidl_runtime_c__String__fini(&msg->arm_name);
  // ik_type
  rosidl_runtime_c__String__fini(&msg->ik_type);
}

bool
arms_ros2_control_msgs__msg__CircleMessage__are_equal(const arms_ros2_control_msgs__msg__CircleMessage * lhs, const arms_ros2_control_msgs__msg__CircleMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // midpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->midpoint), &(rhs->midpoint)))
  {
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->endpoint), &(rhs->endpoint)))
  {
    return false;
  }
  // right_midpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->right_midpoint), &(rhs->right_midpoint)))
  {
    return false;
  }
  // right_endpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->right_endpoint), &(rhs->right_endpoint)))
  {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // axis
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->axis), &(rhs->axis)))
  {
    return false;
  }
  // rotate_angle
  if (lhs->rotate_angle != rhs->rotate_angle) {
    return false;
  }
  // right_center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->right_center), &(rhs->right_center)))
  {
    return false;
  }
  // right_axis
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->right_axis), &(rhs->right_axis)))
  {
    return false;
  }
  // right_rotate_angle
  if (lhs->right_rotate_angle != rhs->right_rotate_angle) {
    return false;
  }
  // max_linear_velocity
  if (lhs->max_linear_velocity != rhs->max_linear_velocity) {
    return false;
  }
  // max_linear_acceleration
  if (lhs->max_linear_acceleration != rhs->max_linear_acceleration) {
    return false;
  }
  // max_linear_jerk
  if (lhs->max_linear_jerk != rhs->max_linear_jerk) {
    return false;
  }
  // max_angular_velocity
  if (lhs->max_angular_velocity != rhs->max_angular_velocity) {
    return false;
  }
  // max_angular_acceleration
  if (lhs->max_angular_acceleration != rhs->max_angular_acceleration) {
    return false;
  }
  // max_angular_jerk
  if (lhs->max_angular_jerk != rhs->max_angular_jerk) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // use_three_point_method
  if (lhs->use_three_point_method != rhs->use_three_point_method) {
    return false;
  }
  // use_slerp_for_orientation
  if (lhs->use_slerp_for_orientation != rhs->use_slerp_for_orientation) {
    return false;
  }
  // time_mode
  if (lhs->time_mode != rhs->time_mode) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // arm_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arm_name), &(rhs->arm_name)))
  {
    return false;
  }
  // ik_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ik_type), &(rhs->ik_type)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__CircleMessage__copy(
  const arms_ros2_control_msgs__msg__CircleMessage * input,
  arms_ros2_control_msgs__msg__CircleMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // midpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->midpoint), &(output->midpoint)))
  {
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  // right_midpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->right_midpoint), &(output->right_midpoint)))
  {
    return false;
  }
  // right_endpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->right_endpoint), &(output->right_endpoint)))
  {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // axis
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->axis), &(output->axis)))
  {
    return false;
  }
  // rotate_angle
  output->rotate_angle = input->rotate_angle;
  // right_center
  if (!geometry_msgs__msg__Point__copy(
      &(input->right_center), &(output->right_center)))
  {
    return false;
  }
  // right_axis
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->right_axis), &(output->right_axis)))
  {
    return false;
  }
  // right_rotate_angle
  output->right_rotate_angle = input->right_rotate_angle;
  // max_linear_velocity
  output->max_linear_velocity = input->max_linear_velocity;
  // max_linear_acceleration
  output->max_linear_acceleration = input->max_linear_acceleration;
  // max_linear_jerk
  output->max_linear_jerk = input->max_linear_jerk;
  // max_angular_velocity
  output->max_angular_velocity = input->max_angular_velocity;
  // max_angular_acceleration
  output->max_angular_acceleration = input->max_angular_acceleration;
  // max_angular_jerk
  output->max_angular_jerk = input->max_angular_jerk;
  // duration
  output->duration = input->duration;
  // use_three_point_method
  output->use_three_point_method = input->use_three_point_method;
  // use_slerp_for_orientation
  output->use_slerp_for_orientation = input->use_slerp_for_orientation;
  // time_mode
  output->time_mode = input->time_mode;
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // arm_name
  if (!rosidl_runtime_c__String__copy(
      &(input->arm_name), &(output->arm_name)))
  {
    return false;
  }
  // ik_type
  if (!rosidl_runtime_c__String__copy(
      &(input->ik_type), &(output->ik_type)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__msg__CircleMessage *
arms_ros2_control_msgs__msg__CircleMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__CircleMessage * msg = (arms_ros2_control_msgs__msg__CircleMessage *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__CircleMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__msg__CircleMessage));
  bool success = arms_ros2_control_msgs__msg__CircleMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__msg__CircleMessage__destroy(arms_ros2_control_msgs__msg__CircleMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__msg__CircleMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__msg__CircleMessage__Sequence__init(arms_ros2_control_msgs__msg__CircleMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__CircleMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__CircleMessage)) {
      return false;
    }
    data = (arms_ros2_control_msgs__msg__CircleMessage *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__msg__CircleMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__msg__CircleMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__msg__CircleMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arms_ros2_control_msgs__msg__CircleMessage__Sequence__fini(arms_ros2_control_msgs__msg__CircleMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arms_ros2_control_msgs__msg__CircleMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arms_ros2_control_msgs__msg__CircleMessage__Sequence *
arms_ros2_control_msgs__msg__CircleMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__CircleMessage__Sequence * array = (arms_ros2_control_msgs__msg__CircleMessage__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__CircleMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__msg__CircleMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__msg__CircleMessage__Sequence__destroy(arms_ros2_control_msgs__msg__CircleMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__msg__CircleMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__msg__CircleMessage__Sequence__are_equal(const arms_ros2_control_msgs__msg__CircleMessage__Sequence * lhs, const arms_ros2_control_msgs__msg__CircleMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__msg__CircleMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__CircleMessage__Sequence__copy(
  const arms_ros2_control_msgs__msg__CircleMessage__Sequence * input,
  arms_ros2_control_msgs__msg__CircleMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__CircleMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__msg__CircleMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__msg__CircleMessage * data =
      (arms_ros2_control_msgs__msg__CircleMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__msg__CircleMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__msg__CircleMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__msg__CircleMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
