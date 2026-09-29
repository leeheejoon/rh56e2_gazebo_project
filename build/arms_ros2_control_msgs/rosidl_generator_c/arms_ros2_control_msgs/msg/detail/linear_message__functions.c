// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:msg/LinearMessage.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/linear_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `endpoint`
// Member `right_endpoint`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `frame_id`
// Member `arm_name`
// Member `ik_type`
#include "rosidl_runtime_c/string_functions.h"

bool
arms_ros2_control_msgs__msg__LinearMessage__init(arms_ros2_control_msgs__msg__LinearMessage * msg)
{
  if (!msg) {
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__Pose__init(&msg->endpoint)) {
    arms_ros2_control_msgs__msg__LinearMessage__fini(msg);
    return false;
  }
  // right_endpoint
  if (!geometry_msgs__msg__Pose__init(&msg->right_endpoint)) {
    arms_ros2_control_msgs__msg__LinearMessage__fini(msg);
    return false;
  }
  // max_linear_velocity
  // max_linear_acceleration
  // max_linear_jerk
  // max_angular_velocity
  // max_angular_acceleration
  // max_angular_jerk
  // duration
  // time_mode
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    arms_ros2_control_msgs__msg__LinearMessage__fini(msg);
    return false;
  }
  // arm_name
  if (!rosidl_runtime_c__String__init(&msg->arm_name)) {
    arms_ros2_control_msgs__msg__LinearMessage__fini(msg);
    return false;
  }
  // ik_type
  if (!rosidl_runtime_c__String__init(&msg->ik_type)) {
    arms_ros2_control_msgs__msg__LinearMessage__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__msg__LinearMessage__fini(arms_ros2_control_msgs__msg__LinearMessage * msg)
{
  if (!msg) {
    return;
  }
  // endpoint
  geometry_msgs__msg__Pose__fini(&msg->endpoint);
  // right_endpoint
  geometry_msgs__msg__Pose__fini(&msg->right_endpoint);
  // max_linear_velocity
  // max_linear_acceleration
  // max_linear_jerk
  // max_angular_velocity
  // max_angular_acceleration
  // max_angular_jerk
  // duration
  // time_mode
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // arm_name
  rosidl_runtime_c__String__fini(&msg->arm_name);
  // ik_type
  rosidl_runtime_c__String__fini(&msg->ik_type);
}

bool
arms_ros2_control_msgs__msg__LinearMessage__are_equal(const arms_ros2_control_msgs__msg__LinearMessage * lhs, const arms_ros2_control_msgs__msg__LinearMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->endpoint), &(rhs->endpoint)))
  {
    return false;
  }
  // right_endpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->right_endpoint), &(rhs->right_endpoint)))
  {
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
arms_ros2_control_msgs__msg__LinearMessage__copy(
  const arms_ros2_control_msgs__msg__LinearMessage * input,
  arms_ros2_control_msgs__msg__LinearMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  // right_endpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->right_endpoint), &(output->right_endpoint)))
  {
    return false;
  }
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

arms_ros2_control_msgs__msg__LinearMessage *
arms_ros2_control_msgs__msg__LinearMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__LinearMessage * msg = (arms_ros2_control_msgs__msg__LinearMessage *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__LinearMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__msg__LinearMessage));
  bool success = arms_ros2_control_msgs__msg__LinearMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__msg__LinearMessage__destroy(arms_ros2_control_msgs__msg__LinearMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__msg__LinearMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__msg__LinearMessage__Sequence__init(arms_ros2_control_msgs__msg__LinearMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__LinearMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__LinearMessage)) {
      return false;
    }
    data = (arms_ros2_control_msgs__msg__LinearMessage *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__msg__LinearMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__msg__LinearMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__msg__LinearMessage__fini(&data[i - 1]);
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
arms_ros2_control_msgs__msg__LinearMessage__Sequence__fini(arms_ros2_control_msgs__msg__LinearMessage__Sequence * array)
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
      arms_ros2_control_msgs__msg__LinearMessage__fini(&array->data[i]);
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

arms_ros2_control_msgs__msg__LinearMessage__Sequence *
arms_ros2_control_msgs__msg__LinearMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__LinearMessage__Sequence * array = (arms_ros2_control_msgs__msg__LinearMessage__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__LinearMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__msg__LinearMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__msg__LinearMessage__Sequence__destroy(arms_ros2_control_msgs__msg__LinearMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__msg__LinearMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__msg__LinearMessage__Sequence__are_equal(const arms_ros2_control_msgs__msg__LinearMessage__Sequence * lhs, const arms_ros2_control_msgs__msg__LinearMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__msg__LinearMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__LinearMessage__Sequence__copy(
  const arms_ros2_control_msgs__msg__LinearMessage__Sequence * input,
  arms_ros2_control_msgs__msg__LinearMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__LinearMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__msg__LinearMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__msg__LinearMessage * data =
      (arms_ros2_control_msgs__msg__LinearMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__msg__LinearMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__msg__LinearMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__msg__LinearMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
