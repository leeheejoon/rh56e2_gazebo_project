// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/teleop_mode.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__msg__TeleopMode __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__msg__TeleopMode __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeleopMode_
{
  using Type = TeleopMode_<ContainerAllocator>;

  explicit TeleopMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->control_mode = 0;
      this->mirror_movement = false;
      this->speed_level = 0l;
      this->speed_scale = 0.0f;
    }
  }

  explicit TeleopMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active = false;
      this->control_mode = 0;
      this->mirror_movement = false;
      this->speed_level = 0l;
      this->speed_scale = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _active_type =
    bool;
  _active_type active;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _mirror_movement_type =
    bool;
  _mirror_movement_type mirror_movement;
  using _speed_level_type =
    int32_t;
  _speed_level_type speed_level;
  using _speed_scale_type =
    float;
  _speed_scale_type speed_scale;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__mirror_movement(
    const bool & _arg)
  {
    this->mirror_movement = _arg;
    return *this;
  }
  Type & set__speed_level(
    const int32_t & _arg)
  {
    this->speed_level = _arg;
    return *this;
  }
  Type & set__speed_scale(
    const float & _arg)
  {
    this->speed_scale = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROL_ARM =
    0u;
  static constexpr uint8_t CONTROL_CHASSIS =
    1u;

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__msg__TeleopMode
    std::shared_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__msg__TeleopMode
    std::shared_ptr<arms_ros2_control_msgs::msg::TeleopMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleopMode_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->mirror_movement != other.mirror_movement) {
      return false;
    }
    if (this->speed_level != other.speed_level) {
      return false;
    }
    if (this->speed_scale != other.speed_scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleopMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleopMode_

// alias to use template instance with default allocator
using TeleopMode =
  arms_ros2_control_msgs::msg::TeleopMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopMode_<ContainerAllocator>::CONTROL_ARM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeleopMode_<ContainerAllocator>::CONTROL_CHASSIS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__TELEOP_MODE__STRUCT_HPP_
