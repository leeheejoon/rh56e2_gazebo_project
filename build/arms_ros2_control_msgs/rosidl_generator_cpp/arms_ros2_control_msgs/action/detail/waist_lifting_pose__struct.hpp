// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:action/WaistLiftingPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/action/waist_lifting_pose.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Goal __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_Goal_
{
  using Type = WaistLiftingPose_Goal_<ContainerAllocator>;

  explicit WaistLiftingPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->x = 0.0;
      this->z = 0.0;
      this->phi = 0.0;
    }
  }

  explicit WaistLiftingPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->x = 0.0;
      this->z = 0.0;
      this->phi = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _x_type =
    double;
  _x_type x;
  using _z_type =
    double;
  _z_type z;
  using _phi_type =
    double;
  _phi_type phi;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__phi(
    const double & _arg)
  {
    this->phi = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_ABSOLUTE =
    0u;
  static constexpr uint8_t MODE_RELATIVE =
    1u;

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Goal
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Goal
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_Goal_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->phi != other.phi) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_Goal_

// alias to use template instance with default allocator
using WaistLiftingPose_Goal =
  arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WaistLiftingPose_Goal_<ContainerAllocator>::MODE_ABSOLUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WaistLiftingPose_Goal_<ContainerAllocator>::MODE_RELATIVE;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace arms_ros2_control_msgs


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Result __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_Result_
{
  using Type = WaistLiftingPose_Result_<ContainerAllocator>;

  explicit WaistLiftingPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reachable = false;
      this->success = false;
      this->planned_x = 0.0;
      this->planned_z = 0.0;
      this->planned_phi = 0.0;
      this->message = "";
      this->error_code = 0l;
    }
  }

  explicit WaistLiftingPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reachable = false;
      this->success = false;
      this->planned_x = 0.0;
      this->planned_z = 0.0;
      this->planned_phi = 0.0;
      this->message = "";
      this->error_code = 0l;
    }
  }

  // field types and members
  using _reachable_type =
    bool;
  _reachable_type reachable;
  using _success_type =
    bool;
  _success_type success;
  using _planned_x_type =
    double;
  _planned_x_type planned_x;
  using _planned_z_type =
    double;
  _planned_z_type planned_z;
  using _planned_phi_type =
    double;
  _planned_phi_type planned_phi;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__reachable(
    const bool & _arg)
  {
    this->reachable = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__planned_x(
    const double & _arg)
  {
    this->planned_x = _arg;
    return *this;
  }
  Type & set__planned_z(
    const double & _arg)
  {
    this->planned_z = _arg;
    return *this;
  }
  Type & set__planned_phi(
    const double & _arg)
  {
    this->planned_phi = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ERROR_NONE =
    0;
  static constexpr int32_t ERROR_INVALID_MODE =
    1;
  static constexpr int32_t ERROR_CONTROLLER_NOT_READY =
    2;
  static constexpr int32_t ERROR_UNREACHABLE =
    3;
  static constexpr int32_t ERROR_RUNTIME_FAILED =
    4;
  static constexpr int32_t ERROR_CANCELED =
    5;

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Result
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Result
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_Result_ & other) const
  {
    if (this->reachable != other.reachable) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->planned_x != other.planned_x) {
      return false;
    }
    if (this->planned_z != other.planned_z) {
      return false;
    }
    if (this->planned_phi != other.planned_phi) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_Result_

// alias to use template instance with default allocator
using WaistLiftingPose_Result =
  arms_ros2_control_msgs::action::WaistLiftingPose_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t WaistLiftingPose_Result_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t WaistLiftingPose_Result_<ContainerAllocator>::ERROR_INVALID_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t WaistLiftingPose_Result_<ContainerAllocator>::ERROR_CONTROLLER_NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t WaistLiftingPose_Result_<ContainerAllocator>::ERROR_UNREACHABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t WaistLiftingPose_Result_<ContainerAllocator>::ERROR_RUNTIME_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t WaistLiftingPose_Result_<ContainerAllocator>::ERROR_CANCELED;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace arms_ros2_control_msgs


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Feedback __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_Feedback_
{
  using Type = WaistLiftingPose_Feedback_<ContainerAllocator>;

  explicit WaistLiftingPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
    }
  }

  explicit WaistLiftingPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
    }
  }

  // field types and members
  using _progress_type =
    double;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__progress(
    const double & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Feedback
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_Feedback
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_Feedback_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_Feedback_

// alias to use template instance with default allocator
using WaistLiftingPose_Feedback =
  arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_SendGoal_Request_
{
  using Type = WaistLiftingPose_SendGoal_Request_<ContainerAllocator>;

  explicit WaistLiftingPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit WaistLiftingPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const arms_ros2_control_msgs::action::WaistLiftingPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Request
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_SendGoal_Request_

// alias to use template instance with default allocator
using WaistLiftingPose_SendGoal_Request =
  arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_SendGoal_Response_
{
  using Type = WaistLiftingPose_SendGoal_Response_<ContainerAllocator>;

  explicit WaistLiftingPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit WaistLiftingPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Response
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_SendGoal_Response_

// alias to use template instance with default allocator
using WaistLiftingPose_SendGoal_Response =
  arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_SendGoal_Event_
{
  using Type = WaistLiftingPose_SendGoal_Event_<ContainerAllocator>;

  explicit WaistLiftingPose_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit WaistLiftingPose_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_SendGoal_Event
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_SendGoal_Event_

// alias to use template instance with default allocator
using WaistLiftingPose_SendGoal_Event =
  arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs

namespace arms_ros2_control_msgs
{

namespace action
{

struct WaistLiftingPose_SendGoal
{
  using Request = arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Request;
  using Response = arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Response;
  using Event = arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal_Event;
};

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_GetResult_Request_
{
  using Type = WaistLiftingPose_GetResult_Request_<ContainerAllocator>;

  explicit WaistLiftingPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit WaistLiftingPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Request
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_GetResult_Request_

// alias to use template instance with default allocator
using WaistLiftingPose_GetResult_Request =
  arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_GetResult_Response_
{
  using Type = WaistLiftingPose_GetResult_Response_<ContainerAllocator>;

  explicit WaistLiftingPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit WaistLiftingPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const arms_ros2_control_msgs::action::WaistLiftingPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Response
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_GetResult_Response_

// alias to use template instance with default allocator
using WaistLiftingPose_GetResult_Response =
  arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_GetResult_Event_
{
  using Type = WaistLiftingPose_GetResult_Event_<ContainerAllocator>;

  explicit WaistLiftingPose_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit WaistLiftingPose_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_GetResult_Event
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_GetResult_Event_

// alias to use template instance with default allocator
using WaistLiftingPose_GetResult_Event =
  arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs

namespace arms_ros2_control_msgs
{

namespace action
{

struct WaistLiftingPose_GetResult
{
  using Request = arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Request;
  using Response = arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Response;
  using Event = arms_ros2_control_msgs::action::WaistLiftingPose_GetResult_Event;
};

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "arms_ros2_control_msgs/action/detail/waist_lifting_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaistLiftingPose_FeedbackMessage_
{
  using Type = WaistLiftingPose_FeedbackMessage_<ContainerAllocator>;

  explicit WaistLiftingPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit WaistLiftingPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const arms_ros2_control_msgs::action::WaistLiftingPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__WaistLiftingPose_FeedbackMessage
    std::shared_ptr<arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaistLiftingPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaistLiftingPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaistLiftingPose_FeedbackMessage_

// alias to use template instance with default allocator
using WaistLiftingPose_FeedbackMessage =
  arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace arms_ros2_control_msgs
{

namespace action
{

struct WaistLiftingPose
{
  /// The goal message defined in the action definition.
  using Goal = arms_ros2_control_msgs::action::WaistLiftingPose_Goal;
  /// The result message defined in the action definition.
  using Result = arms_ros2_control_msgs::action::WaistLiftingPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = arms_ros2_control_msgs::action::WaistLiftingPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = arms_ros2_control_msgs::action::WaistLiftingPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = arms_ros2_control_msgs::action::WaistLiftingPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = arms_ros2_control_msgs::action::WaistLiftingPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct WaistLiftingPose WaistLiftingPose;

}  // namespace action

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__WAIST_LIFTING_POSE__STRUCT_HPP_
