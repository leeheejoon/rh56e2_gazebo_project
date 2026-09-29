// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:action/JointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/action/joint_trajectory.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/action/detail/joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_Goal_waypoints
{
public:
  explicit Init_JointTrajectory_Goal_waypoints(::arms_ros2_control_msgs::action::JointTrajectory_Goal & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_Goal waypoints(::arms_ros2_control_msgs::action::JointTrajectory_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Goal msg_;
};

class Init_JointTrajectory_Goal_joint_names
{
public:
  Init_JointTrajectory_Goal_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_Goal_waypoints joint_names(::arms_ros2_control_msgs::action::JointTrajectory_Goal::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointTrajectory_Goal_waypoints(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_Goal>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_Goal_joint_names();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_Result_actual_duration
{
public:
  explicit Init_JointTrajectory_Result_actual_duration(::arms_ros2_control_msgs::action::JointTrajectory_Result & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_Result actual_duration(::arms_ros2_control_msgs::action::JointTrajectory_Result::_actual_duration_type arg)
  {
    msg_.actual_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Result msg_;
};

class Init_JointTrajectory_Result_planned_duration
{
public:
  explicit Init_JointTrajectory_Result_planned_duration(::arms_ros2_control_msgs::action::JointTrajectory_Result & msg)
  : msg_(msg)
  {}
  Init_JointTrajectory_Result_actual_duration planned_duration(::arms_ros2_control_msgs::action::JointTrajectory_Result::_planned_duration_type arg)
  {
    msg_.planned_duration = std::move(arg);
    return Init_JointTrajectory_Result_actual_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Result msg_;
};

class Init_JointTrajectory_Result_message
{
public:
  explicit Init_JointTrajectory_Result_message(::arms_ros2_control_msgs::action::JointTrajectory_Result & msg)
  : msg_(msg)
  {}
  Init_JointTrajectory_Result_planned_duration message(::arms_ros2_control_msgs::action::JointTrajectory_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_JointTrajectory_Result_planned_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Result msg_;
};

class Init_JointTrajectory_Result_success
{
public:
  Init_JointTrajectory_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_Result_message success(::arms_ros2_control_msgs::action::JointTrajectory_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_JointTrajectory_Result_message(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_Result>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_Result_success();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_Feedback_remaining_time
{
public:
  explicit Init_JointTrajectory_Feedback_remaining_time(::arms_ros2_control_msgs::action::JointTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_Feedback remaining_time(::arms_ros2_control_msgs::action::JointTrajectory_Feedback::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Feedback msg_;
};

class Init_JointTrajectory_Feedback_elapsed_time
{
public:
  explicit Init_JointTrajectory_Feedback_elapsed_time(::arms_ros2_control_msgs::action::JointTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_JointTrajectory_Feedback_remaining_time elapsed_time(::arms_ros2_control_msgs::action::JointTrajectory_Feedback::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return Init_JointTrajectory_Feedback_remaining_time(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Feedback msg_;
};

class Init_JointTrajectory_Feedback_progress
{
public:
  Init_JointTrajectory_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_Feedback_elapsed_time progress(::arms_ros2_control_msgs::action::JointTrajectory_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_JointTrajectory_Feedback_elapsed_time(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_Feedback>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_Feedback_progress();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_JointTrajectory_SendGoal_Request_goal(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Request goal(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Request msg_;
};

class Init_JointTrajectory_SendGoal_Request_goal_id
{
public:
  Init_JointTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_SendGoal_Request_goal goal_id(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_JointTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Request>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_SendGoal_Request_goal_id();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_JointTrajectory_SendGoal_Response_stamp(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Response stamp(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Response msg_;
};

class Init_JointTrajectory_SendGoal_Response_accepted
{
public:
  Init_JointTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_SendGoal_Response_stamp accepted(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_JointTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Response>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_SendGoal_Response_accepted();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_SendGoal_Event_response
{
public:
  explicit Init_JointTrajectory_SendGoal_Event_response(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event response(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event msg_;
};

class Init_JointTrajectory_SendGoal_Event_request
{
public:
  explicit Init_JointTrajectory_SendGoal_Event_request(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_JointTrajectory_SendGoal_Event_response request(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_JointTrajectory_SendGoal_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event msg_;
};

class Init_JointTrajectory_SendGoal_Event_info
{
public:
  Init_JointTrajectory_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_SendGoal_Event_request info(::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_JointTrajectory_SendGoal_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_SendGoal_Event>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_SendGoal_Event_info();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_GetResult_Request_goal_id
{
public:
  Init_JointTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Request goal_id(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Request>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_GetResult_Request_goal_id();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_GetResult_Response_result
{
public:
  explicit Init_JointTrajectory_GetResult_Response_result(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Response result(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Response msg_;
};

class Init_JointTrajectory_GetResult_Response_status
{
public:
  Init_JointTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_GetResult_Response_result status(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_JointTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Response>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_GetResult_Response_status();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_GetResult_Event_response
{
public:
  explicit Init_JointTrajectory_GetResult_Event_response(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event response(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event msg_;
};

class Init_JointTrajectory_GetResult_Event_request
{
public:
  explicit Init_JointTrajectory_GetResult_Event_request(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_JointTrajectory_GetResult_Event_response request(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_JointTrajectory_GetResult_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event msg_;
};

class Init_JointTrajectory_GetResult_Event_info
{
public:
  Init_JointTrajectory_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_GetResult_Event_request info(::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_JointTrajectory_GetResult_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_GetResult_Event>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_GetResult_Event_info();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_JointTrajectory_FeedbackMessage_feedback(::arms_ros2_control_msgs::action::JointTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::action::JointTrajectory_FeedbackMessage feedback(::arms_ros2_control_msgs::action::JointTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_FeedbackMessage msg_;
};

class Init_JointTrajectory_FeedbackMessage_goal_id
{
public:
  Init_JointTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_FeedbackMessage_feedback goal_id(::arms_ros2_control_msgs::action::JointTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_JointTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::arms_ros2_control_msgs::action::JointTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::action::JointTrajectory_FeedbackMessage>()
{
  return arms_ros2_control_msgs::action::builder::Init_JointTrajectory_FeedbackMessage_goal_id();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
