// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:srv/MovecUseIK.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/srv/detail/movec_use_ik__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `circle_params`
#include "arms_ros2_control_msgs/msg/detail/circle_message__functions.h"

bool
arms_ros2_control_msgs__srv__MovecUseIK_Request__init(arms_ros2_control_msgs__srv__MovecUseIK_Request * msg)
{
  if (!msg) {
    return false;
  }
  // circle_params
  if (!arms_ros2_control_msgs__msg__CircleMessage__init(&msg->circle_params)) {
    arms_ros2_control_msgs__srv__MovecUseIK_Request__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Request__fini(arms_ros2_control_msgs__srv__MovecUseIK_Request * msg)
{
  if (!msg) {
    return;
  }
  // circle_params
  arms_ros2_control_msgs__msg__CircleMessage__fini(&msg->circle_params);
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Request__are_equal(const arms_ros2_control_msgs__srv__MovecUseIK_Request * lhs, const arms_ros2_control_msgs__srv__MovecUseIK_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // circle_params
  if (!arms_ros2_control_msgs__msg__CircleMessage__are_equal(
      &(lhs->circle_params), &(rhs->circle_params)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Request__copy(
  const arms_ros2_control_msgs__srv__MovecUseIK_Request * input,
  arms_ros2_control_msgs__srv__MovecUseIK_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // circle_params
  if (!arms_ros2_control_msgs__msg__CircleMessage__copy(
      &(input->circle_params), &(output->circle_params)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__srv__MovecUseIK_Request *
arms_ros2_control_msgs__srv__MovecUseIK_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Request * msg = (arms_ros2_control_msgs__srv__MovecUseIK_Request *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Request));
  bool success = arms_ros2_control_msgs__srv__MovecUseIK_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Request__destroy(arms_ros2_control_msgs__srv__MovecUseIK_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__srv__MovecUseIK_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__init(arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Request)) {
      return false;
    }
    data = (arms_ros2_control_msgs__srv__MovecUseIK_Request *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__srv__MovecUseIK_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__srv__MovecUseIK_Request__fini(&data[i - 1]);
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
arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__fini(arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * array)
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
      arms_ros2_control_msgs__srv__MovecUseIK_Request__fini(&array->data[i]);
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

arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence *
arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * array = (arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__destroy(arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__are_equal(const arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * lhs, const arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__srv__MovecUseIK_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__copy(
  const arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * input,
  arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__srv__MovecUseIK_Request * data =
      (arms_ros2_control_msgs__srv__MovecUseIK_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__srv__MovecUseIK_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__srv__MovecUseIK_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__srv__MovecUseIK_Request__copy(
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
arms_ros2_control_msgs__srv__MovecUseIK_Response__init(arms_ros2_control_msgs__srv__MovecUseIK_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    arms_ros2_control_msgs__srv__MovecUseIK_Response__fini(msg);
    return false;
  }
  // estimated_duration
  return true;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Response__fini(arms_ros2_control_msgs__srv__MovecUseIK_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // estimated_duration
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Response__are_equal(const arms_ros2_control_msgs__srv__MovecUseIK_Response * lhs, const arms_ros2_control_msgs__srv__MovecUseIK_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // estimated_duration
  if (lhs->estimated_duration != rhs->estimated_duration) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Response__copy(
  const arms_ros2_control_msgs__srv__MovecUseIK_Response * input,
  arms_ros2_control_msgs__srv__MovecUseIK_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // estimated_duration
  output->estimated_duration = input->estimated_duration;
  return true;
}

arms_ros2_control_msgs__srv__MovecUseIK_Response *
arms_ros2_control_msgs__srv__MovecUseIK_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Response * msg = (arms_ros2_control_msgs__srv__MovecUseIK_Response *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Response));
  bool success = arms_ros2_control_msgs__srv__MovecUseIK_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Response__destroy(arms_ros2_control_msgs__srv__MovecUseIK_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__srv__MovecUseIK_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__init(arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Response)) {
      return false;
    }
    data = (arms_ros2_control_msgs__srv__MovecUseIK_Response *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__srv__MovecUseIK_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__srv__MovecUseIK_Response__fini(&data[i - 1]);
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
arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__fini(arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * array)
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
      arms_ros2_control_msgs__srv__MovecUseIK_Response__fini(&array->data[i]);
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

arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence *
arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * array = (arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__destroy(arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__are_equal(const arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * lhs, const arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__srv__MovecUseIK_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__copy(
  const arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * input,
  arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__srv__MovecUseIK_Response * data =
      (arms_ros2_control_msgs__srv__MovecUseIK_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__srv__MovecUseIK_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__srv__MovecUseIK_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__srv__MovecUseIK_Response__copy(
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
// #include "arms_ros2_control_msgs/srv/detail/movec_use_ik__functions.h"

bool
arms_ros2_control_msgs__srv__MovecUseIK_Event__init(arms_ros2_control_msgs__srv__MovecUseIK_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(msg);
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__init(&msg->request, 0)) {
    arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(msg);
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__init(&msg->response, 0)) {
    arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(arms_ros2_control_msgs__srv__MovecUseIK_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__fini(&msg->request);
  // response
  arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__fini(&msg->response);
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Event__are_equal(const arms_ros2_control_msgs__srv__MovecUseIK_Event * lhs, const arms_ros2_control_msgs__srv__MovecUseIK_Event * rhs)
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
  if (!arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Event__copy(
  const arms_ros2_control_msgs__srv__MovecUseIK_Event * input,
  arms_ros2_control_msgs__srv__MovecUseIK_Event * output)
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
  if (!arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__srv__MovecUseIK_Event *
arms_ros2_control_msgs__srv__MovecUseIK_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Event * msg = (arms_ros2_control_msgs__srv__MovecUseIK_Event *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Event));
  bool success = arms_ros2_control_msgs__srv__MovecUseIK_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Event__destroy(arms_ros2_control_msgs__srv__MovecUseIK_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__init(arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Event)) {
      return false;
    }
    data = (arms_ros2_control_msgs__srv__MovecUseIK_Event *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__srv__MovecUseIK_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(&data[i - 1]);
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
arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__fini(arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * array)
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
      arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(&array->data[i]);
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

arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence *
arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * array = (arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__destroy(arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__are_equal(const arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * lhs, const arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__srv__MovecUseIK_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence__copy(
  const arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * input,
  arms_ros2_control_msgs__srv__MovecUseIK_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__srv__MovecUseIK_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__srv__MovecUseIK_Event * data =
      (arms_ros2_control_msgs__srv__MovecUseIK_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__srv__MovecUseIK_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__srv__MovecUseIK_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__srv__MovecUseIK_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
