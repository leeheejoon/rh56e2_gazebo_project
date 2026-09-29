// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice
#include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `operation_type`
// Member `arm_type`
// Member `solver_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `target_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
arms_ros2_control_msgs__srv__KinematicsService_Request__init(arms_ros2_control_msgs__srv__KinematicsService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // operation_type
  if (!rosidl_runtime_c__String__init(&msg->operation_type)) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__fini(msg);
    return false;
  }
  // arm_type
  if (!rosidl_runtime_c__String__init(&msg->arm_type)) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__fini(msg);
    return false;
  }
  // solver_type
  if (!rosidl_runtime_c__String__init(&msg->solver_type)) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__fini(msg);
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_angles, 0)) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__fini(msg);
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->target_poses, 0)) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__fini(msg);
    return false;
  }
  // max_iterations
  // tolerance
  // dls_damping
  // enable_random_restart
  return true;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Request__fini(arms_ros2_control_msgs__srv__KinematicsService_Request * msg)
{
  if (!msg) {
    return;
  }
  // operation_type
  rosidl_runtime_c__String__fini(&msg->operation_type);
  // arm_type
  rosidl_runtime_c__String__fini(&msg->arm_type);
  // solver_type
  rosidl_runtime_c__String__fini(&msg->solver_type);
  // joint_angles
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_angles);
  // target_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->target_poses);
  // max_iterations
  // tolerance
  // dls_damping
  // enable_random_restart
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Request__are_equal(const arms_ros2_control_msgs__srv__KinematicsService_Request * lhs, const arms_ros2_control_msgs__srv__KinematicsService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operation_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operation_type), &(rhs->operation_type)))
  {
    return false;
  }
  // arm_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arm_type), &(rhs->arm_type)))
  {
    return false;
  }
  // solver_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->solver_type), &(rhs->solver_type)))
  {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_angles), &(rhs->joint_angles)))
  {
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->target_poses), &(rhs->target_poses)))
  {
    return false;
  }
  // max_iterations
  if (lhs->max_iterations != rhs->max_iterations) {
    return false;
  }
  // tolerance
  if (lhs->tolerance != rhs->tolerance) {
    return false;
  }
  // dls_damping
  if (lhs->dls_damping != rhs->dls_damping) {
    return false;
  }
  // enable_random_restart
  if (lhs->enable_random_restart != rhs->enable_random_restart) {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Request__copy(
  const arms_ros2_control_msgs__srv__KinematicsService_Request * input,
  arms_ros2_control_msgs__srv__KinematicsService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // operation_type
  if (!rosidl_runtime_c__String__copy(
      &(input->operation_type), &(output->operation_type)))
  {
    return false;
  }
  // arm_type
  if (!rosidl_runtime_c__String__copy(
      &(input->arm_type), &(output->arm_type)))
  {
    return false;
  }
  // solver_type
  if (!rosidl_runtime_c__String__copy(
      &(input->solver_type), &(output->solver_type)))
  {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_angles), &(output->joint_angles)))
  {
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->target_poses), &(output->target_poses)))
  {
    return false;
  }
  // max_iterations
  output->max_iterations = input->max_iterations;
  // tolerance
  output->tolerance = input->tolerance;
  // dls_damping
  output->dls_damping = input->dls_damping;
  // enable_random_restart
  output->enable_random_restart = input->enable_random_restart;
  return true;
}

