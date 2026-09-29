#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to arms_ros2_control_msgs__msg__Inputs
/// control input message

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Inputs {
    /// position
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,

    /// rotation
    pub roll: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,

    /// command target, left(1) or right arm(2)
    pub target: i32,

    /// hand/gripper: nan=no command; 0=close / 1=open (target_command); else 0~1 open ratio (target_percent)
    pub hand_command: f32,

}



impl Default for Inputs {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Inputs::default())
  }
}

impl rosidl_runtime_rs::Message for Inputs {
  type RmwMsg = super::msg::rmw::Inputs;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        target: msg.target,
        hand_command: msg.hand_command,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      target: msg.target,
      hand_command: msg.hand_command,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      target: msg.target,
      hand_command: msg.hand_command,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__msg__CircleMessage
/// circle_trajectory.msg
/// 圆形轨迹消息定义

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CircleMessage {
    /// ====== 方法1：三点法定义圆弧 ======
    /// 需要提供3个点：起点、中间点、终点
    /// 其中起点通常由当前位置确定，这里只需提供中间点和终点
    /// 圆弧中间点
    pub midpoint: geometry_msgs::msg::Pose,

    /// 圆弧终点
    pub endpoint: geometry_msgs::msg::Pose,

    /// 双臂模式下右臂圆弧中间点
    pub right_midpoint: geometry_msgs::msg::Pose,

    /// 双臂模式下右臂圆弧终点
    pub right_endpoint: geometry_msgs::msg::Pose,

    /// ====== 方法2：参数法定义圆弧 ======
    /// 直接输入圆弧几何参数
    /// 圆心坐标
    pub center: geometry_msgs::msg::Point,

    /// 旋转轴（单位向量）
    pub axis: geometry_msgs::msg::Vector3,

    /// 旋转角度（弧度）
    pub rotate_angle: f64,

    /// 双臂模式下右臂圆心坐标
    pub right_center: geometry_msgs::msg::Point,

    /// 双臂模式下右臂旋转轴（单位向量）
    pub right_axis: geometry_msgs::msg::Vector3,

    /// 双臂模式下右臂旋转角度（弧度）
    pub right_rotate_angle: f64,

    /// ====== 运动参数 ======
    /// 线性运动约束（单位：m/s, m/s², m/s³）
    pub max_linear_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_linear_acceleration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_linear_jerk: f64,

    /// 角运动约束（单位：rad/s, rad/s², rad/s³）
    pub max_angular_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_angular_acceleration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_angular_jerk: f64,

    /// 时间模式定义运动时间
    pub duration: f64,

    /// ====== 配置选项 ======
    /// true:使用三点法; false:使用参数法
    pub use_three_point_method: bool,

    /// true:球面插值; false:线性插值
    pub use_slerp_for_orientation: bool,

    /// true 时间模式；false：参数约束
    pub time_mode: bool,

    /// 坐标系id
    pub frame_id: std::string::String,

    /// 'left'左臂，'right'右臂，'both'双臂
    pub arm_name: std::string::String,

    /// 'BFGS','DLS','AUTO','SDK'
    pub ik_type: std::string::String,

}



impl Default for CircleMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CircleMessage::default())
  }
}

