// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
arms_ros2_control_msgs__msg__WbcCapability__init(arms_ros2_control_msgs__msg__WbcCapability * msg)
{
  if (!msg) {
    return false;
  }
  // has_mobile_base
  // has_body_relative_constraint
  // has_waist_lock
  // has_head_coupling
  // has_custom_joint_lock
  // has_bimanual_coupling
  // body_tracking_ee_enabled
  // head_tracking_ee_enabled
  // has_home_joint_reference
  // head_midpoint_gaze_enabled
  return true;
}

void
arms_ros2_control_msgs__msg__WbcCapability__fini(arms_ros2_control_msgs__msg__WbcCapability * msg)
{
  if (!msg) {
    return;
  }
  // has_mobile_base
  // has_body_relative_constraint
  // has_waist_lock
  // has_head_coupling
  // has_custom_joint_lock
  // has_bimanual_coupling
  // body_tracking_ee_enabled
  // head_tracking_ee_enabled
  // has_home_joint_reference
  // head_midpoint_gaze_enabled
}

bool
arms_ros2_control_msgs__msg__WbcCapability__are_equal(const arms_ros2_control_msgs__msg__WbcCapability * lhs, const arms_ros2_control_msgs__msg__WbcCapability * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // has_mobile_base
  if (lhs->has_mobile_base != rhs->has_mobile_base) {
    return false;
  }
  // has_body_relative_constraint
  if (lhs->has_body_relative_constraint != rhs->has_body_relative_constraint) {
    return false;
  }
  // has_waist_lock
  if (lhs->has_waist_lock != rhs->has_waist_lock) {
    return false;
  }
  // has_head_coupling
  if (lhs->has_head_coupling != rhs->has_head_coupling) {
    return false;
  }
  // has_custom_joint_lock
  if (lhs->has_custom_joint_lock != rhs->has_custom_joint_lock) {
    return false;
  }
  // has_bimanual_coupling
  if (lhs->has_bimanual_coupling != rhs->has_bimanual_coupling) {
    return false;
  }
  // body_tracking_ee_enabled
  if (lhs->body_tracking_ee_enabled != rhs->body_tracking_ee_enabled) {
    return false;
  }
  // head_tracking_ee_enabled
  if (lhs->head_tracking_ee_enabled != rhs->head_tracking_ee_enabled) {
    return false;
  }
  // has_home_joint_reference
  if (lhs->has_home_joint_reference != rhs->has_home_joint_reference) {
    return false;
  }
  // head_midpoint_gaze_enabled
  if (lhs->head_midpoint_gaze_enabled != rhs->head_midpoint_gaze_enabled) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__WbcCapability__copy(
  const arms_ros2_control_msgs__msg__WbcCapability * input,
  arms_ros2_control_msgs__msg__WbcCapability * output)
{
  if (!input || !output) {
    return false;
  }
  // has_mobile_base
  output->has_mobile_base = input->has_mobile_base;
  // has_body_relative_constraint
  output->has_body_relative_constraint = input->has_body_relative_constraint;
  // has_waist_lock
  output->has_waist_lock = input->has_waist_lock;
  // has_head_coupling
  output->has_head_coupling = input->has_head_coupling;
  // has_custom_joint_lock
  output->has_custom_joint_lock = input->has_custom_joint_lock;
  // has_bimanual_coupling
  output->has_bimanual_coupling = input->has_bimanual_coupling;
  // body_tracking_ee_enabled
  output->body_tracking_ee_enabled = input->body_tracking_ee_enabled;
  // head_tracking_ee_enabled
  output->head_tracking_ee_enabled = input->head_tracking_ee_enabled;
  // has_home_joint_reference
  output->has_home_joint_reference = input->has_home_joint_reference;
  // head_midpoint_gaze_enabled
  output->head_midpoint_gaze_enabled = input->head_midpoint_gaze_enabled;
  return true;
}

arms_ros2_control_msgs__msg__WbcCapability *
arms_ros2_control_msgs__msg__WbcCapability__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__WbcCapability * msg = (arms_ros2_control_msgs__msg__WbcCapability *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__WbcCapability), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__msg__WbcCapability));
  bool success = arms_ros2_control_msgs__msg__WbcCapability__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__msg__WbcCapability__destroy(arms_ros2_control_msgs__msg__WbcCapability * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__msg__WbcCapability__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__msg__WbcCapability__Sequence__init(arms_ros2_control_msgs__msg__WbcCapability__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__WbcCapability * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__WbcCapability)) {
      return false;
    }
    data = (arms_ros2_control_msgs__msg__WbcCapability *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__msg__WbcCapability), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__msg__WbcCapability__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__msg__WbcCapability__fini(&data[i - 1]);
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
arms_ros2_control_msgs__msg__WbcCapability__Sequence__fini(arms_ros2_control_msgs__msg__WbcCapability__Sequence * array)
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
      arms_ros2_control_msgs__msg__WbcCapability__fini(&array->data[i]);
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

arms_ros2_control_msgs__msg__WbcCapability__Sequence *
arms_ros2_control_msgs__msg__WbcCapability__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__msg__WbcCapability__Sequence * array = (arms_ros2_control_msgs__msg__WbcCapability__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__msg__WbcCapability__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__msg__WbcCapability__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__msg__WbcCapability__Sequence__destroy(arms_ros2_control_msgs__msg__WbcCapability__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__msg__WbcCapability__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__msg__WbcCapability__Sequence__are_equal(const arms_ros2_control_msgs__msg__WbcCapability__Sequence * lhs, const arms_ros2_control_msgs__msg__WbcCapability__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__msg__WbcCapability__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__msg__WbcCapability__Sequence__copy(
  const arms_ros2_control_msgs__msg__WbcCapability__Sequence * input,
  arms_ros2_control_msgs__msg__WbcCapability__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__msg__WbcCapability)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__msg__WbcCapability);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__msg__WbcCapability * data =
      (arms_ros2_control_msgs__msg__WbcCapability *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__msg__WbcCapability__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__msg__WbcCapability__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__msg__WbcCapability__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
