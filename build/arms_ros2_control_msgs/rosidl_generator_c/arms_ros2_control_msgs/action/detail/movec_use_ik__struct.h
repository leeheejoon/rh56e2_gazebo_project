// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:action/MovecUseIK.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/action/movec_use_ik.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__MOVEC_USE_IK__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__MOVEC_USE_IK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'circle_params'
#include "arms_ros2_control_msgs/msg/detail/circle_message__struct.h"

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_Goal
{
  arms_ros2_control_msgs__msg__CircleMessage circle_params;
} arms_ros2_control_msgs__action__MovecUseIK_Goal;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_Goal.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_Result
{
  bool success;
  rosidl_runtime_c__String message;
  double estimated_duration;
  double actual_duration;
} arms_ros2_control_msgs__action__MovecUseIK_Result;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_Result.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_Feedback
{
  double progress;
  double elapsed_time;
  double remaining_time;
} arms_ros2_control_msgs__action__MovecUseIK_Feedback;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_Feedback.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arms_ros2_control_msgs/action/detail/movec_use_ik__struct.h"

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arms_ros2_control_msgs__action__MovecUseIK_Goal goal;
} arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence request;
  arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence response;
} arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arms_ros2_control_msgs/action/detail/movec_use_ik__struct.h"

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response
{
  int8_t status;
  arms_ros2_control_msgs__action__MovecUseIK_Result result;
} arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence request;
  arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence response;
} arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arms_ros2_control_msgs/action/detail/movec_use_ik__struct.h"

/// Struct defined in action/MovecUseIK in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arms_ros2_control_msgs__action__MovecUseIK_Feedback feedback;
} arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage;

// Struct for a sequence of arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage.
typedef struct arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence
{
  arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__MOVEC_USE_IK__STRUCT_H_
