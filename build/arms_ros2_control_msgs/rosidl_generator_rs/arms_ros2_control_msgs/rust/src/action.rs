
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoints: Vec<super::msg::JointWaypoint>,

}



impl Default for JointTrajectory_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Goal {
  type RmwMsg = super::action::rmw::JointTrajectory_Goal;

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


// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_duration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_duration: f64,

}



impl Default for JointTrajectory_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_Result::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Result {
  type RmwMsg = super::action::rmw::JointTrajectory_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        planned_duration: msg.planned_duration,
        actual_duration: msg.actual_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      planned_duration: msg.planned_duration,
      actual_duration: msg.actual_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      planned_duration: msg.planned_duration,
      actual_duration: msg.actual_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_Feedback {
  type RmwMsg = super::action::rmw::JointTrajectory_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        progress: msg.progress,
        elapsed_time: msg.elapsed_time,
        remaining_time: msg.remaining_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      progress: msg.progress,
      elapsed_time: msg.elapsed_time,
      remaining_time: msg.remaining_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      progress: msg.progress,
      elapsed_time: msg.elapsed_time,
      remaining_time: msg.remaining_time,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::JointTrajectory_Feedback,

}



impl Default for JointTrajectory_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_FeedbackMessage {
  type RmwMsg = super::action::rmw::JointTrajectory_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::JointTrajectory_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::JointTrajectory_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::JointTrajectory_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_params: super::msg::LinearMessage,

}



impl Default for ExecuteLinear_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Goal {
  type RmwMsg = super::action::rmw::ExecuteLinear_Goal;

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


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_duration: f64,

}



impl Default for ExecuteLinear_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Result {
  type RmwMsg = super::action::rmw::ExecuteLinear_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        estimated_duration: msg.estimated_duration,
        actual_duration: msg.actual_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      estimated_duration: msg.estimated_duration,
      actual_duration: msg.actual_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      estimated_duration: msg.estimated_duration,
      actual_duration: msg.actual_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_Feedback {
  type RmwMsg = super::action::rmw::ExecuteLinear_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        progress: msg.progress,
        elapsed_time: msg.elapsed_time,
        remaining_time: msg.remaining_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      progress: msg.progress,
      elapsed_time: msg.elapsed_time,
      remaining_time: msg.remaining_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      progress: msg.progress,
      elapsed_time: msg.elapsed_time,
      remaining_time: msg.remaining_time,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ExecuteLinear_Feedback,

}



impl Default for ExecuteLinear_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_FeedbackMessage {
  type RmwMsg = super::action::rmw::ExecuteLinear_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteLinear_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteLinear_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ExecuteLinear_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub circle_params: super::msg::CircleMessage,

}



impl Default for MovecUseIK_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Goal {
  type RmwMsg = super::action::rmw::MovecUseIK_Goal;

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


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_duration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_duration: f64,

}



impl Default for MovecUseIK_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_Result::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Result {
  type RmwMsg = super::action::rmw::MovecUseIK_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        estimated_duration: msg.estimated_duration,
        actual_duration: msg.actual_duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      estimated_duration: msg.estimated_duration,
      actual_duration: msg.actual_duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      estimated_duration: msg.estimated_duration,
      actual_duration: msg.actual_duration,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_Feedback {
  type RmwMsg = super::action::rmw::MovecUseIK_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        progress: msg.progress,
        elapsed_time: msg.elapsed_time,
        remaining_time: msg.remaining_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      progress: msg.progress,
      elapsed_time: msg.elapsed_time,
      remaining_time: msg.remaining_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      progress: msg.progress,
      elapsed_time: msg.elapsed_time,
      remaining_time: msg.remaining_time,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::MovecUseIK_Feedback,

}



impl Default for MovecUseIK_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_FeedbackMessage {
  type RmwMsg = super::action::rmw::MovecUseIK_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::MovecUseIK_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::MovecUseIK_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::MovecUseIK_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_Goal {
  type RmwMsg = super::action::rmw::WaistLiftingPose_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        x: msg.x,
        z: msg.z,
        phi: msg.phi,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      x: msg.x,
      z: msg.z,
      phi: msg.phi,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      x: msg.x,
      z: msg.z,
      phi: msg.phi,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub message: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_Result::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_Result {
  type RmwMsg = super::action::rmw::WaistLiftingPose_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reachable: msg.reachable,
        success: msg.success,
        planned_x: msg.planned_x,
        planned_z: msg.planned_z,
        planned_phi: msg.planned_phi,
        message: msg.message.as_str().into(),
        error_code: msg.error_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reachable: msg.reachable,
      success: msg.success,
      planned_x: msg.planned_x,
      planned_z: msg.planned_z,
      planned_phi: msg.planned_phi,
        message: msg.message.as_str().into(),
      error_code: msg.error_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reachable: msg.reachable,
      success: msg.success,
      planned_x: msg.planned_x,
      planned_z: msg.planned_z,
      planned_phi: msg.planned_phi,
      message: msg.message.to_string(),
      error_code: msg.error_code,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f64,

}



impl Default for WaistLiftingPose_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_Feedback {
  type RmwMsg = super::action::rmw::WaistLiftingPose_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        progress: msg.progress,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      progress: msg.progress,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      progress: msg.progress,
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::WaistLiftingPose_Feedback,

}



impl Default for WaistLiftingPose_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_FeedbackMessage {
  type RmwMsg = super::action::rmw::WaistLiftingPose_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::WaistLiftingPose_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::WaistLiftingPose_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::WaistLiftingPose_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::JointTrajectory_Goal,

}



impl Default for JointTrajectory_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_SendGoal_Request {
  type RmwMsg = super::action::rmw::JointTrajectory_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::JointTrajectory_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::JointTrajectory_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::JointTrajectory_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for JointTrajectory_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_SendGoal_Response {
  type RmwMsg = super::action::rmw::JointTrajectory_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for JointTrajectory_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_GetResult_Request {
  type RmwMsg = super::action::rmw::JointTrajectory_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__JointTrajectory_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectory_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::JointTrajectory_Result,

}



impl Default for JointTrajectory_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::JointTrajectory_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectory_GetResult_Response {
  type RmwMsg = super::action::rmw::JointTrajectory_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::JointTrajectory_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::JointTrajectory_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::JointTrajectory_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ExecuteLinear_Goal,

}



impl Default for ExecuteLinear_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_SendGoal_Request {
  type RmwMsg = super::action::rmw::ExecuteLinear_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ExecuteLinear_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ExecuteLinear_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ExecuteLinear_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ExecuteLinear_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_SendGoal_Response {
  type RmwMsg = super::action::rmw::ExecuteLinear_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ExecuteLinear_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_GetResult_Request {
  type RmwMsg = super::action::rmw::ExecuteLinear_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteLinear_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ExecuteLinear_Result,

}



impl Default for ExecuteLinear_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteLinear_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteLinear_GetResult_Response {
  type RmwMsg = super::action::rmw::ExecuteLinear_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ExecuteLinear_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ExecuteLinear_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ExecuteLinear_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::MovecUseIK_Goal,

}



impl Default for MovecUseIK_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_SendGoal_Request {
  type RmwMsg = super::action::rmw::MovecUseIK_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::MovecUseIK_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::MovecUseIK_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::MovecUseIK_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for MovecUseIK_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_SendGoal_Response {
  type RmwMsg = super::action::rmw::MovecUseIK_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for MovecUseIK_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_GetResult_Request {
  type RmwMsg = super::action::rmw::MovecUseIK_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__MovecUseIK_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MovecUseIK_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::MovecUseIK_Result,

}



impl Default for MovecUseIK_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MovecUseIK_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MovecUseIK_GetResult_Response {
  type RmwMsg = super::action::rmw::MovecUseIK_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::MovecUseIK_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::MovecUseIK_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::MovecUseIK_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::WaistLiftingPose_Goal,

}



impl Default for WaistLiftingPose_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_SendGoal_Request {
  type RmwMsg = super::action::rmw::WaistLiftingPose_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::WaistLiftingPose_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::WaistLiftingPose_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::WaistLiftingPose_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for WaistLiftingPose_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_SendGoal_Response {
  type RmwMsg = super::action::rmw::WaistLiftingPose_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for WaistLiftingPose_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_GetResult_Request {
  type RmwMsg = super::action::rmw::WaistLiftingPose_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaistLiftingPose_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::WaistLiftingPose_Result,

}



impl Default for WaistLiftingPose_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WaistLiftingPose_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for WaistLiftingPose_GetResult_Response {
  type RmwMsg = super::action::rmw::WaistLiftingPose_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::WaistLiftingPose_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::WaistLiftingPose_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::WaistLiftingPose_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__JointTrajectory
#[allow(missing_docs, non_camel_case_types)]
pub struct JointTrajectory;

impl rosidl_runtime_rs::Action for JointTrajectory {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = JointTrajectory_Goal;

  /// The result message defined in the action definition.
  type Result = JointTrajectory_Result;

  /// The feedback message defined in the action definition.
  type Feedback = JointTrajectory_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::JointTrajectory_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::JointTrajectory_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::JointTrajectory_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__JointTrajectory() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::JointTrajectory_Goal,
  ) -> super::action::rmw::JointTrajectory_SendGoal_Request {
   super::action::rmw::JointTrajectory_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::JointTrajectory_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::JointTrajectory_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::JointTrajectory_SendGoal_Response {
   super::action::rmw::JointTrajectory_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::JointTrajectory_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::JointTrajectory_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::JointTrajectory_Feedback,
  ) -> super::action::rmw::JointTrajectory_FeedbackMessage {
    let mut message = super::action::rmw::JointTrajectory_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::JointTrajectory_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::JointTrajectory_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::JointTrajectory_GetResult_Request {
   super::action::rmw::JointTrajectory_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::JointTrajectory_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::JointTrajectory_Result,
  ) -> super::action::rmw::JointTrajectory_GetResult_Response {
   super::action::rmw::JointTrajectory_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::JointTrajectory_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::JointTrajectory_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__ExecuteLinear
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteLinear;

impl rosidl_runtime_rs::Action for ExecuteLinear {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ExecuteLinear_Goal;

  /// The result message defined in the action definition.
  type Result = ExecuteLinear_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ExecuteLinear_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ExecuteLinear_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ExecuteLinear_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ExecuteLinear_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__ExecuteLinear() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ExecuteLinear_Goal,
  ) -> super::action::rmw::ExecuteLinear_SendGoal_Request {
   super::action::rmw::ExecuteLinear_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ExecuteLinear_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteLinear_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ExecuteLinear_SendGoal_Response {
   super::action::rmw::ExecuteLinear_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ExecuteLinear_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ExecuteLinear_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ExecuteLinear_Feedback,
  ) -> super::action::rmw::ExecuteLinear_FeedbackMessage {
    let mut message = super::action::rmw::ExecuteLinear_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ExecuteLinear_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteLinear_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ExecuteLinear_GetResult_Request {
   super::action::rmw::ExecuteLinear_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ExecuteLinear_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ExecuteLinear_Result,
  ) -> super::action::rmw::ExecuteLinear_GetResult_Response {
   super::action::rmw::ExecuteLinear_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ExecuteLinear_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ExecuteLinear_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__MovecUseIK
#[allow(missing_docs, non_camel_case_types)]
pub struct MovecUseIK;

impl rosidl_runtime_rs::Action for MovecUseIK {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = MovecUseIK_Goal;

  /// The result message defined in the action definition.
  type Result = MovecUseIK_Result;

  /// The feedback message defined in the action definition.
  type Feedback = MovecUseIK_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::MovecUseIK_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::MovecUseIK_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::MovecUseIK_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__MovecUseIK() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::MovecUseIK_Goal,
  ) -> super::action::rmw::MovecUseIK_SendGoal_Request {
   super::action::rmw::MovecUseIK_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::MovecUseIK_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::MovecUseIK_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::MovecUseIK_SendGoal_Response {
   super::action::rmw::MovecUseIK_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::MovecUseIK_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::MovecUseIK_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::MovecUseIK_Feedback,
  ) -> super::action::rmw::MovecUseIK_FeedbackMessage {
    let mut message = super::action::rmw::MovecUseIK_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::MovecUseIK_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::MovecUseIK_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::MovecUseIK_GetResult_Request {
   super::action::rmw::MovecUseIK_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::MovecUseIK_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::MovecUseIK_Result,
  ) -> super::action::rmw::MovecUseIK_GetResult_Response {
   super::action::rmw::MovecUseIK_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::MovecUseIK_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::MovecUseIK_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "arms_ros2_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose() -> *const std::ffi::c_void;
}

// Corresponds to arms_ros2_control_msgs__action__WaistLiftingPose
#[allow(missing_docs, non_camel_case_types)]
pub struct WaistLiftingPose;

impl rosidl_runtime_rs::Action for WaistLiftingPose {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = WaistLiftingPose_Goal;

  /// The result message defined in the action definition.
  type Result = WaistLiftingPose_Result;

  /// The feedback message defined in the action definition.
  type Feedback = WaistLiftingPose_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::WaistLiftingPose_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::WaistLiftingPose_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::WaistLiftingPose_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__arms_ros2_control_msgs__action__WaistLiftingPose() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::WaistLiftingPose_Goal,
  ) -> super::action::rmw::WaistLiftingPose_SendGoal_Request {
   super::action::rmw::WaistLiftingPose_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::WaistLiftingPose_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::WaistLiftingPose_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::WaistLiftingPose_SendGoal_Response {
   super::action::rmw::WaistLiftingPose_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::WaistLiftingPose_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::WaistLiftingPose_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::WaistLiftingPose_Feedback,
  ) -> super::action::rmw::WaistLiftingPose_FeedbackMessage {
    let mut message = super::action::rmw::WaistLiftingPose_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::WaistLiftingPose_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::WaistLiftingPose_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::WaistLiftingPose_GetResult_Request {
   super::action::rmw::WaistLiftingPose_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::WaistLiftingPose_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::WaistLiftingPose_Result,
  ) -> super::action::rmw::WaistLiftingPose_GetResult_Response {
   super::action::rmw::WaistLiftingPose_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::WaistLiftingPose_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::WaistLiftingPose_Result,
  ) {
    (response.status, response.result)
  }
}


