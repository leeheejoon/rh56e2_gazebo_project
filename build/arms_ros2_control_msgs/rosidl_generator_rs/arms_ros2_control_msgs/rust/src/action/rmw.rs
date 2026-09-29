
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_Goal() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_Goal__init(msg: *mut JointTrajectory_Goal) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Goal>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Goal>);
    fn arms_ros2_control_msgs__action__JointTrajectory_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Goal>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointWaypoint>,

}



impl Default for JointTrajectory_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_Goal__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_Goal() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_Result() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_Result__init(msg: *mut JointTrajectory_Result) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Result>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Result>);
    fn arms_ros2_control_msgs__action__JointTrajectory_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Result>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_duration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_duration: f64,

}



impl Default for JointTrajectory_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_Result__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_Result where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_Result() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_Feedback__init(msg: *mut JointTrajectory_Feedback) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Feedback>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Feedback>);
    fn arms_ros2_control_msgs__action__JointTrajectory_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_Feedback>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elapsed_time: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_time: f64,

}



impl Default for JointTrajectory_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_Feedback__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_Feedback() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__init(msg: *mut JointTrajectory_FeedbackMessage) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_FeedbackMessage>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_FeedbackMessage>);
    fn arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_FeedbackMessage>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::JointTrajectory_Feedback,

}



impl Default for JointTrajectory_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_Goal() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_Goal__init(msg: *mut ExecuteLinear_Goal) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Goal>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Goal>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Goal>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_params: super::super::msg::rmw::LinearMessage,

}



impl Default for ExecuteLinear_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_Goal__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_Goal() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_Result() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_Result__init(msg: *mut ExecuteLinear_Result) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Result>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Result>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Result>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_duration: f64,

}



impl Default for ExecuteLinear_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_Result__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_Result where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_Result() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_Feedback__init(msg: *mut ExecuteLinear_Feedback) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Feedback>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Feedback>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_Feedback>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elapsed_time: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_time: f64,

}



impl Default for ExecuteLinear_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_Feedback__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_Feedback() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__init(msg: *mut ExecuteLinear_FeedbackMessage) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_FeedbackMessage>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_FeedbackMessage>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_FeedbackMessage>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteLinear_Feedback,

}



impl Default for ExecuteLinear_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_Goal() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_Goal__init(msg: *mut MovecUseIK_Goal) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Goal>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Goal>);
    fn arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Goal>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub circle_params: super::super::msg::rmw::CircleMessage,

}



impl Default for MovecUseIK_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_Goal__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_Goal() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_Result() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_Result__init(msg: *mut MovecUseIK_Result) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Result>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Result>);
    fn arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Result>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_duration: f64,

}



impl Default for MovecUseIK_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_Result__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_Result where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_Result() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_Feedback__init(msg: *mut MovecUseIK_Feedback) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Feedback>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Feedback>);
    fn arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_Feedback>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elapsed_time: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_time: f64,

}



impl Default for MovecUseIK_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_Feedback__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_Feedback() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__init(msg: *mut MovecUseIK_FeedbackMessage) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_FeedbackMessage>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_FeedbackMessage>);
    fn arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_FeedbackMessage>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MovecUseIK_Feedback,

}



impl Default for MovecUseIK_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_Goal() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init(msg: *mut WaistLiftingPose_Goal) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Goal>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Goal>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Goal>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub phi: f64,

}

impl WaistLiftingPose_Goal {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_ABSOLUTE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_RELATIVE: u8 = 1;

}


impl Default for WaistLiftingPose_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_Goal() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_Result() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Result__init(msg: *mut WaistLiftingPose_Result) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Result>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Result>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Result>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reachable: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_phi: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,

}

impl WaistLiftingPose_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_NONE: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_INVALID_MODE: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_CONTROLLER_NOT_READY: i32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_UNREACHABLE: i32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_RUNTIME_FAILED: i32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_CANCELED: i32 = 5;

}


impl Default for WaistLiftingPose_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_Result__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_Result where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_Result() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init(msg: *mut WaistLiftingPose_Feedback) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Feedback>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Feedback>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_Feedback>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f64,

}



impl Default for WaistLiftingPose_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_Feedback() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__init(msg: *mut WaistLiftingPose_FeedbackMessage) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_FeedbackMessage>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_FeedbackMessage>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_FeedbackMessage>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::WaistLiftingPose_Feedback,

}



impl Default for WaistLiftingPose_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage() }
  }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__init(msg: *mut JointTrajectory_SendGoal_Request) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Request>);
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::JointTrajectory_Goal,

}



