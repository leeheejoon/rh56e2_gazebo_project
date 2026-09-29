#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to arms_ros2_control_msgs__srv__ExecuteCircle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteCircle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub circle_params: super::msg::CircleMessage,

}



impl Default for ExecuteCircle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteCircle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteCircle_Request {
  type RmwMsg = super::srv::rmw::ExecuteCircle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        circle_params: super::msg::CircleMessage::into_rmw_message(std::borrow::Cow::Owned(msg.circle_params)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        circle_params: super::msg::CircleMessage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.circle_params)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      circle_params: super::msg::CircleMessage::from_rmw_message(msg.circle_params),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__ExecuteCircle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteCircle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,

}



impl Default for ExecuteCircle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteCircle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteCircle_Response {
  type RmwMsg = super::srv::rmw::ExecuteCircle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        estimated_duration: msg.estimated_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      estimated_duration: msg.estimated_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      estimated_duration: msg.estimated_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__JointTrajectory_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Request {
    /// 关节名称列表
    pub joint_names: Vec<std::string::String>,

    /// 轨迹点列表
    pub waypoints: Vec<super::msg::JointWaypoint>,

}



impl Default for JointTrajectory_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::JointTrajectory_Request::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Request {
  type RmwMsg = super::srv::rmw::JointTrajectory_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        waypoints: msg.waypoints
          .into_iter()
          .map(|elem| super::msg::JointWaypoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        waypoints: msg.waypoints
          .iter()
          .map(|elem| super::msg::JointWaypoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      waypoints: msg.waypoints
          .into_iter()
          .map(super::msg::JointWaypoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__JointTrajectory_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Response {
    /// 是否成功
    pub success: bool,

    /// 结果消息
    pub message: std::string::String,

    /// 实际规划的总运动时间
    pub planned_duration: f64,

}



impl Default for JointTrajectory_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::JointTrajectory_Response::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Response {
  type RmwMsg = super::srv::rmw::JointTrajectory_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        planned_duration: msg.planned_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      planned_duration: msg.planned_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      planned_duration: msg.planned_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__ExecutePath_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecutePath_Request {
    /// 左臂路径点（坐标在 base frame 下）
    pub left_arm_path: nav_msgs::msg::Path,

    /// 右臂路径点（双臂模式有效，单臂模式忽略）
    pub right_arm_path: nav_msgs::msg::Path,

    /// 轨迹执行时长（秒），0 表示使用参数服务器默认值
    pub trajectory_duration: f64,

}



impl Default for ExecutePath_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecutePath_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecutePath_Request {
  type RmwMsg = super::srv::rmw::ExecutePath_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.left_arm_path)).into_owned(),
        right_arm_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.right_arm_path)).into_owned(),
        trajectory_duration: msg.trajectory_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_arm_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.left_arm_path)).into_owned(),
        right_arm_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_arm_path)).into_owned(),
      trajectory_duration: msg.trajectory_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_arm_path: nav_msgs::msg::Path::from_rmw_message(msg.left_arm_path),
      right_arm_path: nav_msgs::msg::Path::from_rmw_message(msg.right_arm_path),
      trajectory_duration: msg.trajectory_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__ExecutePath_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecutePath_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// 实际使用的轨迹时长（秒）
    pub estimated_duration: f64,

}



impl Default for ExecutePath_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecutePath_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecutePath_Response {
  type RmwMsg = super::srv::rmw::ExecutePath_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        estimated_duration: msg.estimated_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      estimated_duration: msg.estimated_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      estimated_duration: msg.estimated_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__ExecuteLinear_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_params: super::msg::LinearMessage,

}



impl Default for ExecuteLinear_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteLinear_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Request {
  type RmwMsg = super::srv::rmw::ExecuteLinear_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear_params: super::msg::LinearMessage::into_rmw_message(std::borrow::Cow::Owned(msg.linear_params)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear_params: super::msg::LinearMessage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.linear_params)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      linear_params: super::msg::LinearMessage::from_rmw_message(msg.linear_params),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__ExecuteLinear_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,

}



