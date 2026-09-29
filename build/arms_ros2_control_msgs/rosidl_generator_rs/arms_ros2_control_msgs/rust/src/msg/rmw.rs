#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__Inputs() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__msg__Inputs__init(msg: *mut Inputs) -> bool;
    fn arms_ros2_control_msgs__msg__Inputs__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Inputs>, size: usize) -> bool;
    fn arms_ros2_control_msgs__msg__Inputs__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Inputs>);
    fn arms_ros2_control_msgs__msg__Inputs__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Inputs>, out_seq: *mut rosidl_runtime_rs::Sequence<Inputs>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__msg__Inputs
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// control input message

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__msg__Inputs__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__msg__Inputs__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Inputs {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__Inputs__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__Inputs__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__Inputs__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Inputs {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Inputs where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/msg/Inputs";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__Inputs() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__CircleMessage() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__msg__CircleMessage__init(msg: *mut CircleMessage) -> bool;
    fn arms_ros2_control_msgs__msg__CircleMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CircleMessage>, size: usize) -> bool;
    fn arms_ros2_control_msgs__msg__CircleMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CircleMessage>);
    fn arms_ros2_control_msgs__msg__CircleMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CircleMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CircleMessage>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__msg__CircleMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// circle_trajectory.msg
/// 圆形轨迹消息定义

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CircleMessage {
    /// ====== 方法1：三点法定义圆弧 ======
    /// 需要提供3个点：起点、中间点、终点
    /// 其中起点通常由当前位置确定，这里只需提供中间点和终点
    /// 圆弧中间点
    pub midpoint: geometry_msgs::msg::rmw::Pose,

    /// 圆弧终点
    pub endpoint: geometry_msgs::msg::rmw::Pose,

    /// 双臂模式下右臂圆弧中间点
    pub right_midpoint: geometry_msgs::msg::rmw::Pose,

    /// 双臂模式下右臂圆弧终点
    pub right_endpoint: geometry_msgs::msg::rmw::Pose,

    /// ====== 方法2：参数法定义圆弧 ======
    /// 直接输入圆弧几何参数
    /// 圆心坐标
    pub center: geometry_msgs::msg::rmw::Point,

    /// 旋转轴（单位向量）
    pub axis: geometry_msgs::msg::rmw::Vector3,

    /// 旋转角度（弧度）
    pub rotate_angle: f64,

    /// 双臂模式下右臂圆心坐标
    pub right_center: geometry_msgs::msg::rmw::Point,

    /// 双臂模式下右臂旋转轴（单位向量）
    pub right_axis: geometry_msgs::msg::rmw::Vector3,

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
    pub frame_id: rosidl_runtime_rs::String,

    /// 'left'左臂，'right'右臂，'both'双臂
    pub arm_name: rosidl_runtime_rs::String,

    /// 'BFGS','DLS','AUTO','SDK'
    pub ik_type: rosidl_runtime_rs::String,

}



impl Default for CircleMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__msg__CircleMessage__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__msg__CircleMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CircleMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__CircleMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__CircleMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__CircleMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CircleMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CircleMessage where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/msg/CircleMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__CircleMessage() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__JointWaypoint() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__msg__JointWaypoint__init(msg: *mut JointWaypoint) -> bool;
    fn arms_ros2_control_msgs__msg__JointWaypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointWaypoint>, size: usize) -> bool;
    fn arms_ros2_control_msgs__msg__JointWaypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointWaypoint>);
    fn arms_ros2_control_msgs__msg__JointWaypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointWaypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<JointWaypoint>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__msg__JointWaypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// TrajectoryWaypoint.msg
/// 关节路点信息

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointWaypoint {
    /// 目标关节位置（movej）或关节速度(speedj)
    ///  关节位置
    pub position: rosidl_runtime_rs::Sequence<f64>,

    /// 关节速度
    pub velocity: rosidl_runtime_rs::Sequence<f64>,

    /// 转接比例百分比（0-1），用于多点轨迹的平滑转接
    pub blend_ratio_percent: f64,

    /// 规划的参数
    pub max_velocity: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_acceleration: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_jerk: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_time: f64,

}



impl Default for JointWaypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__msg__JointWaypoint__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__msg__JointWaypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointWaypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__JointWaypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__JointWaypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__JointWaypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointWaypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointWaypoint where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/msg/JointWaypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__JointWaypoint() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__LinearMessage() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__msg__LinearMessage__init(msg: *mut LinearMessage) -> bool;
    fn arms_ros2_control_msgs__msg__LinearMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearMessage>, size: usize) -> bool;
    fn arms_ros2_control_msgs__msg__LinearMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearMessage>);
    fn arms_ros2_control_msgs__msg__LinearMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearMessage>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__msg__LinearMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// linear_trajectory.msg
/// 直线轨迹消息定义

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearMessage {
    /// ====== 直线终点 ======
    /// 直线终点
    pub endpoint: geometry_msgs::msg::rmw::Pose,

    /// 双臂模式下右臂直线终点
    pub right_endpoint: geometry_msgs::msg::rmw::Pose,

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
    pub frame_id: rosidl_runtime_rs::String,

    /// 要发哪个手，"left"、"right"或者"both"
    pub arm_name: rosidl_runtime_rs::String,

    /// 'BFGS','DLS','AUTO'
    pub ik_type: rosidl_runtime_rs::String,

}



impl Default for LinearMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__msg__LinearMessage__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__msg__LinearMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__LinearMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__LinearMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__LinearMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearMessage where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/msg/LinearMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__LinearMessage() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__WbcCapability() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__msg__WbcCapability__init(msg: *mut WbcCapability) -> bool;
    fn arms_ros2_control_msgs__msg__WbcCapability__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WbcCapability>, size: usize) -> bool;
    fn arms_ros2_control_msgs__msg__WbcCapability__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WbcCapability>);
    fn arms_ros2_control_msgs__msg__WbcCapability__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WbcCapability>, out_seq: *mut rosidl_runtime_rs::Sequence<WbcCapability>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__msg__WbcCapability
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// WbcCapability.msg
/// ocs2_wbc_controller约束功能启用信息

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__msg__WbcCapability__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__msg__WbcCapability__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WbcCapability {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__WbcCapability__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__WbcCapability__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__WbcCapability__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WbcCapability {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WbcCapability where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/msg/WbcCapability";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__WbcCapability() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__WbcCurrentState() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__msg__WbcCurrentState__init(msg: *mut WbcCurrentState) -> bool;
    fn arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WbcCurrentState>, size: usize) -> bool;
    fn arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WbcCurrentState>);
    fn arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WbcCurrentState>, out_seq: *mut rosidl_runtime_rs::Sequence<WbcCurrentState>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__msg__WbcCurrentState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// base

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__msg__WbcCurrentState__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__msg__WbcCurrentState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WbcCurrentState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__WbcCurrentState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WbcCurrentState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WbcCurrentState where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/msg/WbcCurrentState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__WbcCurrentState() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__TeleopMode() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__msg__TeleopMode__init(msg: *mut TeleopMode) -> bool;
    fn arms_ros2_control_msgs__msg__TeleopMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleopMode>, size: usize) -> bool;
    fn arms_ros2_control_msgs__msg__TeleopMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleopMode>);
    fn arms_ros2_control_msgs__msg__TeleopMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleopMode>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleopMode>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__msg__TeleopMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// control mode

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__msg__TeleopMode__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__msg__TeleopMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleopMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__TeleopMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__TeleopMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__msg__TeleopMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleopMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleopMode where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/msg/TeleopMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__msg__TeleopMode() }
  }
}