impl Default for JointTrajectory_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__init(msg: *mut JointTrajectory_SendGoal_Response) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Response>);
    fn arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_SendGoal_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for JointTrajectory_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__init(msg: *mut JointTrajectory_GetResult_Request) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Request>);
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for JointTrajectory_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__init(msg: *mut JointTrajectory_GetResult_Response) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Response>);
    fn arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectory_GetResult_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::JointTrajectory_Result,

}



impl Default for JointTrajectory_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectory_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectory_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/JointTrajectory_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__init(msg: *mut ExecuteLinear_SendGoal_Request) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Request>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteLinear_Goal,

}



impl Default for ExecuteLinear_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__init(msg: *mut ExecuteLinear_SendGoal_Response) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Response>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_SendGoal_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteLinear_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__init(msg: *mut ExecuteLinear_GetResult_Request) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Request>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteLinear_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__init(msg: *mut ExecuteLinear_GetResult_Response) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Response>);
    fn arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteLinear_GetResult_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteLinear_Result,

}



impl Default for ExecuteLinear_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteLinear_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteLinear_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/ExecuteLinear_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__init(msg: *mut MovecUseIK_SendGoal_Request) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Request>);
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MovecUseIK_Goal,

}



impl Default for MovecUseIK_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__init(msg: *mut MovecUseIK_SendGoal_Response) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Response>);
    fn arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_SendGoal_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MovecUseIK_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__init(msg: *mut MovecUseIK_GetResult_Request) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Request>);
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MovecUseIK_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__init(msg: *mut MovecUseIK_GetResult_Response) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Response>);
    fn arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MovecUseIK_GetResult_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MovecUseIK_Result,

}



impl Default for MovecUseIK_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MovecUseIK_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MovecUseIK_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/MovecUseIK_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__init(msg: *mut WaistLiftingPose_SendGoal_Request) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Request>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::WaistLiftingPose_Goal,

}



impl Default for WaistLiftingPose_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__init(msg: *mut WaistLiftingPose_SendGoal_Response) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Response>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_SendGoal_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for WaistLiftingPose_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__init(msg: *mut WaistLiftingPose_GetResult_Request) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Request>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Request>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Request>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for WaistLiftingPose_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request() }
  }
}


#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "arms_ros2_control_msgs__rosidl_generator_c")]
extern "C" {
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__init(msg: *mut WaistLiftingPose_GetResult_Response) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Response>, size: usize) -> bool;
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Response>);
    fn arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<WaistLiftingPose_GetResult_Response>) -> bool;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::WaistLiftingPose_Result,

}



impl Default for WaistLiftingPose_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaistLiftingPose_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaistLiftingPose_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arms_ros2_control_msgs/action/WaistLiftingPose_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response() }
  }
}






#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct JointTrajectory_SendGoal;

impl rosidl_runtime_rs::Service for JointTrajectory_SendGoal {
    type Request = JointTrajectory_SendGoal_Request;
    type Response = JointTrajectory_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_SendGoal() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct JointTrajectory_GetResult;

impl rosidl_runtime_rs::Service for JointTrajectory_GetResult {
    type Request = JointTrajectory_GetResult_Request;
    type Response = JointTrajectory_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory_GetResult() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteLinear_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteLinear_SendGoal {
    type Request = ExecuteLinear_SendGoal_Request;
    type Response = ExecuteLinear_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteLinear_GetResult;

impl rosidl_runtime_rs::Service for ExecuteLinear_GetResult {
    type Request = ExecuteLinear_GetResult_Request;
    type Response = ExecuteLinear_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear_GetResult() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MovecUseIK_SendGoal;

impl rosidl_runtime_rs::Service for MovecUseIK_SendGoal {
    type Request = MovecUseIK_SendGoal_Request;
    type Response = MovecUseIK_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_SendGoal() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MovecUseIK_GetResult;

impl rosidl_runtime_rs::Service for MovecUseIK_GetResult {
    type Request = MovecUseIK_GetResult_Request;
    type Response = MovecUseIK_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK_GetResult() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct WaistLiftingPose_SendGoal;

impl rosidl_runtime_rs::Service for WaistLiftingPose_SendGoal {
    type Request = WaistLiftingPose_SendGoal_Request;
    type Response = WaistLiftingPose_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal() }
    }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct WaistLiftingPose_GetResult;

impl rosidl_runtime_rs::Service for WaistLiftingPose_GetResult {
    type Request = WaistLiftingPose_GetResult_Request;
    type Response = WaistLiftingPose_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult() }
    }
}


