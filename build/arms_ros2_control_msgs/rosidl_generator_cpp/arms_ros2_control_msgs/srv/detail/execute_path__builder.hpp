// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:srv/ExecutePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/execute_path.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/srv/detail/execute_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecutePath_Request_trajectory_duration
{
public:
  explicit Init_ExecutePath_Request_trajectory_duration(::arms_ros2_control_msgs::srv::ExecutePath_Request & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::ExecutePath_Request trajectory_duration(::arms_ros2_control_msgs::srv::ExecutePath_Request::_trajectory_duration_type arg)
  {
    msg_.trajectory_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Request msg_;
};

class Init_ExecutePath_Request_right_arm_path
{
public:
  explicit Init_ExecutePath_Request_right_arm_path(::arms_ros2_control_msgs::srv::ExecutePath_Request & msg)
  : msg_(msg)
  {}
  Init_ExecutePath_Request_trajectory_duration right_arm_path(::arms_ros2_control_msgs::srv::ExecutePath_Request::_right_arm_path_type arg)
  {
    msg_.right_arm_path = std::move(arg);
    return Init_ExecutePath_Request_trajectory_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Request msg_;
};

class Init_ExecutePath_Request_left_arm_path
{
public:
  Init_ExecutePath_Request_left_arm_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePath_Request_right_arm_path left_arm_path(::arms_ros2_control_msgs::srv::ExecutePath_Request::_left_arm_path_type arg)
  {
    msg_.left_arm_path = std::move(arg);
    return Init_ExecutePath_Request_right_arm_path(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecutePath_Request>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecutePath_Request_left_arm_path();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecutePath_Response_estimated_duration
{
public:
  explicit Init_ExecutePath_Response_estimated_duration(::arms_ros2_control_msgs::srv::ExecutePath_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::ExecutePath_Response estimated_duration(::arms_ros2_control_msgs::srv::ExecutePath_Response::_estimated_duration_type arg)
  {
    msg_.estimated_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Response msg_;
};

class Init_ExecutePath_Response_message
{
public:
  explicit Init_ExecutePath_Response_message(::arms_ros2_control_msgs::srv::ExecutePath_Response & msg)
  : msg_(msg)
  {}
  Init_ExecutePath_Response_estimated_duration message(::arms_ros2_control_msgs::srv::ExecutePath_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecutePath_Response_estimated_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Response msg_;
};

class Init_ExecutePath_Response_success
{
public:
  Init_ExecutePath_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePath_Response_message success(::arms_ros2_control_msgs::srv::ExecutePath_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecutePath_Response_message(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecutePath_Response>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecutePath_Response_success();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecutePath_Event_response
{
public:
  explicit Init_ExecutePath_Event_response(::arms_ros2_control_msgs::srv::ExecutePath_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::ExecutePath_Event response(::arms_ros2_control_msgs::srv::ExecutePath_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Event msg_;
};

class Init_ExecutePath_Event_request
{
public:
  explicit Init_ExecutePath_Event_request(::arms_ros2_control_msgs::srv::ExecutePath_Event & msg)
  : msg_(msg)
  {}
  Init_ExecutePath_Event_response request(::arms_ros2_control_msgs::srv::ExecutePath_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecutePath_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Event msg_;
};

class Init_ExecutePath_Event_info
{
public:
  Init_ExecutePath_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePath_Event_request info(::arms_ros2_control_msgs::srv::ExecutePath_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecutePath_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecutePath_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecutePath_Event>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecutePath_Event_info();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_PATH__BUILDER_HPP_
