// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/teleop_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
arms_ros2_control_msgs__msg__TeleopMode__init(arms_ros2_control_msgs__msg__TeleopMode * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    arms_ros2_control_msgs__msg__TeleopMode__fini(msg);
    return false;
  }
  // active
  // control_mode
  // mirror_movement
  // speed_level
  // speed_scale
  return true;
}

void
arms_ros2_control_msgs__msg__TeleopMode__fini(arms_ros2_control_msgs__msg__TeleopMode * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // active
  // control_mode
  // mirror_movement
  // speed_level
  // speed_scale
}

bool
arms_ros2_control_msgs__msg__TeleopMode__are_equal(const arms_ros2_control_msgs__msg__TeleopMode * lhs, const arms_ros2_control_msgs__msg__TeleopMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // mirror_movement
  if (lhs->mirror_movement != rhs->mirror_movement) {
    return false;
  }
  // speed_level
  if (lhs->speed_level != rhs->speed_level) {
    return false;
  }
  // speed_scale
  if (lhs->speed_scale != rhs->speed_scale) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__TeleopMode__copy(
  const arms_ros2_control_msgs__msg__TeleopMode * input,
  arms_ros2_control_msgs__msg__TeleopMode * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // active
  output->active = input->active;
  // control_mode
  output->control_mode = input->control_mode;
  // mirror_movement
  output->mirror_movement = input->mirror_movement;
  // speed_level
  output->speed_level = input->speed_level;
  // speed_scale
  output->speed_scale = input->speed_scale;
  return true;
}

arms_ros2_control_msgs__msg__TeleopMode *
arms_ros2_control_msgs__msg__TeleopMode__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__TeleopMode * msg = (arms_ros2_control_msgs__msg__TeleopMode *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__TeleopMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__msg__TeleopMode));
  bool success = arms_ros2_control_msgs__msg__TeleopMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__msg__TeleopMode__destroy(arms_ros2_control_msgs__msg__TeleopMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__msg__TeleopMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__msg__TeleopMode__Sequence__init(arms_ros2_control_msgs__msg__TeleopMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__TeleopMode * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__TeleopMode)) {
      return false;
    }
    data = (arms_ros2_control_msgs__msg__TeleopMode *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__msg__TeleopMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__msg__TeleopMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__msg__TeleopMode__fini(&data[i - 1]);
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
arms_ros2_control_msgs__msg__TeleopMode__Sequence__fini(arms_ros2_control_msgs__msg__TeleopMode__Sequence * array)
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
      arms_ros2_control_msgs__msg__TeleopMode__fini(&array->data[i]);
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

arms_ros2_control_msgs__msg__TeleopMode__Sequence *
arms_ros2_control_msgs__msg__TeleopMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__TeleopMode__Sequence * array = (arms_ros2_control_msgs__msg__TeleopMode__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__TeleopMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__msg__TeleopMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__msg__TeleopMode__Sequence__destroy(arms_ros2_control_msgs__msg__TeleopMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__msg__TeleopMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__msg__TeleopMode__Sequence__are_equal(const arms_ros2_control_msgs__msg__TeleopMode__Sequence * lhs, const arms_ros2_control_msgs__msg__TeleopMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__msg__TeleopMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__TeleopMode__Sequence__copy(
  const arms_ros2_control_msgs__msg__TeleopMode__Sequence * input,
  arms_ros2_control_msgs__msg__TeleopMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__TeleopMode)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__msg__TeleopMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__msg__TeleopMode * data =
      (arms_ros2_control_msgs__msg__TeleopMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__msg__TeleopMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__msg__TeleopMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__msg__TeleopMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
