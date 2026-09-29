// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/wbc_capability.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__msg__WbcCapability __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__msg__WbcCapability __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WbcCapability_
{
  using Type = WbcCapability_<ContainerAllocator>;

  explicit WbcCapability_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_mobile_base = false;
      this->has_body_relative_constraint = false;
      this->has_waist_lock = false;
      this->has_head_coupling = false;
      this->has_custom_joint_lock = false;
      this->has_bimanual_coupling = false;
      this->body_tracking_ee_enabled = false;
      this->head_tracking_ee_enabled = false;
      this->has_home_joint_reference = false;
      this->head_midpoint_gaze_enabled = false;
    }
  }

  explicit WbcCapability_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_mobile_base = false;
      this->has_body_relative_constraint = false;
      this->has_waist_lock = false;
      this->has_head_coupling = false;
      this->has_custom_joint_lock = false;
      this->has_bimanual_coupling = false;
      this->body_tracking_ee_enabled = false;
      this->head_tracking_ee_enabled = false;
      this->has_home_joint_reference = false;
      this->head_midpoint_gaze_enabled = false;
    }
  }

  // field types and members
  using _has_mobile_base_type =
    bool;
  _has_mobile_base_type has_mobile_base;
  using _has_body_relative_constraint_type =
    bool;
  _has_body_relative_constraint_type has_body_relative_constraint;
  using _has_waist_lock_type =
    bool;
  _has_waist_lock_type has_waist_lock;
  using _has_head_coupling_type =
    bool;
  _has_head_coupling_type has_head_coupling;
  using _has_custom_joint_lock_type =
    bool;
  _has_custom_joint_lock_type has_custom_joint_lock;
  using _has_bimanual_coupling_type =
    bool;
  _has_bimanual_coupling_type has_bimanual_coupling;
  using _body_tracking_ee_enabled_type =
    bool;
  _body_tracking_ee_enabled_type body_tracking_ee_enabled;
  using _head_tracking_ee_enabled_type =
    bool;
  _head_tracking_ee_enabled_type head_tracking_ee_enabled;
  using _has_home_joint_reference_type =
    bool;
  _has_home_joint_reference_type has_home_joint_reference;
  using _head_midpoint_gaze_enabled_type =
    bool;
  _head_midpoint_gaze_enabled_type head_midpoint_gaze_enabled;

  // setters for named parameter idiom
  Type & set__has_mobile_base(
    const bool & _arg)
  {
    this->has_mobile_base = _arg;
    return *this;
  }
  Type & set__has_body_relative_constraint(
    const bool & _arg)
  {
    this->has_body_relative_constraint = _arg;
    return *this;
  }
  Type & set__has_waist_lock(
    const bool & _arg)
  {
    this->has_waist_lock = _arg;
    return *this;
  }
  Type & set__has_head_coupling(
    const bool & _arg)
  {
    this->has_head_coupling = _arg;
    return *this;
  }
  Type & set__has_custom_joint_lock(
    const bool & _arg)
  {
    this->has_custom_joint_lock = _arg;
    return *this;
  }
  Type & set__has_bimanual_coupling(
    const bool & _arg)
  {
    this->has_bimanual_coupling = _arg;
    return *this;
  }
  Type & set__body_tracking_ee_enabled(
    const bool & _arg)
  {
    this->body_tracking_ee_enabled = _arg;
    return *this;
  }
  Type & set__head_tracking_ee_enabled(
    const bool & _arg)
  {
    this->head_tracking_ee_enabled = _arg;
    return *this;
  }
  Type & set__has_home_joint_reference(
    const bool & _arg)
  {
    this->has_home_joint_reference = _arg;
    return *this;
  }
  Type & set__head_midpoint_gaze_enabled(
    const bool & _arg)
  {
    this->head_midpoint_gaze_enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__msg__WbcCapability
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__msg__WbcCapability
    std::shared_ptr<arms_ros2_control_msgs::msg::WbcCapability_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WbcCapability_ & other) const
  {
    if (this->has_mobile_base != other.has_mobile_base) {
      return false;
    }
    if (this->has_body_relative_constraint != other.has_body_relative_constraint) {
      return false;
    }
    if (this->has_waist_lock != other.has_waist_lock) {
      return false;
    }
    if (this->has_head_coupling != other.has_head_coupling) {
      return false;
    }
    if (this->has_custom_joint_lock != other.has_custom_joint_lock) {
      return false;
    }
    if (this->has_bimanual_coupling != other.has_bimanual_coupling) {
      return false;
    }
    if (this->body_tracking_ee_enabled != other.body_tracking_ee_enabled) {
      return false;
    }
    if (this->head_tracking_ee_enabled != other.head_tracking_ee_enabled) {
      return false;
    }
    if (this->has_home_joint_reference != other.has_home_joint_reference) {
      return false;
    }
    if (this->head_midpoint_gaze_enabled != other.head_midpoint_gaze_enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const WbcCapability_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WbcCapability_

// alias to use template instance with default allocator
using WbcCapability =
  arms_ros2_control_msgs::msg::WbcCapability_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__WBC_CAPABILITY__STRUCT_HPP_