impl Default for ExecuteLinear_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteLinear_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Response {
  type RmwMsg = super::srv::rmw::ExecuteLinear_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        estimated_duration: msg.estimated_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      estimated_duration: msg.estimated_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      estimated_duration: msg.estimated_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__KinematicsService_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KinematicsService_Request {
    /// ====== 请求部分 ======
    /// 操作类型: "fk" 或 "ik"
    pub operation_type: std::string::String,

    /// 手臂类型: "left", "right", "both"
    pub arm_type: std::string::String,

    /// 求解器类型: "dls", "bfgs", "auto"
    /// dls: 阻尼最小二乘法
    /// bfgs: BFGS优化法
    /// auto: 自动选择（推荐SDK auto，失败后回退）
    /// 默认 "auto"
    pub solver_type: std::string::String,

    /// 关节角度 (用于FK，或作为IK的初始猜测)
    /// 对于单臂: 7个关节
    /// 对于双臂: 14个关节 (左臂7个 + 右臂7个)
    pub joint_angles: Vec<f64>,

    /// 目标位姿 (用于IK)
    /// 对于单臂: 1个位姿
    /// 对于双臂: 2个位姿 (左臂和右臂)
    pub target_poses: Vec<geometry_msgs::msg::Pose>,

    /// IK参数
    /// 最大迭代次数 (默认: 100)
    pub max_iterations: i32,

    /// 容差 (默认: 1e-6)
    pub tolerance: f64,

    /// DLS阻尼系数 (默认: 0.01)
    pub dls_damping: f64,

    /// 是否启用随机重启 (默认: false)
    pub enable_random_restart: bool,

}



impl Default for KinematicsService_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::KinematicsService_Request::default())
  }
}

impl rosidl_runtime_rs::Message for KinematicsService_Request {
  type RmwMsg = super::srv::rmw::KinematicsService_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        operation_type: msg.operation_type.as_str().into(),
        arm_type: msg.arm_type.as_str().into(),
        solver_type: msg.solver_type.as_str().into(),
        joint_angles: msg.joint_angles.as_slice().into(),
        target_poses: msg.target_poses
          .into_iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        max_iterations: msg.max_iterations,
        tolerance: msg.tolerance,
        dls_damping: msg.dls_damping,
        enable_random_restart: msg.enable_random_restart,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        operation_type: msg.operation_type.as_str().into(),
        arm_type: msg.arm_type.as_str().into(),
        solver_type: msg.solver_type.as_str().into(),
        joint_angles: msg.joint_angles.as_slice().into(),
        target_poses: msg.target_poses
          .iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      max_iterations: msg.max_iterations,
      tolerance: msg.tolerance,
      dls_damping: msg.dls_damping,
      enable_random_restart: msg.enable_random_restart,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      operation_type: msg.operation_type.to_string(),
      arm_type: msg.arm_type.to_string(),
      solver_type: msg.solver_type.to_string(),
      joint_angles: msg.joint_angles.into(),
      target_poses: msg.target_poses
          .into_iter()
          .map(geometry_msgs::msg::Pose::from_rmw_message)
          .collect(),
      max_iterations: msg.max_iterations,
      tolerance: msg.tolerance,
      dls_damping: msg.dls_damping,
      enable_random_restart: msg.enable_random_restart,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__KinematicsService_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KinematicsService_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// 计算结果
    /// 对于FK: 计算出的位姿 (单臂: 1个, 双臂: 2个)
    /// 对于IK: 计算出的关节角度
    pub result_poses: Vec<geometry_msgs::msg::Pose>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_joint_angles: Vec<f64>,

    /// 求解器信息
    /// 实际使用的求解器
    pub used_solver: std::string::String,

    /// 迭代次数
    pub iterations: i32,

    /// 最终误差
    pub final_error: f64,

    /// 计算耗时 (毫秒)
    pub computation_time_ms: f64,

    /// 是否超出工作空间
    pub is_out_of_range: bool,

