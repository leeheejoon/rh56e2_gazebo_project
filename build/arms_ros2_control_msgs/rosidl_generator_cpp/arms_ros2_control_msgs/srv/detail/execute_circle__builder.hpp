// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:srv/ExecuteCircle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/execute_circle.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_CIRCLE__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/srv/detail/execute_circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteCircle_Request_circle_params
{
public:
  Init_ExecuteCircle_Request_circle_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Request circle_params(::arms_ros2_control_msgs::srv::ExecuteCircle_Request::_circle_params_type arg)
  {
    msg_.circle_params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecuteCircle_Request>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecuteCircle_Request_circle_params();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteCircle_Response_estimated_duration
{
public:
  explicit Init_ExecuteCircle_Response_estimated_duration(::arms_ros2_control_msgs::srv::ExecuteCircle_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Response estimated_duration(::arms_ros2_control_msgs::srv::ExecuteCircle_Response::_estimated_duration_type arg)
  {
    msg_.estimated_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Response msg_;
};

class Init_ExecuteCircle_Response_message
{
public:
  explicit Init_ExecuteCircle_Response_message(::arms_ros2_control_msgs::srv::ExecuteCircle_Response & msg)
  : msg_(msg)
  {}
  Init_ExecuteCircle_Response_estimated_duration message(::arms_ros2_control_msgs::srv::ExecuteCircle_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteCircle_Response_estimated_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Response msg_;
};

class Init_ExecuteCircle_Response_success
{
public:
  Init_ExecuteCircle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteCircle_Response_message success(::arms_ros2_control_msgs::srv::ExecuteCircle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteCircle_Response_message(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecuteCircle_Response>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecuteCircle_Response_success();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteCircle_Event_response
{
public:
  explicit Init_ExecuteCircle_Event_response(::arms_ros2_control_msgs::srv::ExecuteCircle_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Event response(::arms_ros2_control_msgs::srv::ExecuteCircle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Event msg_;
};

class Init_ExecuteCircle_Event_request
{
public:
  explicit Init_ExecuteCircle_Event_request(::arms_ros2_control_msgs::srv::ExecuteCircle_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteCircle_Event_response request(::arms_ros2_control_msgs::srv::ExecuteCircle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteCircle_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Event msg_;
};

class Init_ExecuteCircle_Event_info
{
public:
  Init_ExecuteCircle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteCircle_Event_request info(::arms_ros2_control_msgs::srv::ExecuteCircle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteCircle_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteCircle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecuteCircle_Event>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecuteCircle_Event_info();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_CIRCLE__BUILDER_HPP_
