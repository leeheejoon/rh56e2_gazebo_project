// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:msg/LinearMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/linear_message.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'endpoint'
// Member 'right_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__msg__LinearMessage __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__msg__LinearMessage __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinearMessage_
{
  using Type = LinearMessage_<ContainerAllocator>;

  explicit LinearMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : endpoint(_init),
    right_endpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_linear_velocity = 0.0;
      this->max_linear_acceleration = 0.0;
      this->max_linear_jerk = 0.0;
      this->max_angular_velocity = 0.0;
      this->max_angular_acceleration = 0.0;
      this->max_angular_jerk = 0.0;
      this->duration = 0.0;
      this->time_mode = false;
      this->frame_id = "";
      this->arm_name = "";
      this->ik_type = "";
    }
  }

  explicit LinearMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : endpoint(_alloc, _init),
    right_endpoint(_alloc, _init),
    frame_id(_alloc),
    arm_name(_alloc),
    ik_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_linear_velocity = 0.0;
      this->max_linear_acceleration = 0.0;
      this->max_linear_jerk = 0.0;
      this->max_angular_velocity = 0.0;
      this->max_angular_acceleration = 0.0;
      this->max_angular_jerk = 0.0;
      this->duration = 0.0;
      this->time_mode = false;
      this->frame_id = "";
      this->arm_name = "";
      this->ik_type = "";
    }
  }

  // field types and members
  using _endpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _endpoint_type endpoint;
  using _right_endpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _right_endpoint_type right_endpoint;
  using _max_linear_velocity_type =
    double;
  _max_linear_velocity_type max_linear_velocity;
  using _max_linear_acceleration_type =
    double;
  _max_linear_acceleration_type max_linear_acceleration;
  using _max_linear_jerk_type =
    double;
  _max_linear_jerk_type max_linear_jerk;
  using _max_angular_velocity_type =
    double;
  _max_angular_velocity_type max_angular_velocity;
  using _max_angular_acceleration_type =
    double;
  _max_angular_acceleration_type max_angular_acceleration;
  using _max_angular_jerk_type =
    double;
  _max_angular_jerk_type max_angular_jerk;
  using _duration_type =
    double;
  _duration_type duration;
  using _time_mode_type =
    bool;
  _time_mode_type time_mode;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _arm_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _arm_name_type arm_name;
  using _ik_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ik_type_type ik_type;

  // setters for named parameter idiom
  Type & set__endpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->endpoint = _arg;
    return *this;
  }
  Type & set__right_endpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->right_endpoint = _arg;
    return *this;
  }
  Type & set__max_linear_velocity(
    const double & _arg)
  {
    this->max_linear_velocity = _arg;
    return *this;
  }
  Type & set__max_linear_acceleration(
    const double & _arg)
  {
    this->max_linear_acceleration = _arg;
    return *this;
  }
  Type & set__max_linear_jerk(
    const double & _arg)
  {
    this->max_linear_jerk = _arg;
    return *this;
  }
  Type & set__max_angular_velocity(
    const double & _arg)
  {
    this->max_angular_velocity = _arg;
    return *this;
  }
  Type & set__max_angular_acceleration(
    const double & _arg)
  {
    this->max_angular_acceleration = _arg;
    return *this;
  }
  Type & set__max_angular_jerk(
    const double & _arg)
  {
    this->max_angular_jerk = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__time_mode(
    const bool & _arg)
  {
    this->time_mode = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__arm_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->arm_name = _arg;
    return *this;
  }
  Type & set__ik_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ik_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__msg__LinearMessage
    std::shared_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__msg__LinearMessage
    std::shared_ptr<arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinearMessage_ & other) const
  {
    if (this->endpoint != other.endpoint) {
      return false;
    }
    if (this->right_endpoint != other.right_endpoint) {
      return false;
    }
    if (this->max_linear_velocity != other.max_linear_velocity) {
      return false;
    }
    if (this->max_linear_acceleration != other.max_linear_acceleration) {
      return false;
    }
    if (this->max_linear_jerk != other.max_linear_jerk) {
      return false;
    }
    if (this->max_angular_velocity != other.max_angular_velocity) {
      return false;
    }
    if (this->max_angular_acceleration != other.max_angular_acceleration) {
      return false;
    }
    if (this->max_angular_jerk != other.max_angular_jerk) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->time_mode != other.time_mode) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->arm_name != other.arm_name) {
      return false;
    }
    if (this->ik_type != other.ik_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinearMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinearMessage_

// alias to use template instance with default allocator
using LinearMessage =
  arms_ros2_control_msgs::msg::LinearMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__LINEAR_MESSAGE__STRUCT_HPP_
