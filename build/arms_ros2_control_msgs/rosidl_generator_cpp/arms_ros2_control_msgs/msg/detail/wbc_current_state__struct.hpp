// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_current_state.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__msg__WbcCurrentState __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__msg__WbcCurrentState __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WbcCurrentState_
{
  using Type = WbcCurrentState_<ContainerAllocator>;

  explicit WbcCurrentState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_state = 0;
      this->body_state = 0;
      this->bimanual_state = 0;
      this->left_arm_state = 0;
      this->right_arm_state = 0;
      this->home_joint_reference_enabled = false;
      this->head_state = 0;
      this->head_midpoint_gaze_active = false;
    }
  }

  explicit WbcCurrentState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_state = 0;
      this->body_state = 0;
      this->bimanual_state = 0;
      this->left_arm_state = 0;
      this->right_arm_state = 0;
      this->home_joint_reference_enabled = false;
      this->head_state = 0;
      this->head_midpoint_gaze_active = false;
    }
  }

  // field types and members
  using _base_state_type =
    uint8_t;
  _base_state_type base_state;
  using _body_state_type =
    uint8_t;
  _body_state_type body_state;
  using _bimanual_state_type =
    uint8_t;
  _bimanual_state_type bimanual_state;
  using _left_arm_state_type =
    uint8_t;
  _left_arm_state_type left_arm_state;
  using _right_arm_state_type =
    uint8_t;
  _right_arm_state_type right_arm_state;
  using _home_joint_reference_enabled_type =
    bool;
  _home_joint_reference_enabled_type home_joint_reference_enabled;
  using _head_state_type =
    uint8_t;
  _head_state_type head_state;
  using _head_midpoint_gaze_active_type =
    bool;
  _head_midpoint_gaze_active_type head_midpoint_gaze_active;

  // setters for named parameter idiom
  Type & set__base_state(
    const uint8_t & _arg)
  {
    this->base_state = _arg;
    return *this;
  }
  Type & set__body_state(
    const uint8_t & _arg)
  {
    this->body_state = _arg;
    return *this;
  }
  Type & set__bimanual_state(
    const uint8_t & _arg)
  {
    this->bimanual_state = _arg;
    return *this;
  }
  Type & set__left_arm_state(
    const uint8_t & _arg)
  {
    this->left_arm_state = _arg;
    return *this;
  }
  Type & set__right_arm_state(
    const uint8_t & _arg)
  {
    this->right_arm_state = _arg;
    return *this;
  }
  Type & set__home_joint_reference_enabled(
    const bool & _arg)
  {
    this->home_joint_reference_enabled = _arg;
    return *this;
  }
  Type & set__head_state(
    const uint8_t & _arg)
  {
    this->head_state = _arg;
    return *this;
  }
  Type & set__head_midpoint_gaze_active(
    const bool & _arg)
  {
    this->head_midpoint_gaze_active = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BASE_LOCKED =
    0u;
  static constexpr uint8_t BASE_UNLOCKED =
    1u;
  static constexpr uint8_t BODY_FREE =
    0u;
  static constexpr uint8_t BODY_VERTICAL =
    1u;
  static constexpr uint8_t BODY_TRACKING =
    2u;
  static constexpr uint8_t BODY_LOCKED =
    3u;
  static constexpr uint8_t BODY_CUSTOM_LOCKED =
    5u;
  static constexpr uint8_t BIMANUAL_INDEPENDENT =
    0u;
  static constexpr uint8_t BIMANUAL_COUPLED =
    1u;
  static constexpr uint8_t ARM_DISABLED =
    0u;
  static constexpr uint8_t ARM_ENABLED =
    1u;
  static constexpr uint8_t HEAD_DISABLED =
    0u;
  static constexpr uint8_t HEAD_TRACKING =
    1u;
  static constexpr uint8_t HEAD_GAZE =
    2u;
  static constexpr uint8_t HEAD_FORWARD =
    3u;

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__msg__WbcCurrentState
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__msg__WbcCurrentState
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCurrentState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WbcCurrentState_ & other) const
  {
    if (this->base_state != other.base_state) {
      return false;
    }
    if (this->body_state != other.body_state) {
      return false;
    }
    if (this->bimanual_state != other.bimanual_state) {
      return false;
    }
    if (this->left_arm_state != other.left_arm_state) {
      return false;
    }
    if (this->right_arm_state != other.right_arm_state) {
      return false;
    }
    if (this->home_joint_reference_enabled != other.home_joint_reference_enabled) {
      return false;
    }
    if (this->head_state != other.head_state) {
      return false;
    }
    if (this->head_midpoint_gaze_active != other.head_midpoint_gaze_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const WbcCurrentState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WbcCurrentState_

// alias to use template instance with default allocator
using WbcCurrentState =
  arms_ros2_control_msgs::msg::WbcCurrentState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BASE_LOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BASE_UNLOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BODY_FREE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BODY_VERTICAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BODY_TRACKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BODY_LOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BODY_CUSTOM_LOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BIMANUAL_INDEPENDENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::BIMANUAL_COUPLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::ARM_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::ARM_ENABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::HEAD_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::HEAD_TRACKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::HEAD_GAZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WbcCurrentState_<ContainerAllocator>::HEAD_FORWARD;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CURRENT_STATE__STRUCT_HPP_
