// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:srv/JointTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/joint_trajectory.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/srv/detail/joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_JointTrajectory_Request_waypoints
{
public:
  explicit Init_JointTrajectory_Request_waypoints(::arms_ros2_control_msgs::srv::JointTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::JointTrajectory_Request waypoints(::arms_ros2_control_msgs::srv::JointTrajectory_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Request msg_;
};

class Init_JointTrajectory_Request_joint_names
{
public:
  Init_JointTrajectory_Request_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_Request_waypoints joint_names(::arms_ros2_control_msgs::srv::JointTrajectory_Request::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointTrajectory_Request_waypoints(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::JointTrajectory_Request>()
{
  return arms_ros2_control_msgs::srv::builder::Init_JointTrajectory_Request_joint_names();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_JointTrajectory_Response_planned_duration
{
public:
  explicit Init_JointTrajectory_Response_planned_duration(::arms_ros2_control_msgs::srv::JointTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::JointTrajectory_Response planned_duration(::arms_ros2_control_msgs::srv::JointTrajectory_Response::_planned_duration_type arg)
  {
    msg_.planned_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Response msg_;
};

class Init_JointTrajectory_Response_message
{
public:
  explicit Init_JointTrajectory_Response_message(::arms_ros2_control_msgs::srv::JointTrajectory_Response & msg)
  : msg_(msg)
  {}
  Init_JointTrajectory_Response_planned_duration message(::arms_ros2_control_msgs::srv::JointTrajectory_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_JointTrajectory_Response_planned_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Response msg_;
};

class Init_JointTrajectory_Response_success
{
public:
  Init_JointTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_Response_message success(::arms_ros2_control_msgs::srv::JointTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_JointTrajectory_Response_message(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::JointTrajectory_Response>()
{
  return arms_ros2_control_msgs::srv::builder::Init_JointTrajectory_Response_success();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_JointTrajectory_Event_response
{
public:
  explicit Init_JointTrajectory_Event_response(::arms_ros2_control_msgs::srv::JointTrajectory_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::JointTrajectory_Event response(::arms_ros2_control_msgs::srv::JointTrajectory_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Event msg_;
};

class Init_JointTrajectory_Event_request
{
public:
  explicit Init_JointTrajectory_Event_request(::arms_ros2_control_msgs::srv::JointTrajectory_Event & msg)
  : msg_(msg)
  {}
  Init_JointTrajectory_Event_response request(::arms_ros2_control_msgs::srv::JointTrajectory_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_JointTrajectory_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Event msg_;
};

class Init_JointTrajectory_Event_info
{
public:
  Init_JointTrajectory_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_Event_request info(::arms_ros2_control_msgs::srv::JointTrajectory_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_JointTrajectory_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::JointTrajectory_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::JointTrajectory_Event>()
{
  return arms_ros2_control_msgs::srv::builder::Init_JointTrajectory_Event_info();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