impl rosidl_runtime_rs::Message for CircleMessage {
  type RmwMsg = super::msg::rmw::CircleMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        midpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.midpoint)).into_owned(),
        endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.endpoint)).into_owned(),
        right_midpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.right_midpoint)).into_owned(),
        right_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.right_endpoint)).into_owned(),
        center: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.center)).into_owned(),
        axis: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.axis)).into_owned(),
        rotate_angle: msg.rotate_angle,
        right_center: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.right_center)).into_owned(),
        right_axis: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.right_axis)).into_owned(),
        right_rotate_angle: msg.right_rotate_angle,
        max_linear_velocity: msg.max_linear_velocity,
        max_linear_acceleration: msg.max_linear_acceleration,
        max_linear_jerk: msg.max_linear_jerk,
        max_angular_velocity: msg.max_angular_velocity,
        max_angular_acceleration: msg.max_angular_acceleration,
        max_angular_jerk: msg.max_angular_jerk,
        duration: msg.duration,
        use_three_point_method: msg.use_three_point_method,
        use_slerp_for_orientation: msg.use_slerp_for_orientation,
        time_mode: msg.time_mode,
        frame_id: msg.frame_id.as_str().into(),
        arm_name: msg.arm_name.as_str().into(),
        ik_type: msg.ik_type.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        midpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.midpoint)).into_owned(),
        endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.endpoint)).into_owned(),
        right_midpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_midpoint)).into_owned(),
        right_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_endpoint)).into_owned(),
        center: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.center)).into_owned(),
        axis: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.axis)).into_owned(),
      rotate_angle: msg.rotate_angle,
        right_center: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_center)).into_owned(),
        right_axis: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_axis)).into_owned(),
      right_rotate_angle: msg.right_rotate_angle,
      max_linear_velocity: msg.max_linear_velocity,
      max_linear_acceleration: msg.max_linear_acceleration,
      max_linear_jerk: msg.max_linear_jerk,
      max_angular_velocity: msg.max_angular_velocity,
      max_angular_acceleration: msg.max_angular_acceleration,
      max_angular_jerk: msg.max_angular_jerk,
      duration: msg.duration,
      use_three_point_method: msg.use_three_point_method,
      use_slerp_for_orientation: msg.use_slerp_for_orientation,
      time_mode: msg.time_mode,
        frame_id: msg.frame_id.as_str().into(),
        arm_name: msg.arm_name.as_str().into(),
        ik_type: msg.ik_type.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      midpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.midpoint),
      endpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.endpoint),
      right_midpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.right_midpoint),
      right_endpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.right_endpoint),
      center: geometry_msgs::msg::Point::from_rmw_message(msg.center),
      axis: geometry_msgs::msg::Vector3::from_rmw_message(msg.axis),
      rotate_angle: msg.rotate_angle,
      right_center: geometry_msgs::msg::Point::from_rmw_message(msg.right_center),
      right_axis: geometry_msgs::msg::Vector3::from_rmw_message(msg.right_axis),
      right_rotate_angle: msg.right_rotate_angle,
      max_linear_velocity: msg.max_linear_velocity,
      max_linear_acceleration: msg.max_linear_acceleration,
      max_linear_jerk: msg.max_linear_jerk,
      max_angular_velocity: msg.max_angular_velocity,
      max_angular_acceleration: msg.max_angular_acceleration,
      max_angular_jerk: msg.max_angular_jerk,
      duration: msg.duration,
      use_three_point_method: msg.use_three_point_method,
      use_slerp_for_orientation: msg.use_slerp_for_orientation,
      time_mode: msg.time_mode,
      frame_id: msg.frame_id.to_string(),
      arm_name: msg.arm_name.to_string(),
      ik_type: msg.ik_type.to_string(),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__msg__JointWaypoint
/// TrajectoryWaypoint.msg
/// 关节路点信息

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointWaypoint {
    /// 目标关节位置（movej）或关节速度(speedj)
    ///  关节位置
    pub position: Vec<f64>,

    /// 关节速度
    pub velocity: Vec<f64>,

    /// 转接比例百分比（0-1），用于多点轨迹的平滑转接
    pub blend_ratio_percent: f64,

    /// 规划的参数
    pub max_velocity: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_acceleration: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_jerk: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_time: f64,

}



impl Default for JointWaypoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointWaypoint::default())
  }
}

impl rosidl_runtime_rs::Message for JointWaypoint {
  type RmwMsg = super::msg::rmw::JointWaypoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position.as_slice().into(),
        velocity: msg.velocity.as_slice().into(),
        blend_ratio_percent: msg.blend_ratio_percent,
        max_velocity: msg.max_velocity.as_slice().into(),
        max_acceleration: msg.max_acceleration.as_slice().into(),
        max_jerk: msg.max_jerk.as_slice().into(),
        time_mode: msg.time_mode,
        total_time: msg.total_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position.as_slice().into(),
        velocity: msg.velocity.as_slice().into(),
      blend_ratio_percent: msg.blend_ratio_percent,
        max_velocity: msg.max_velocity.as_slice().into(),
        max_acceleration: msg.max_acceleration.as_slice().into(),
        max_jerk: msg.max_jerk.as_slice().into(),
      time_mode: msg.time_mode,
      total_time: msg.total_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position.into(),
      velocity: msg.velocity.into(),
      blend_ratio_percent: msg.blend_ratio_percent,
      max_velocity: msg.max_velocity.into(),
      max_acceleration: msg.max_acceleration.into(),
      max_jerk: msg.max_jerk.into(),
      time_mode: msg.time_mode,
      total_time: msg.total_time,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__msg__LinearMessage
/// linear_trajectory.msg
/// 直线轨迹消息定义

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMessage {
    /// ====== 直线终点 ======
    /// 直线终点
    pub endpoint: geometry_msgs::msg::Pose,

    /// 双臂模式下右臂直线终点
    pub right_endpoint: geometry_msgs::msg::Pose,

    /// ====== 运动参数 ======
    /// 线性运动约束（单位：m/s, m/s², m/s³）
    pub max_linear_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_linear_acceleration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_linear_jerk: f64,

    /// 角运动约束（单位：rad/s, rad/s², rad/s³）
    pub max_angular_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_angular_acceleration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_angular_jerk: f64,

    /// 时间模式定义运动时间
    pub duration: f64,

    /// ====== 配置选项 ======
    /// true 时间模式；false：参数约束
    pub time_mode: bool,

    /// 坐标系id
    pub frame_id: std::string::String,

    /// 要发哪个手，"left"、"right"或者"both"
    pub arm_name: std::string::String,

    /// 'BFGS','DLS','AUTO'
    pub ik_type: std::string::String,

}



impl Default for LinearMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LinearMessage::default())
  }
}