    /// bool[] is_degenerate      # 各关节是否奇异（仅SDK）
    /// bool is_joint_exceeded    # 是否超出限位（仅SDK）
    ///  附加信息（如SDK返回的详细信息）
    pub additional_info: std::string::String,

}



impl Default for KinematicsService_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::KinematicsService_Response::default())
  }
}

impl rosidl_runtime_rs::Message for KinematicsService_Response {
  type RmwMsg = super::srv::rmw::KinematicsService_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        result_poses: msg.result_poses
          .into_iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        result_joint_angles: msg.result_joint_angles.as_slice().into(),
        used_solver: msg.used_solver.as_str().into(),
        iterations: msg.iterations,
        final_error: msg.final_error,
        computation_time_ms: msg.computation_time_ms,
        is_out_of_range: msg.is_out_of_range,
        additional_info: msg.additional_info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        result_poses: msg.result_poses
          .iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        result_joint_angles: msg.result_joint_angles.as_slice().into(),
        used_solver: msg.used_solver.as_str().into(),
      iterations: msg.iterations,
      final_error: msg.final_error,
      computation_time_ms: msg.computation_time_ms,
      is_out_of_range: msg.is_out_of_range,
        additional_info: msg.additional_info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      result_poses: msg.result_poses
          .into_iter()
          .map(geometry_msgs::msg::Pose::from_rmw_message)
          .collect(),
      result_joint_angles: msg.result_joint_angles.into(),
      used_solver: msg.used_solver.to_string(),
      iterations: msg.iterations,
      final_error: msg.final_error,
      computation_time_ms: msg.computation_time_ms,
      is_out_of_range: msg.is_out_of_range,
      additional_info: msg.additional_info.to_string(),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__MovecUseIK_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub circle_params: super::msg::CircleMessage,

}



impl Default for MovecUseIK_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MovecUseIK_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Request {
  type RmwMsg = super::srv::rmw::MovecUseIK_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        circle_params: super::msg::CircleMessage::into_rmw_message(std::borrow::Cow::Owned(msg.circle_params)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        circle_params: super::msg::CircleMessage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.circle_params)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      circle_params: super::msg::CircleMessage::from_rmw_message(msg.circle_params),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__srv__MovecUseIK_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,

}



impl Default for MovecUseIK_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MovecUseIK_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Response {
  type RmwMsg = super::srv::rmw::MovecUseIK_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        estimated_duration: msg.estimated_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      estimated_duration: msg.estimated_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      estimated_duration: msg.estimated_duration,
    }
  }
}






#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__ExecuteCircle() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecuteCircle
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteCircle;

impl rosidl_runtime_rs::Service for ExecuteCircle {
    type Request = ExecuteCircle_Request;
    type Response = ExecuteCircle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__ExecuteCircle() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__JointTrajectory() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__srv__JointTrajectory
#[allow(missing_docs, non_camel_case_types)]
pub struct JointTrajectory;

impl rosidl_runtime_rs::Service for JointTrajectory {
    type Request = JointTrajectory_Request;
    type Response = JointTrajectory_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__JointTrajectory() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__ExecutePath() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecutePath
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecutePath;

impl rosidl_runtime_rs::Service for ExecutePath {
    type Request = ExecutePath_Request;
    type Response = ExecutePath_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__ExecutePath() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__ExecuteLinear() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecuteLinear
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteLinear;

impl rosidl_runtime_rs::Service for ExecuteLinear {
    type Request = ExecuteLinear_Request;
    type Response = ExecuteLinear_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__ExecuteLinear() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__KinematicsService() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__srv__KinematicsService
#[allow(missing_docs, non_camel_case_types)]
pub struct KinematicsService;

impl rosidl_runtime_rs::Service for KinematicsService {
    type Request = KinematicsService_Request;
    type Response = KinematicsService_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__KinematicsService() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__MovecUseIK() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__srv__MovecUseIK
#[allow(missing_docs, non_camel_case_types)]
pub struct MovecUseIK;

impl rosidl_runtime_rs::Service for MovecUseIK {
    type Request = MovecUseIK_Request;
    type Response = MovecUseIK_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__srv__MovecUseIK() }
    }
}


