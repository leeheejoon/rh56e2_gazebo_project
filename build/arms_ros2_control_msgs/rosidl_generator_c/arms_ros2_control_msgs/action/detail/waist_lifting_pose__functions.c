// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:action/WaistLiftingPose.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init(arms_ros2_control_msgs__action__WaistLiftingPose_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // x
  // z
  // phi
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__fini(arms_ros2_control_msgs__action__WaistLiftingPose_Goal * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // x
  // z
  // phi
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_Goal * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // phi
  if (lhs->phi != rhs->phi) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_Goal * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // x
  output->x = input->x;
  // z
  output->z = input->z;
  // phi
  output->phi = input->phi;
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_Goal *
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_Goal *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Goal));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Goal)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_Goal *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_Goal__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_Goal__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_Goal * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Result__init(arms_ros2_control_msgs__action__WaistLiftingPose_Result * msg)
{
  if (!msg) {
    return false;
  }
  // reachable
  // success
  // planned_x
  // planned_z
  // planned_phi
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_Result__fini(msg);
    return false;
  }
  // error_code
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Result__fini(arms_ros2_control_msgs__action__WaistLiftingPose_Result * msg)
{
  if (!msg) {
    return;
  }
  // reachable
  // success
  // planned_x
  // planned_z
  // planned_phi
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // error_code
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Result__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_Result * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reachable
  if (lhs->reachable != rhs->reachable) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // planned_x
  if (lhs->planned_x != rhs->planned_x) {
    return false;
  }
  // planned_z
  if (lhs->planned_z != rhs->planned_z) {
    return false;
  }
  // planned_phi
  if (lhs->planned_phi != rhs->planned_phi) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Result__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_Result * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // reachable
  output->reachable = input->reachable;
  // success
  output->success = input->success;
  // planned_x
  output->planned_x = input->planned_x;
  // planned_z
  output->planned_z = input->planned_z;
  // planned_phi
  output->planned_phi = input->planned_phi;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_Result *
arms_ros2_control_msgs__action__WaistLiftingPose_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Result * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_Result *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Result));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Result__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Result)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_Result *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_Result__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_Result__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_Result * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__fini(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_Feedback *
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_Feedback *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_Feedback *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__init(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init(&msg->goal)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__fini(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal__fini(&msg->goal);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request *
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__init(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__fini(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response *
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__init(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event *
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__init(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__fini(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request *
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__init(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Result__init(&msg->result)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__fini(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__fini(&msg->result);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response *
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__init(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__init(&msg->request, 0)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__init(&msg->response, 0)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__fini(&msg->request);
  // response
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__fini(&msg->response);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event *
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__functions.h"

bool
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__init(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init(&msg->feedback)) {
    arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__fini(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__fini(&msg->feedback);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage *
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * msg = (arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage));
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__init(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage)) {
      return false;
    }
    data = (arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__fini(&data[i - 1]);
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
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__fini(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * array)
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
      arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__fini(&array->data[i]);
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

arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence *
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * array = (arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__destroy(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__are_equal(const arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * lhs, const arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__copy(
  const arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * input,
  arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * data =
      (arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