impl rosidl_runtime_rs::Message for LinearMessage {
  type RmwMsg = super::msg::rmw::LinearMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.endpoint)).into_owned(),
        right_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.right_endpoint)).into_owned(),
        max_linear_velocity: msg.max_linear_velocity,
        max_linear_acceleration: msg.max_linear_acceleration,
        max_linear_jerk: msg.max_linear_jerk,
        max_angular_velocity: msg.max_angular_velocity,
        max_angular_acceleration: msg.max_angular_acceleration,
        max_angular_jerk: msg.max_angular_jerk,
        duration: msg.duration,
        time_mode: msg.time_mode,
        frame_id: msg.frame_id.as_str().into(),
        arm_name: msg.arm_name.as_str().into(),
        ik_type: msg.ik_type.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.endpoint)).into_owned(),
        right_endpoint: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_endpoint)).into_owned(),
      max_linear_velocity: msg.max_linear_velocity,
      max_linear_acceleration: msg.max_linear_acceleration,
      max_linear_jerk: msg.max_linear_jerk,
      max_angular_velocity: msg.max_angular_velocity,
      max_angular_acceleration: msg.max_angular_acceleration,
      max_angular_jerk: msg.max_angular_jerk,
      duration: msg.duration,
      time_mode: msg.time_mode,
        frame_id: msg.frame_id.as_str().into(),
        arm_name: msg.arm_name.as_str().into(),
        ik_type: msg.ik_type.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      endpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.endpoint),
      right_endpoint: geometry_msgs::msg::Pose::from_rmw_message(msg.right_endpoint),
      max_linear_velocity: msg.max_linear_velocity,
      max_linear_acceleration: msg.max_linear_acceleration,
      max_linear_jerk: msg.max_linear_jerk,
      max_angular_velocity: msg.max_angular_velocity,
      max_angular_acceleration: msg.max_angular_acceleration,
      max_angular_jerk: msg.max_angular_jerk,
      duration: msg.duration,
      time_mode: msg.time_mode,
      frame_id: msg.frame_id.to_string(),
      arm_name: msg.arm_name.to_string(),
      ik_type: msg.ik_type.to_string(),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__msg__WbcCapability
/// WbcCapability.msg
/// ocs2_wbc_controller约束功能启用信息

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WbcCapability {

    // This member is not documented.
    #[allow(missing_docs)]
    pub has_mobile_base: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_body_relative_constraint: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_waist_lock: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_head_coupling: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_custom_joint_lock: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_bimanual_coupling: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub body_tracking_ee_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub head_tracking_ee_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_home_joint_reference: bool,

    /// Configured ability to gaze at the midpoint of both end effectors.
    pub head_midpoint_gaze_enabled: bool,

}



impl Default for WbcCapability {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WbcCapability::default())
  }
}

