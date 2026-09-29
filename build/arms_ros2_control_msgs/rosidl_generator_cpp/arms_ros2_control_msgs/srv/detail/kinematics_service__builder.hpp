// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arms_ros2_control_msgs:srv/KinematicsService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/kinematics_service.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__BUILDER_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arms_ros2_control_msgs/srv/detail/kinematics_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_KinematicsService_Request_enable_random_restart
{
public:
  explicit Init_KinematicsService_Request_enable_random_restart(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::KinematicsService_Request enable_random_restart(::arms_ros2_control_msgs::srv::KinematicsService_Request::_enable_random_restart_type arg)
  {
    msg_.enable_random_restart = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_dls_damping
{
public:
  explicit Init_KinematicsService_Request_dls_damping(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Request_enable_random_restart dls_damping(::arms_ros2_control_msgs::srv::KinematicsService_Request::_dls_damping_type arg)
  {
    msg_.dls_damping = std::move(arg);
    return Init_KinematicsService_Request_enable_random_restart(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_tolerance
{
public:
  explicit Init_KinematicsService_Request_tolerance(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Request_dls_damping tolerance(::arms_ros2_control_msgs::srv::KinematicsService_Request::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return Init_KinematicsService_Request_dls_damping(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_max_iterations
{
public:
  explicit Init_KinematicsService_Request_max_iterations(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Request_tolerance max_iterations(::arms_ros2_control_msgs::srv::KinematicsService_Request::_max_iterations_type arg)
  {
    msg_.max_iterations = std::move(arg);
    return Init_KinematicsService_Request_tolerance(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_target_poses
{
public:
  explicit Init_KinematicsService_Request_target_poses(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Request_max_iterations target_poses(::arms_ros2_control_msgs::srv::KinematicsService_Request::_target_poses_type arg)
  {
    msg_.target_poses = std::move(arg);
    return Init_KinematicsService_Request_max_iterations(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_joint_angles
{
public:
  explicit Init_KinematicsService_Request_joint_angles(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Request_target_poses joint_angles(::arms_ros2_control_msgs::srv::KinematicsService_Request::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return Init_KinematicsService_Request_target_poses(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_solver_type
{
public:
  explicit Init_KinematicsService_Request_solver_type(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Request_joint_angles solver_type(::arms_ros2_control_msgs::srv::KinematicsService_Request::_solver_type_type arg)
  {
    msg_.solver_type = std::move(arg);
    return Init_KinematicsService_Request_joint_angles(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_arm_type
{
public:
  explicit Init_KinematicsService_Request_arm_type(::arms_ros2_control_msgs::srv::KinematicsService_Request & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Request_solver_type arm_type(::arms_ros2_control_msgs::srv::KinematicsService_Request::_arm_type_type arg)
  {
    msg_.arm_type = std::move(arg);
    return Init_KinematicsService_Request_solver_type(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

class Init_KinematicsService_Request_operation_type
{
public:
  Init_KinematicsService_Request_operation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsService_Request_arm_type operation_type(::arms_ros2_control_msgs::srv::KinematicsService_Request::_operation_type_type arg)
  {
    msg_.operation_type = std::move(arg);
    return Init_KinematicsService_Request_arm_type(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::KinematicsService_Request>()
{
  return arms_ros2_control_msgs::srv::builder::Init_KinematicsService_Request_operation_type();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_KinematicsService_Response_additional_info
{
public:
  explicit Init_KinematicsService_Response_additional_info(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::KinematicsService_Response additional_info(::arms_ros2_control_msgs::srv::KinematicsService_Response::_additional_info_type arg)
  {
    msg_.additional_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_is_out_of_range
{
public:
  explicit Init_KinematicsService_Response_is_out_of_range(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_additional_info is_out_of_range(::arms_ros2_control_msgs::srv::KinematicsService_Response::_is_out_of_range_type arg)
  {
    msg_.is_out_of_range = std::move(arg);
    return Init_KinematicsService_Response_additional_info(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_computation_time_ms
{
public:
  explicit Init_KinematicsService_Response_computation_time_ms(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_is_out_of_range computation_time_ms(::arms_ros2_control_msgs::srv::KinematicsService_Response::_computation_time_ms_type arg)
  {
    msg_.computation_time_ms = std::move(arg);
    return Init_KinematicsService_Response_is_out_of_range(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_final_error
{
public:
  explicit Init_KinematicsService_Response_final_error(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_computation_time_ms final_error(::arms_ros2_control_msgs::srv::KinematicsService_Response::_final_error_type arg)
  {
    msg_.final_error = std::move(arg);
    return Init_KinematicsService_Response_computation_time_ms(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_iterations
{
public:
  explicit Init_KinematicsService_Response_iterations(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_final_error iterations(::arms_ros2_control_msgs::srv::KinematicsService_Response::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return Init_KinematicsService_Response_final_error(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_used_solver
{
public:
  explicit Init_KinematicsService_Response_used_solver(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_iterations used_solver(::arms_ros2_control_msgs::srv::KinematicsService_Response::_used_solver_type arg)
  {
    msg_.used_solver = std::move(arg);
    return Init_KinematicsService_Response_iterations(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_result_joint_angles
{
public:
  explicit Init_KinematicsService_Response_result_joint_angles(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_used_solver result_joint_angles(::arms_ros2_control_msgs::srv::KinematicsService_Response::_result_joint_angles_type arg)
  {
    msg_.result_joint_angles = std::move(arg);
    return Init_KinematicsService_Response_used_solver(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_result_poses
{
public:
  explicit Init_KinematicsService_Response_result_poses(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_result_joint_angles result_poses(::arms_ros2_control_msgs::srv::KinematicsService_Response::_result_poses_type arg)
  {
    msg_.result_poses = std::move(arg);
    return Init_KinematicsService_Response_result_joint_angles(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_message
{
public:
  explicit Init_KinematicsService_Response_message(::arms_ros2_control_msgs::srv::KinematicsService_Response & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Response_result_poses message(::arms_ros2_control_msgs::srv::KinematicsService_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_KinematicsService_Response_result_poses(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

class Init_KinematicsService_Response_success
{
public:
  Init_KinematicsService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsService_Response_message success(::arms_ros2_control_msgs::srv::KinematicsService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_KinematicsService_Response_message(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::KinematicsService_Response>()
{
  return arms_ros2_control_msgs::srv::builder::Init_KinematicsService_Response_success();
}

}  // namespace arms_ros2_control_msgs


namespace arms_ros2_control_msgs
{

namespace srv
{

namespace builder
{

class Init_KinematicsService_Event_response
{
public:
  explicit Init_KinematicsService_Event_response(::arms_ros2_control_msgs::srv::KinematicsService_Event & msg)
  : msg_(msg)
  {}
  ::arms_ros2_control_msgs::srv::KinematicsService_Event response(::arms_ros2_control_msgs::srv::KinematicsService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Event msg_;
};

class Init_KinematicsService_Event_request
{
public:
  explicit Init_KinematicsService_Event_request(::arms_ros2_control_msgs::srv::KinematicsService_Event & msg)
  : msg_(msg)
  {}
  Init_KinematicsService_Event_response request(::arms_ros2_control_msgs::srv::KinematicsService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_KinematicsService_Event_response(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Event msg_;
};

class Init_KinematicsService_Event_info
{
public:
  Init_KinematicsService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsService_Event_request info(::arms_ros2_control_msgs::srv::KinematicsService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_KinematicsService_Event_request(msg_);
  }

private:
  ::arms_ros2_control_msgs::srv::KinematicsService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arms_ros2_control_msgs::srv::KinematicsService_Event>()
{
  return arms_ros2_control_msgs::srv::builder::Init_KinematicsService_Event_info();
}

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__KINEMATICS_SERVICE__BUILDER_HPP_
