// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:msg/JointWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/joint_waypoint.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__msg__JointWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__msg__JointWaypoint __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointWaypoint_
{
  using Type = JointWaypoint_<ContainerAllocator>;

  explicit JointWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blend_ratio_percent = 0.0;
      this->time_mode = false;
      this->total_time = 0.0;
    }
  }

  explicit JointWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blend_ratio_percent = 0.0;
      this->time_mode = false;
      this->total_time = 0.0;
    }
  }

  // field types and members
  using _position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_type position;
  using _velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocity_type velocity;
  using _blend_ratio_percent_type =
    double;
  _blend_ratio_percent_type blend_ratio_percent;
  using _max_velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _max_velocity_type max_velocity;
  using _max_acceleration_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _max_acceleration_type max_acceleration;
  using _max_jerk_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _max_jerk_type max_jerk;
  using _time_mode_type =
    bool;
  _time_mode_type time_mode;
  using _total_time_type =
    double;
  _total_time_type total_time;

  // setters for named parameter idiom
  Type & set__position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__blend_ratio_percent(
    const double & _arg)
  {
    this->blend_ratio_percent = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__max_jerk(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->max_jerk = _arg;
    return *this;
  }
  Type & set__time_mode(
    const bool & _arg)
  {
    this->time_mode = _arg;
    return *this;
  }
  Type & set__total_time(
    const double & _arg)
  {
    this->total_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__msg__JointWaypoint
    std::shared_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__msg__JointWaypoint
    std::shared_ptr<arms_ros2_control_msgs::msg::JointWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointWaypoint_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->blend_ratio_percent != other.blend_ratio_percent) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->max_jerk != other.max_jerk) {
      return false;
    }
    if (this->time_mode != other.time_mode) {
      return false;
    }
    if (this->total_time != other.total_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointWaypoint_

// alias to use template instance with default allocator
using JointWaypoint =
  arms_ros2_control_msgs::msg::JointWaypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__JOINT_WAYPOINT__STRUCT_HPP_
