// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:action/WaistLiftingPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/action/waist_lifting_pose.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_ABSOLUTE'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal__MODE_ABSOLUTE = 0
};

/// Constant 'MODE_RELATIVE'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal__MODE_RELATIVE = 1
};

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_Goal
{
  uint8_t mode;
  double x;
  double z;
  double phi;
} arms_ros2_control_msgs__action__WaistLiftingPose_Goal;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_Goal.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__ERROR_NONE = 0l
};

/// Constant 'ERROR_INVALID_MODE'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__ERROR_INVALID_MODE = 1l
};

/// Constant 'ERROR_CONTROLLER_NOT_READY'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__ERROR_CONTROLLER_NOT_READY = 2l
};

/// Constant 'ERROR_UNREACHABLE'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__ERROR_UNREACHABLE = 3l
};

/// Constant 'ERROR_RUNTIME_FAILED'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__ERROR_RUNTIME_FAILED = 4l
};

/// Constant 'ERROR_CANCELED'.
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Result__ERROR_CANCELED = 5l
};

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_Result
{
  bool reachable;
  bool success;
  double planned_x;
  double planned_z;
  double planned_phi;
  rosidl_runtime_c__String message;
  int32_t error_code;
} arms_ros2_control_msgs__action__WaistLiftingPose_Result;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_Result.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_Feedback
{
  double progress;
} arms_ros2_control_msgs__action__WaistLiftingPose_Feedback;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_Feedback.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__struct.h"

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arms_ros2_control_msgs__action__WaistLiftingPose_Goal goal;
} arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence request;
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence response;
} arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__struct.h"

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response
{
  int8_t status;
  arms_ros2_control_msgs__action__WaistLiftingPose_Result result;
} arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence request;
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence response;
} arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__struct.h"

/// Struct defined in action/WaistLiftingPose in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arms_ros2_control_msgs__action__WaistLiftingPose_Feedback feedback;
} arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage;

// Struct for a sequence of arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage.
typedef struct arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence
{
  arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__STRUCT_H_
