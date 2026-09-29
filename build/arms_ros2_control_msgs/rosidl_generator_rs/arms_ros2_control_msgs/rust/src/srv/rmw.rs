#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteCircle_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Request__init(msg: *mut ExecuteCircle_Request) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteCircle_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteCircle_Request>);
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteCircle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteCircle_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecuteCircle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteCircle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub circle_params: super::super::msg::rmw::CircleMessage,

}



impl Default for ExecuteCircle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__ExecuteCircle_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__ExecuteCircle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteCircle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteCircle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteCircle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteCircle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteCircle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteCircle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/ExecuteCircle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteCircle_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteCircle_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Response__init(msg: *mut ExecuteCircle_Response) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteCircle_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteCircle_Response>);
    fn arms_ros2_control_msgs__srv__ExecuteCircle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteCircle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteCircle_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecuteCircle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteCircle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,

}



impl Default for ExecuteCircle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__ExecuteCircle_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__ExecuteCircle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteCircle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteCircle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteCircle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteCircle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteCircle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteCircle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/ExecuteCircle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteCircle_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__JointTrajectory_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__JointTrajectory_Request__init(msg: *mut JointTrajectory_Request) -> bool;
    fn arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Request>);
    fn arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__JointTrajectory_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Request {
    /// 关节名称列表
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// 轨迹点列表
    pub waypoints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointWaypoint>,

}



impl Default for JointTrajectory_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__JointTrajectory_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__JointTrajectory_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__JointTrajectory_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/JointTrajectory_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__JointTrajectory_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__JointTrajectory_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__JointTrajectory_Response__init(msg: *mut JointTrajectory_Response) -> bool;
    fn arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Response>);
    fn arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__JointTrajectory_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Response {
    /// 是否成功
    pub success: bool,

    /// 结果消息
    pub message: rosidl_runtime_rs::String,

    /// 实际规划的总运动时间
    pub planned_duration: f64,

}



impl Default for JointTrajectory_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__JointTrajectory_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__JointTrajectory_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__JointTrajectory_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/JointTrajectory_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__JointTrajectory_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecutePath_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__ExecutePath_Request__init(msg: *mut ExecutePath_Request) -> bool;
    fn arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecutePath_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecutePath_Request>);
    fn arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecutePath_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecutePath_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecutePath_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecutePath_Request {
    /// 左臂路径点（坐标在 base frame 下）
    pub left_arm_path: nav_msgs::msg::rmw::Path,

    /// 右臂路径点（双臂模式有效，单臂模式忽略）
    pub right_arm_path: nav_msgs::msg::rmw::Path,

    /// 轨迹执行时长（秒），0 表示使用参数服务器默认值
    pub trajectory_duration: f64,

}



impl Default for ExecutePath_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__ExecutePath_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__ExecutePath_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecutePath_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecutePath_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecutePath_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecutePath_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/ExecutePath_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecutePath_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecutePath_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__ExecutePath_Response__init(msg: *mut ExecutePath_Response) -> bool;
    fn arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecutePath_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecutePath_Response>);
    fn arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecutePath_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecutePath_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecutePath_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecutePath_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// 实际使用的轨迹时长（秒）
    pub estimated_duration: f64,

}



impl Default for ExecutePath_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__ExecutePath_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__ExecutePath_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecutePath_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecutePath_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecutePath_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecutePath_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/ExecutePath_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecutePath_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteLinear_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Request__init(msg: *mut ExecuteLinear_Request) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Request>);
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecuteLinear_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_params: super::super::msg::rmw::LinearMessage,

}



impl Default for ExecuteLinear_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__ExecuteLinear_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__ExecuteLinear_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteLinear_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteLinear_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteLinear_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/ExecuteLinear_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteLinear_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteLinear_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Response__init(msg: *mut ExecuteLinear_Response) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Response>);
    fn arms_ros2_control_msgs__srv__ExecuteLinear_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__ExecuteLinear_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,

}



impl Default for ExecuteLinear_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__ExecuteLinear_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__ExecuteLinear_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteLinear_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteLinear_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__ExecuteLinear_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/ExecuteLinear_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__ExecuteLinear_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__KinematicsService_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__KinematicsService_Request__init(msg: *mut KinematicsService_Request) -> bool;
    fn arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KinematicsService_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KinematicsService_Request>);
    fn arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KinematicsService_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<KinematicsService_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__KinematicsService_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KinematicsService_Request {
    /// ====== 请求部分 ======
    /// 操作类型: "fk" 或 "ik"
    pub operation_type: rosidl_runtime_rs::String,

    /// 手臂类型: "left", "right", "both"
    pub arm_type: rosidl_runtime_rs::String,

    /// 求解器类型: "dls", "bfgs", "auto"
    /// dls: 阻尼最小二乘法
    /// bfgs: BFGS优化法
    /// auto: 自动选择（推荐SDK auto，失败后回退）
    /// 默认 "auto"
    pub solver_type: rosidl_runtime_rs::String,

    /// 关节角度 (用于FK，或作为IK的初始猜测)
    /// 对于单臂: 7个关节
    /// 对于双臂: 14个关节 (左臂7个 + 右臂7个)
    pub joint_angles: rosidl_runtime_rs::Sequence<f64>,

    /// 目标位姿 (用于IK)
    /// 对于单臂: 1个位姿
    /// 对于双臂: 2个位姿 (左臂和右臂)
    pub target_poses: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Pose>,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__KinematicsService_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__KinematicsService_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KinematicsService_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__KinematicsService_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KinematicsService_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KinematicsService_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/KinematicsService_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__KinematicsService_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__KinematicsService_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__KinematicsService_Response__init(msg: *mut KinematicsService_Response) -> bool;
    fn arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KinematicsService_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KinematicsService_Response>);
    fn arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KinematicsService_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<KinematicsService_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__KinematicsService_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KinematicsService_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// 计算结果
    /// 对于FK: 计算出的位姿 (单臂: 1个, 双臂: 2个)
    /// 对于IK: 计算出的关节角度
    pub result_poses: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Pose>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_joint_angles: rosidl_runtime_rs::Sequence<f64>,

    /// 求解器信息
    /// 实际使用的求解器
    pub used_solver: rosidl_runtime_rs::String,

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
    pub additional_info: rosidl_runtime_rs::String,

}



impl Default for KinematicsService_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__KinematicsService_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__KinematicsService_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KinematicsService_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__KinematicsService_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KinematicsService_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KinematicsService_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/KinematicsService_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__KinematicsService_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__MovecUseIK_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__MovecUseIK_Request__init(msg: *mut MovecUseIK_Request) -> bool;
    fn arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Request>);
    fn arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__MovecUseIK_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub circle_params: super::super::msg::rmw::CircleMessage,

}



impl Default for MovecUseIK_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__MovecUseIK_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__MovecUseIK_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__MovecUseIK_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/MovecUseIK_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__MovecUseIK_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__MovecUseIK_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__srv__MovecUseIK_Response__init(msg: *mut MovecUseIK_Response) -> bool;
    fn arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Response>);
    fn arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__srv__MovecUseIK_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,

}



impl Default for MovecUseIK_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__srv__MovecUseIK_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__srv__MovecUseIK_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__srv__MovecUseIK_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/srv/MovecUseIK_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__srv__MovecUseIK_Response() }
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


