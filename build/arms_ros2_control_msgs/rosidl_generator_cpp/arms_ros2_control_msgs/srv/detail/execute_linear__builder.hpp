// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:srv/ExecuteLinear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/execute_linear.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_LINEAR__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_LINEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/srv/detail/execute_linear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteLinear_Request_linear_params
{
public:
  Init_ExecuteLinear_Request_linear_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Request linear_params(::arms_ros2_control_msgs::srv::ExecuteLinear_Request::_linear_params_type arg)
  {
    msg_.linear_params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecuteLinear_Request>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecuteLinear_Request_linear_params();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteLinear_Response_estimated_duration
{
public:
  explicit Init_ExecuteLinear_Response_estimated_duration(::arms_ros2_control_msgs::srv::ExecuteLinear_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Response estimated_duration(::arms_ros2_control_msgs::srv::ExecuteLinear_Response::_estimated_duration_type arg)
  {
    msg_.estimated_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Response msg_;
};

class Init_ExecuteLinear_Response_message
{
public:
  explicit Init_ExecuteLinear_Response_message(::arms_ros2_control_msgs::srv::ExecuteLinear_Response & msg)
  : msg_(msg)
  {}
  Init_ExecuteLinear_Response_estimated_duration message(::arms_ros2_control_msgs::srv::ExecuteLinear_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteLinear_Response_estimated_duration(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Response msg_;
};

class Init_ExecuteLinear_Response_success
{
public:
  Init_ExecuteLinear_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteLinear_Response_message success(::arms_ros2_control_msgs::srv::ExecuteLinear_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteLinear_Response_message(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecuteLinear_Response>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecuteLinear_Response_success();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteLinear_Event_response
{
public:
  explicit Init_ExecuteLinear_Event_response(::arms_ros2_control_msgs::srv::ExecuteLinear_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Event response(::arms_ros2_control_msgs::srv::ExecuteLinear_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Event msg_;
};

class Init_ExecuteLinear_Event_request
{
public:
  explicit Init_ExecuteLinear_Event_request(::arms_ros2_control_msgs::srv::ExecuteLinear_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteLinear_Event_response request(::arms_ros2_control_msgs::srv::ExecuteLinear_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteLinear_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Event msg_;
};

class Init_ExecuteLinear_Event_info
{
public:
  Init_ExecuteLinear_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteLinear_Event_request info(::arms_ros2_control_msgs::srv::ExecuteLinear_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteLinear_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::ExecuteLinear_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::ExecuteLinear_Event>()
{
  return arms_ros2_control_msgs::srv::builder::Init_ExecuteLinear_Event_info();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__EXECUTE_LINEAR__BUILDER_HPP_
