// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
arms_ros2_control_msgs__msg__WbcCurrentState__init(arms_ros2_control_msgs__msg__WbcCurrentState * msg)
{
  if (!msg) {
    return false;
  }
  // base_state
  // body_state
  // bimanual_state
  // left_arm_state
  // right_arm_state
  // home_joint_reference_enabled
  // head_state
  // head_midpoint_gaze_active
  return true;
}

void
arms_ros2_control_msgs__msg__WbcCurrentState__fini(arms_ros2_control_msgs__msg__WbcCurrentState * msg)
{
  if (!msg) {
    return;
  }
  // base_state
  // body_state
  // bimanual_state
  // left_arm_state
  // right_arm_state
  // home_joint_reference_enabled
  // head_state
  // head_midpoint_gaze_active
}

bool
arms_ros2_control_msgs__msg__WbcCurrentState__are_equal(const arms_ros2_control_msgs__msg__WbcCurrentState * lhs, const arms_ros2_control_msgs__msg__WbcCurrentState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_state
  if (lhs->base_state != rhs->base_state) {
    return false;
  }
  // body_state
  if (lhs->body_state != rhs->body_state) {
    return false;
  }
  // bimanual_state
  if (lhs->bimanual_state != rhs->bimanual_state) {
    return false;
  }
  // left_arm_state
  if (lhs->left_arm_state != rhs->left_arm_state) {
    return false;
  }
  // right_arm_state
  if (lhs->right_arm_state != rhs->right_arm_state) {
    return false;
  }
  // home_joint_reference_enabled
  if (lhs->home_joint_reference_enabled != rhs->home_joint_reference_enabled) {
    return false;
  }
  // head_state
  if (lhs->head_state != rhs->head_state) {
    return false;
  }
  // head_midpoint_gaze_active
  if (lhs->head_midpoint_gaze_active != rhs->head_midpoint_gaze_active) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__WbcCurrentState__copy(
  const arms_ros2_control_msgs__msg__WbcCurrentState * input,
  arms_ros2_control_msgs__msg__WbcCurrentState * output)
{
  if (!input || !output) {
    return false;
  }
  // base_state
  output->base_state = input->base_state;
  // body_state
  output->body_state = input->body_state;
  // bimanual_state
  output->bimanual_state = input->bimanual_state;
  // left_arm_state
  output->left_arm_state = input->left_arm_state;
  // right_arm_state
  output->right_arm_state = input->right_arm_state;
  // home_joint_reference_enabled
  output->home_joint_reference_enabled = input->home_joint_reference_enabled;
  // head_state
  output->head_state = input->head_state;
  // head_midpoint_gaze_active
  output->head_midpoint_gaze_active = input->head_midpoint_gaze_active;
  return true;
}

arms_ros2_control_msgs__msg__WbcCurrentState *
arms_ros2_control_msgs__msg__WbcCurrentState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__WbcCurrentState * msg = (arms_ros2_control_msgs__msg__WbcCurrentState *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__WbcCurrentState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__msg__WbcCurrentState));
  bool success = arms_ros2_control_msgs__msg__WbcCurrentState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__msg__WbcCurrentState__destroy(arms_ros2_control_msgs__msg__WbcCurrentState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__msg__WbcCurrentState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__init(arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__WbcCurrentState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__WbcCurrentState)) {
      return false;
    }
    data = (arms_ros2_control_msgs__msg__WbcCurrentState *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__msg__WbcCurrentState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__msg__WbcCurrentState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__msg__WbcCurrentState__fini(&data[i - 1]);
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
arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__fini(arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * array)
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
      arms_ros2_control_msgs__msg__WbcCurrentState__fini(&array->data[i]);
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

arms_ros2_control_msgs__msg__WbcCurrentState__Sequence *
arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * array = (arms_ros2_control_msgs__msg__WbcCurrentState__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__WbcCurrentState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__destroy(arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__are_equal(const arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * lhs, const arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__msg__WbcCurrentState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__copy(
  const arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * input,
  arms_ros2_control_msgs__msg__WbcCurrentState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__WbcCurrentState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__msg__WbcCurrentState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__msg__WbcCurrentState * data =
      (arms_ros2_control_msgs__msg__WbcCurrentState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__msg__WbcCurrentState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__msg__WbcCurrentState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__msg__WbcCurrentState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
