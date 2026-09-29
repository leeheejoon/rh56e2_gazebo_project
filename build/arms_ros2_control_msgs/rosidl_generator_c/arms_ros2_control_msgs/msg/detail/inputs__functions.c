// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:msg/Inputs.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/inputs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
arms_ros2_control_msgs__msg__Inputs__init(arms_ros2_control_msgs__msg__Inputs * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // target
  // hand_command
  return true;
}

void
arms_ros2_control_msgs__msg__Inputs__fini(arms_ros2_control_msgs__msg__Inputs * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // target
  // hand_command
}

bool
arms_ros2_control_msgs__msg__Inputs__are_equal(const arms_ros2_control_msgs__msg__Inputs * lhs, const arms_ros2_control_msgs__msg__Inputs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  // hand_command
  if (lhs->hand_command != rhs->hand_command) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__Inputs__copy(
  const arms_ros2_control_msgs__msg__Inputs * input,
  arms_ros2_control_msgs__msg__Inputs * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // target
  output->target = input->target;
  // hand_command
  output->hand_command = input->hand_command;
  return true;
}

arms_ros2_control_msgs__msg__Inputs *
arms_ros2_control_msgs__msg__Inputs__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__Inputs * msg = (arms_ros2_control_msgs__msg__Inputs *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__Inputs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__msg__Inputs));
  bool success = arms_ros2_control_msgs__msg__Inputs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__msg__Inputs__destroy(arms_ros2_control_msgs__msg__Inputs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__msg__Inputs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__msg__Inputs__Sequence__init(arms_ros2_control_msgs__msg__Inputs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__Inputs * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__Inputs)) {
      return false;
    }
    data = (arms_ros2_control_msgs__msg__Inputs *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__msg__Inputs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__msg__Inputs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__msg__Inputs__fini(&data[i - 1]);
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
arms_ros2_control_msgs__msg__Inputs__Sequence__fini(arms_ros2_control_msgs__msg__Inputs__Sequence * array)
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
      arms_ros2_control_msgs__msg__Inputs__fini(&array->data[i]);
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

arms_ros2_control_msgs__msg__Inputs__Sequence *
arms_ros2_control_msgs__msg__Inputs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__Inputs__Sequence * array = (arms_ros2_control_msgs__msg__Inputs__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__Inputs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__msg__Inputs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__msg__Inputs__Sequence__destroy(arms_ros2_control_msgs__msg__Inputs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__msg__Inputs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__msg__Inputs__Sequence__are_equal(const arms_ros2_control_msgs__msg__Inputs__Sequence * lhs, const arms_ros2_control_msgs__msg__Inputs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__msg__Inputs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__Inputs__Sequence__copy(
  const arms_ros2_control_msgs__msg__Inputs__Sequence * input,
  arms_ros2_control_msgs__msg__Inputs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__Inputs)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__msg__Inputs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__msg__Inputs * data =
      (arms_ros2_control_msgs__msg__Inputs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__msg__Inputs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__msg__Inputs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__msg__Inputs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