impl rosidl_runtime_rs::Message for WbcCapability {
  type RmwMsg = super::msg::rmw::WbcCapability;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        has_mobile_base: msg.has_mobile_base,
        has_body_relative_constraint: msg.has_body_relative_constraint,
        has_waist_lock: msg.has_waist_lock,
        has_head_coupling: msg.has_head_coupling,
        has_custom_joint_lock: msg.has_custom_joint_lock,
        has_bimanual_coupling: msg.has_bimanual_coupling,
        body_tracking_ee_enabled: msg.body_tracking_ee_enabled,
        head_tracking_ee_enabled: msg.head_tracking_ee_enabled,
        has_home_joint_reference: msg.has_home_joint_reference,
        head_midpoint_gaze_enabled: msg.head_midpoint_gaze_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      has_mobile_base: msg.has_mobile_base,
      has_body_relative_constraint: msg.has_body_relative_constraint,
      has_waist_lock: msg.has_waist_lock,
      has_head_coupling: msg.has_head_coupling,
      has_custom_joint_lock: msg.has_custom_joint_lock,
      has_bimanual_coupling: msg.has_bimanual_coupling,
      body_tracking_ee_enabled: msg.body_tracking_ee_enabled,
      head_tracking_ee_enabled: msg.head_tracking_ee_enabled,
      has_home_joint_reference: msg.has_home_joint_reference,
      head_midpoint_gaze_enabled: msg.head_midpoint_gaze_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      has_mobile_base: msg.has_mobile_base,
      has_body_relative_constraint: msg.has_body_relative_constraint,
      has_waist_lock: msg.has_waist_lock,
      has_head_coupling: msg.has_head_coupling,
      has_custom_joint_lock: msg.has_custom_joint_lock,
      has_bimanual_coupling: msg.has_bimanual_coupling,
      body_tracking_ee_enabled: msg.body_tracking_ee_enabled,
      head_tracking_ee_enabled: msg.head_tracking_ee_enabled,
      has_home_joint_reference: msg.has_home_joint_reference,
      head_midpoint_gaze_enabled: msg.head_midpoint_gaze_enabled,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__msg__WbcCurrentState
/// base

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WbcCurrentState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub base_state: u8,

    /// Selected body mode; temporarily overridden by the legacy head/waist constraints in HEAD_FORWARD.
    pub body_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bimanual_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_arm_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_arm_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub home_joint_reference_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub head_state: u8,

    /// Task activation, not a guarantee of alignment or reachability. Independent of body_state.
    pub head_midpoint_gaze_active: bool,

}

impl WbcCurrentState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BASE_LOCKED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BASE_UNLOCKED: u8 = 1;

    /// body
    pub const BODY_FREE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BODY_VERTICAL: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BODY_TRACKING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BODY_LOCKED: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BODY_CUSTOM_LOCKED: u8 = 5;

    /// bimanual
    pub const BIMANUAL_INDEPENDENT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BIMANUAL_COUPLED: u8 = 1;

    /// arm
    pub const ARM_DISABLED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARM_ENABLED: u8 = 1;

    /// Independent head task.
    pub const HEAD_DISABLED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEAD_TRACKING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEAD_GAZE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEAD_FORWARD: u8 = 3;

}


impl Default for WbcCurrentState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WbcCurrentState::default())
  }
}

impl rosidl_runtime_rs::Message for WbcCurrentState {
  type RmwMsg = super::msg::rmw::WbcCurrentState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        base_state: msg.base_state,
        body_state: msg.body_state,
        bimanual_state: msg.bimanual_state,
        left_arm_state: msg.left_arm_state,
        right_arm_state: msg.right_arm_state,
        home_joint_reference_enabled: msg.home_joint_reference_enabled,
        head_state: msg.head_state,
        head_midpoint_gaze_active: msg.head_midpoint_gaze_active,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      base_state: msg.base_state,
      body_state: msg.body_state,
      bimanual_state: msg.bimanual_state,
      left_arm_state: msg.left_arm_state,
      right_arm_state: msg.right_arm_state,
      home_joint_reference_enabled: msg.home_joint_reference_enabled,
      head_state: msg.head_state,
      head_midpoint_gaze_active: msg.head_midpoint_gaze_active,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      base_state: msg.base_state,
      body_state: msg.body_state,
      bimanual_state: msg.bimanual_state,
      left_arm_state: msg.left_arm_state,
      right_arm_state: msg.right_arm_state,
      home_joint_reference_enabled: msg.home_joint_reference_enabled,
      head_state: msg.head_state,
      head_midpoint_gaze_active: msg.head_midpoint_gaze_active,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__msg__TeleopMode
/// control mode

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

    /// true when teleop commands are active (joystick must enable; keyboard always true)
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mirror_movement: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_level: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_scale: f32,

}

impl TeleopMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_ARM: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTROL_CHASSIS: u8 = 1;

}


impl Default for TeleopMode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TeleopMode::default())
  }
}

impl rosidl_runtime_rs::Message for TeleopMode {
  type RmwMsg = super::msg::rmw::TeleopMode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        active: msg.active,
        control_mode: msg.control_mode,
        mirror_movement: msg.mirror_movement,
        speed_level: msg.speed_level,
        speed_scale: msg.speed_scale,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      active: msg.active,
      control_mode: msg.control_mode,
      mirror_movement: msg.mirror_movement,
      speed_level: msg.speed_level,
      speed_scale: msg.speed_scale,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      active: msg.active,
      control_mode: msg.control_mode,
      mirror_movement: msg.mirror_movement,
      speed_level: msg.speed_level,
      speed_scale: msg.speed_scale,
    }
  }
}


