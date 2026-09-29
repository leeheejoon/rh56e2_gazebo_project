// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:action/WaistLiftingPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/action/waist_lifting_pose.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_Goal_phi
{
public:
  explicit Init_WaistLiftingPose_Goal_phi(::arms_ros2_control_msgs::action::WaistLiftingPose_Goal & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Goal phi(::arms_ros2_control_msgs::action::WaistLiftingPose_Goal::_phi_type arg)
  {
    msg_.phi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Goal msg_;
};

class Init_WaistLiftingPose_Goal_z
{
public:
  explicit Init_WaistLiftingPose_Goal_z(::arms_ros2_control_msgs::action::WaistLiftingPose_Goal & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_Goal_phi z(::arms_ros2_control_msgs::action::WaistLiftingPose_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_WaistLiftingPose_Goal_phi(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Goal msg_;
};

class Init_WaistLiftingPose_Goal_x
{
public:
  explicit Init_WaistLiftingPose_Goal_x(::arms_ros2_control_msgs::action::WaistLiftingPose_Goal & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_Goal_z x(::arms_ros2_control_msgs::action::WaistLiftingPose_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_WaistLiftingPose_Goal_z(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Goal msg_;
};

class Init_WaistLiftingPose_Goal_mode
{
public:
  Init_WaistLiftingPose_Goal_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_Goal_x mode(::arms_ros2_control_msgs::action::WaistLiftingPose_Goal::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_WaistLiftingPose_Goal_x(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_Goal>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_Goal_mode();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_Result_error_code
{
public:
  explicit Init_WaistLiftingPose_Result_error_code(::arms_ros2_control_msgs::action::WaistLiftingPose_Result & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result error_code(::arms_ros2_control_msgs::action::WaistLiftingPose_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result msg_;
};

class Init_WaistLiftingPose_Result_message
{
public:
  explicit Init_WaistLiftingPose_Result_message(::arms_ros2_control_msgs::action::WaistLiftingPose_Result & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_Result_error_code message(::arms_ros2_control_msgs::action::WaistLiftingPose_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_WaistLiftingPose_Result_error_code(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result msg_;
};

class Init_WaistLiftingPose_Result_planned_phi
{
public:
  explicit Init_WaistLiftingPose_Result_planned_phi(::arms_ros2_control_msgs::action::WaistLiftingPose_Result & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_Result_message planned_phi(::arms_ros2_control_msgs::action::WaistLiftingPose_Result::_planned_phi_type arg)
  {
    msg_.planned_phi = std::move(arg);
    return Init_WaistLiftingPose_Result_message(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result msg_;
};

class Init_WaistLiftingPose_Result_planned_z
{
public:
  explicit Init_WaistLiftingPose_Result_planned_z(::arms_ros2_control_msgs::action::WaistLiftingPose_Result & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_Result_planned_phi planned_z(::arms_ros2_control_msgs::action::WaistLiftingPose_Result::_planned_z_type arg)
  {
    msg_.planned_z = std::move(arg);
    return Init_WaistLiftingPose_Result_planned_phi(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result msg_;
};

class Init_WaistLiftingPose_Result_planned_x
{
public:
  explicit Init_WaistLiftingPose_Result_planned_x(::arms_ros2_control_msgs::action::WaistLiftingPose_Result & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_Result_planned_z planned_x(::arms_ros2_control_msgs::action::WaistLiftingPose_Result::_planned_x_type arg)
  {
    msg_.planned_x = std::move(arg);
    return Init_WaistLiftingPose_Result_planned_z(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result msg_;
};

class Init_WaistLiftingPose_Result_success
{
public:
  explicit Init_WaistLiftingPose_Result_success(::arms_ros2_control_msgs::action::WaistLiftingPose_Result & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_Result_planned_x success(::arms_ros2_control_msgs::action::WaistLiftingPose_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_WaistLiftingPose_Result_planned_x(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result msg_;
};

class Init_WaistLiftingPose_Result_reachable
{
public:
  Init_WaistLiftingPose_Result_reachable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_Result_success reachable(::arms_ros2_control_msgs::action::WaistLiftingPose_Result::_reachable_type arg)
  {
    msg_.reachable = std::move(arg);
    return Init_WaistLiftingPose_Result_success(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_Result>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_Result_reachable();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_Feedback_progress
{
public:
  Init_WaistLiftingPose_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Feedback progress(::arms_ros2_control_msgs::action::WaistLiftingPose_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_Feedback>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_Feedback_progress();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_SendGoal_Request_goal
{
public:
  explicit Init_WaistLiftingPose_SendGoal_Request_goal(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request goal(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request msg_;
};

class Init_WaistLiftingPose_SendGoal_Request_goal_id
{
public:
  Init_WaistLiftingPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_SendGoal_Request_goal goal_id(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WaistLiftingPose_SendGoal_Request_goal(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_SendGoal_Request_goal_id();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_SendGoal_Response_stamp
{
public:
  explicit Init_WaistLiftingPose_SendGoal_Response_stamp(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response stamp(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response msg_;
};

class Init_WaistLiftingPose_SendGoal_Response_accepted
{
public:
  Init_WaistLiftingPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_SendGoal_Response_stamp accepted(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_WaistLiftingPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_SendGoal_Response_accepted();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_SendGoal_Event_response
{
public:
  explicit Init_WaistLiftingPose_SendGoal_Event_response(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event response(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event msg_;
};

class Init_WaistLiftingPose_SendGoal_Event_request
{
public:
  explicit Init_WaistLiftingPose_SendGoal_Event_request(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_SendGoal_Event_response request(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_WaistLiftingPose_SendGoal_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event msg_;
};

class Init_WaistLiftingPose_SendGoal_Event_info
{
public:
  Init_WaistLiftingPose_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_SendGoal_Event_request info(::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_WaistLiftingPose_SendGoal_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_SendGoal_Event_info();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_GetResult_Request_goal_id
{
public:
  Init_WaistLiftingPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request goal_id(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_GetResult_Request_goal_id();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_GetResult_Response_result
{
public:
  explicit Init_WaistLiftingPose_GetResult_Response_result(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response result(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response msg_;
};

class Init_WaistLiftingPose_GetResult_Response_status
{
public:
  Init_WaistLiftingPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_GetResult_Response_result status(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WaistLiftingPose_GetResult_Response_result(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_GetResult_Response_status();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_GetResult_Event_response
{
public:
  explicit Init_WaistLiftingPose_GetResult_Event_response(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event response(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event msg_;
};

class Init_WaistLiftingPose_GetResult_Event_request
{
public:
  explicit Init_WaistLiftingPose_GetResult_Event_request(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_WaistLiftingPose_GetResult_Event_response request(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_WaistLiftingPose_GetResult_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event msg_;
};

class Init_WaistLiftingPose_GetResult_Event_info
{
public:
  Init_WaistLiftingPose_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_GetResult_Event_request info(::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_WaistLiftingPose_GetResult_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_GetResult_Event_info();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_WaistLiftingPose_FeedbackMessage_feedback
{
public:
  explicit Init_WaistLiftingPose_FeedbackMessage_feedback(::arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage feedback(::arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage msg_;
};

class Init_WaistLiftingPose_FeedbackMessage_goal_id
{
public:
  Init_WaistLiftingPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaistLiftingPose_FeedbackMessage_feedback goal_id(::arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WaistLiftingPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage>()
{
  return arms_ros2_control_msgs::action::builder::Init_WaistLiftingPose_FeedbackMessage_goal_id();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__BUILDER_HPP_
