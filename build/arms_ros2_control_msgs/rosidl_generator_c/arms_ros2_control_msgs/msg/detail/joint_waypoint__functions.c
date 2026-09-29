// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/joint_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `max_velocity`
// Member `max_acceleration`
// Member `max_jerk`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
arms_ros2_control_msgs__msg__JointWaypoint__init(arms_ros2_control_msgs__msg__JointWaypoint * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    arms_ros2_control_msgs__msg__JointWaypoint__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    arms_ros2_control_msgs__msg__JointWaypoint__fini(msg);
    return false;
  }
  // blend_ratio_percent
  // max_velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_velocity, 0)) {
    arms_ros2_control_msgs__msg__JointWaypoint__fini(msg);
    return false;
  }
  // max_acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_acceleration, 0)) {
    arms_ros2_control_msgs__msg__JointWaypoint__fini(msg);
    return false;
  }
  // max_jerk
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_jerk, 0)) {
    arms_ros2_control_msgs__msg__JointWaypoint__fini(msg);
    return false;
  }
  // time_mode
  // total_time
  return true;
}

void
arms_ros2_control_msgs__msg__JointWaypoint__fini(arms_ros2_control_msgs__msg__JointWaypoint * msg)
{
  if (!msg) {
    return;
  }
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // blend_ratio_percent
  // max_velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->max_velocity);
  // max_acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->max_acceleration);
  // max_jerk
  rosidl_runtime_c__double__Sequence__fini(&msg->max_jerk);
  // time_mode
  // total_time
}

bool
arms_ros2_control_msgs__msg__JointWaypoint__are_equal(const arms_ros2_control_msgs__msg__JointWaypoint * lhs, const arms_ros2_control_msgs__msg__JointWaypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // blend_ratio_percent
  if (lhs->blend_ratio_percent != rhs->blend_ratio_percent) {
    return false;
  }
  // max_velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_velocity), &(rhs->max_velocity)))
  {
    return false;
  }
  // max_acceleration
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_acceleration), &(rhs->max_acceleration)))
  {
    return false;
  }
  // max_jerk
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_jerk), &(rhs->max_jerk)))
  {
    return false;
  }
  // time_mode
  if (lhs->time_mode != rhs->time_mode) {
    return false;
  }
  // total_time
  if (lhs->total_time != rhs->total_time) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__JointWaypoint__copy(
  const arms_ros2_control_msgs__msg__JointWaypoint * input,
  arms_ros2_control_msgs__msg__JointWaypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // blend_ratio_percent
  output->blend_ratio_percent = input->blend_ratio_percent;
  // max_velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_velocity), &(output->max_velocity)))
  {
    return false;
  }
  // max_acceleration
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_acceleration), &(output->max_acceleration)))
  {
    return false;
  }
  // max_jerk
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_jerk), &(output->max_jerk)))
  {
    return false;
  }
  // time_mode
  output->time_mode = input->time_mode;
  // total_time
  output->total_time = input->total_time;
  return true;
}

arms_ros2_control_msgs__msg__JointWaypoint *
arms_ros2_control_msgs__msg__JointWaypoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__JointWaypoint * msg = (arms_ros2_control_msgs__msg__JointWaypoint *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__JointWaypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__msg__JointWaypoint));
  bool success = arms_ros2_control_msgs__msg__JointWaypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__msg__JointWaypoint__destroy(arms_ros2_control_msgs__msg__JointWaypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__msg__JointWaypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__msg__JointWaypoint__Sequence__init(arms_ros2_control_msgs__msg__JointWaypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__JointWaypoint * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__JointWaypoint)) {
      return false;
    }
    data = (arms_ros2_control_msgs__msg__JointWaypoint *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__msg__JointWaypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__msg__JointWaypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__msg__JointWaypoint__fini(&data[i - 1]);
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
arms_ros2_control_msgs__msg__JointWaypoint__Sequence__fini(arms_ros2_control_msgs__msg__JointWaypoint__Sequence * array)
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
      arms_ros2_control_msgs__msg__JointWaypoint__fini(&array->data[i]);
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

arms_ros2_control_msgs__msg__JointWaypoint__Sequence *
arms_ros2_control_msgs__msg__JointWaypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__JointWaypoint__Sequence * array = (arms_ros2_control_msgs__msg__JointWaypoint__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__JointWaypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__msg__JointWaypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__msg__JointWaypoint__Sequence__destroy(arms_ros2_control_msgs__msg__JointWaypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__msg__JointWaypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__msg__JointWaypoint__Sequence__are_equal(const arms_ros2_control_msgs__msg__JointWaypoint__Sequence * lhs, const arms_ros2_control_msgs__msg__JointWaypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__msg__JointWaypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__JointWaypoint__Sequence__copy(
  const arms_ros2_control_msgs__msg__JointWaypoint__Sequence * input,
  arms_ros2_control_msgs__msg__JointWaypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__JointWaypoint)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__msg__JointWaypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__msg__JointWaypoint * data =
      (arms_ros2_control_msgs__msg__JointWaypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__msg__JointWaypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__msg__JointWaypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__msg__JointWaypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
