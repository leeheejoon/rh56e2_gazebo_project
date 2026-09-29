// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/kinematics_service.h"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__STRUCT_H_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'operation_type'
// Member 'arm_type'
// Member 'solver_type'
#include "rosidl_runtime_c/string.h"
// Member 'joint_angles'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'target_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/KinematicsService in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__KinematicsService_Request
{
  /// ====== 请求部分 ======
  /// 操作类型: "fk" 或 "ik"
  rosidl_runtime_c__String operation_type;
  /// 手臂类型: "left", "right", "both"
  rosidl_runtime_c__String arm_type;
  /// 求解器类型: "dls", "bfgs", "auto"
  /// dls: 阻尼最小二乘法
  /// bfgs: BFGS优化法
  /// auto: 自动选择（推荐SDK auto，失败后回退）
  /// 默认 "auto"
  rosidl_runtime_c__String solver_type;
  /// 关节角度 (用于FK，或作为IK的初始猜测)
  /// 对于单臂: 7个关节
  /// 对于双臂: 14个关节 (左臂7个 + 右臂7个)
  rosidl_runtime_c__double__Sequence joint_angles;
  /// 目标位姿 (用于IK)
  /// 对于单臂: 1个位姿
  /// 对于双臂: 2个位姿 (左臂和右臂)
  geometry_msgs__msg__Pose__Sequence target_poses;
  /// IK参数
  /// 最大迭代次数 (默认: 100)
  int32_t max_iterations;
  /// 容差 (默认: 1e-6)
  double tolerance;
  /// DLS阻尼系数 (默认: 0.01)
  double dls_damping;
  /// 是否启用随机重启 (默认: false)
  bool enable_random_restart;
} arms_ros2_control_msgs__srv__KinematicsService_Request;

// Struct for a sequence of arms_ros2_control_msgs__srv__KinematicsService_Request.
typedef struct arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence
{
  arms_ros2_control_msgs__srv__KinematicsService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'used_solver'
// Member 'additional_info'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'result_poses'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'result_joint_angles'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/KinematicsService in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__KinematicsService_Response
{
  bool success;
  rosidl_runtime_c__String message;
  /// 计算结果
  /// 对于FK: 计算出的位姿 (单臂: 1个, 双臂: 2个)
  /// 对于IK: 计算出的关节角度
  geometry_msgs__msg__Pose__Sequence result_poses;
  rosidl_runtime_c__double__Sequence result_joint_angles;
  /// 求解器信息
  /// 实际使用的求解器
  rosidl_runtime_c__String used_solver;
  /// 迭代次数
  int32_t iterations;
  /// 最终误差
  double final_error;
  /// 计算耗时 (毫秒)
  double computation_time_ms;
  /// 是否超出工作空间
  bool is_out_of_range;
  /// bool[] is_degenerate      # 各关节是否奇异（仅SDK）
  /// bool is_joint_exceeded    # 是否超出限位（仅SDK）
  ///  附加信息（如SDK返回的详细信息）
  rosidl_runtime_c__String additional_info;
} arms_ros2_control_msgs__srv__KinematicsService_Response;

// Struct for a sequence of arms_ros2_control_msgs__srv__KinematicsService_Response.
typedef struct arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence
{
  arms_ros2_control_msgs__srv__KinematicsService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arms_ros2_control_msgs__srv__KinematicsService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arms_ros2_control_msgs__srv__KinematicsService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/KinematicsService in the package arms_ros2_control_msgs.
typedef struct arms_ros2_control_msgs__srv__KinematicsService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence request;
  arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence response;
} arms_ros2_control_msgs__srv__KinematicsService_Event;

// Struct for a sequence of arms_ros2_control_msgs__srv__KinematicsService_Event.
typedef struct arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence
{
  arms_ros2_control_msgs__srv__KinematicsService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arms_ros2_control_msgs__srv__KinematicsService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__STRUCT_H_