arms_ros2_control_msgs__srv__KinematicsService_Request *
arms_ros2_control_msgs__srv__KinematicsService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Request * msg = (arms_ros2_control_msgs__srv__KinematicsService_Request *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request));
  bool success = arms_ros2_control_msgs__srv__KinematicsService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Request__destroy(arms_ros2_control_msgs__srv__KinematicsService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__init(arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request)) {
      return false;
    }
    data = (arms_ros2_control_msgs__srv__KinematicsService_Request *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__srv__KinematicsService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__srv__KinematicsService_Request__fini(&data[i - 1]);
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
arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__fini(arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * array)
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
      arms_ros2_control_msgs__srv__KinematicsService_Request__fini(&array->data[i]);
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

arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence *
arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * array = (arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__destroy(arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__are_equal(const arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * lhs, const arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__srv__KinematicsService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__copy(
  const arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * input,
  arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__srv__KinematicsService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__srv__KinematicsService_Request * data =
      (arms_ros2_control_msgs__srv__KinematicsService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__srv__KinematicsService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__srv__KinematicsService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__srv__KinematicsService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `used_solver`
// Member `additional_info`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `result_poses`
// already included above
// #include "geometry_msgs/msg/detail/pose__functions.h"
// Member `result_joint_angles`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
arms_ros2_control_msgs__srv__KinematicsService_Response__init(arms_ros2_control_msgs__srv__KinematicsService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__fini(msg);
    return false;
  }
  // result_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->result_poses, 0)) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__fini(msg);
    return false;
  }
  // result_joint_angles
  if (!rosidl_runtime_c__double__Sequence__init(&msg->result_joint_angles, 0)) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__fini(msg);
    return false;
  }
  // used_solver
  if (!rosidl_runtime_c__String__init(&msg->used_solver)) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__fini(msg);
    return false;
  }
  // iterations
  // final_error
  // computation_time_ms
  // is_out_of_range
  // additional_info
  if (!rosidl_runtime_c__String__init(&msg->additional_info)) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Response__fini(arms_ros2_control_msgs__srv__KinematicsService_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // result_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->result_poses);
  // result_joint_angles
  rosidl_runtime_c__double__Sequence__fini(&msg->result_joint_angles);
  // used_solver
  rosidl_runtime_c__String__fini(&msg->used_solver);
  // iterations
  // final_error
  // computation_time_ms
  // is_out_of_range
  // additional_info
  rosidl_runtime_c__String__fini(&msg->additional_info);
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Response__are_equal(const arms_ros2_control_msgs__srv__KinematicsService_Response * lhs, const arms_ros2_control_msgs__srv__KinematicsService_Response * rhs)
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
  // result_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->result_poses), &(rhs->result_poses)))
  {
    return false;
  }
  // result_joint_angles
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->result_joint_angles), &(rhs->result_joint_angles)))
  {
    return false;
  }
  // used_solver
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->used_solver), &(rhs->used_solver)))
  {
    return false;
  }
  // iterations
  if (lhs->iterations != rhs->iterations) {
    return false;
  }
  // final_error
  if (lhs->final_error != rhs->final_error) {
    return false;
  }
  // computation_time_ms
  if (lhs->computation_time_ms != rhs->computation_time_ms) {
    return false;
  }
  // is_out_of_range
  if (lhs->is_out_of_range != rhs->is_out_of_range) {
    return false;
  }
  // additional_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->additional_info), &(rhs->additional_info)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Response__copy(
  const arms_ros2_control_msgs__srv__KinematicsService_Response * input,
  arms_ros2_control_msgs__srv__KinematicsService_Response * output)
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
  // result_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->result_poses), &(output->result_poses)))
  {
    return false;
  }
  // result_joint_angles
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->result_joint_angles), &(output->result_joint_angles)))
  {
    return false;
  }
  // used_solver
  if (!rosidl_runtime_c__String__copy(
      &(input->used_solver), &(output->used_solver)))
  {
    return false;
  }
  // iterations
  output->iterations = input->iterations;
  // final_error
  output->final_error = input->final_error;
  // computation_time_ms
  output->computation_time_ms = input->computation_time_ms;
  // is_out_of_range
  output->is_out_of_range = input->is_out_of_range;
  // additional_info
  if (!rosidl_runtime_c__String__copy(
      &(input->additional_info), &(output->additional_info)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__srv__KinematicsService_Response *
arms_ros2_control_msgs__srv__KinematicsService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Response * msg = (arms_ros2_control_msgs__srv__KinematicsService_Response *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response));
  bool success = arms_ros2_control_msgs__srv__KinematicsService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Response__destroy(arms_ros2_control_msgs__srv__KinematicsService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__init(arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response)) {
      return false;
    }
    data = (arms_ros2_control_msgs__srv__KinematicsService_Response *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__srv__KinematicsService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__srv__KinematicsService_Response__fini(&data[i - 1]);
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
arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__fini(arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * array)
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
      arms_ros2_control_msgs__srv__KinematicsService_Response__fini(&array->data[i]);
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

arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence *
arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * array = (arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__destroy(arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__are_equal(const arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * lhs, const arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__srv__KinematicsService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__copy(
  const arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * input,
  arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__srv__KinematicsService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__srv__KinematicsService_Response * data =
      (arms_ros2_control_msgs__srv__KinematicsService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__srv__KinematicsService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__srv__KinematicsService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__srv__KinematicsService_Response__copy(
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
// #include "arms_ros2_control_msgs/srv/detail/kinematics_service__functions.h"

bool
arms_ros2_control_msgs__srv__KinematicsService_Event__init(arms_ros2_control_msgs__srv__KinematicsService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    arms_ros2_control_msgs__srv__KinematicsService_Event__fini(msg);
    return false;
  }
  // request
  if (!arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__init(&msg->request, 0)) {
    arms_ros2_control_msgs__srv__KinematicsService_Event__fini(msg);
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__init(&msg->response, 0)) {
    arms_ros2_control_msgs__srv__KinematicsService_Event__fini(msg);
    return false;
  }
  return true;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Event__fini(arms_ros2_control_msgs__srv__KinematicsService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__fini(&msg->request);
  // response
  arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__fini(&msg->response);
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Event__are_equal(const arms_ros2_control_msgs__srv__KinematicsService_Event * lhs, const arms_ros2_control_msgs__srv__KinematicsService_Event * rhs)
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
  if (!arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Event__copy(
  const arms_ros2_control_msgs__srv__KinematicsService_Event * input,
  arms_ros2_control_msgs__srv__KinematicsService_Event * output)
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
  if (!arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

arms_ros2_control_msgs__srv__KinematicsService_Event *
arms_ros2_control_msgs__srv__KinematicsService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Event * msg = (arms_ros2_control_msgs__srv__KinematicsService_Event *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event));
  bool success = arms_ros2_control_msgs__srv__KinematicsService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Event__destroy(arms_ros2_control_msgs__srv__KinematicsService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arms_ros2_control_msgs__srv__KinematicsService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__init(arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event)) {
      return false;
    }
    data = (arms_ros2_control_msgs__srv__KinematicsService_Event *)allocator.zero_allocate(size, sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arms_ros2_control_msgs__srv__KinematicsService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arms_ros2_control_msgs__srv__KinematicsService_Event__fini(&data[i - 1]);
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
arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__fini(arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * array)
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
      arms_ros2_control_msgs__srv__KinematicsService_Event__fini(&array->data[i]);
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

arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence *
arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * array = (arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence *)allocator.allocate(sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__destroy(arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__are_equal(const arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * lhs, const arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arms_ros2_control_msgs__srv__KinematicsService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence__copy(
  const arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * input,
  arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arms_ros2_control_msgs__srv__KinematicsService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arms_ros2_control_msgs__srv__KinematicsService_Event * data =
      (arms_ros2_control_msgs__srv__KinematicsService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arms_ros2_control_msgs__srv__KinematicsService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arms_ros2_control_msgs__srv__KinematicsService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arms_ros2_control_msgs__srv__KinematicsService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
