// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:action/ExecuteLinear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/action/execute_linear.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__EXECUTE_LINEAR__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__EXECUTE_LINEAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'linear_params'
#include "arms_ros2_control_msgs/msg/detail/linear_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Goal __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Goal __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_Goal_
{
  using Type = ExecuteLinear_Goal_<ContainerAllocator>;

  explicit ExecuteLinear_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_params(_init)
  {
    (void)_init;
  }

  explicit ExecuteLinear_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_params(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _linear_params_type =
    arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator>;
  _linear_params_type linear_params;

  // setters for named parameter idiom
  Type & set__linear_params(
    const arms_ros2_control_msgs::msg::LinearMessage_<ContainerAllocator> & _arg)
  {
    this->linear_params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Goal
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Goal
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_Goal_ & other) const
  {
    if (this->linear_params != other.linear_params) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_Goal_

// alias to use template instance with default allocator
using ExecuteLinear_Goal =
  arms_ros2_control_msgs::action::ExecuteLinear_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Result __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Result __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_Result_
{
  using Type = ExecuteLinear_Result_<ContainerAllocator>;

  explicit ExecuteLinear_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->estimated_duration = 0.0;
      this->actual_duration = 0.0;
    }
  }

  explicit ExecuteLinear_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->estimated_duration = 0.0;
      this->actual_duration = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _estimated_duration_type =
    double;
  _estimated_duration_type estimated_duration;
  using _actual_duration_type =
    double;
  _actual_duration_type actual_duration;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__estimated_duration(
    const double & _arg)
  {
    this->estimated_duration = _arg;
    return *this;
  }
  Type & set__actual_duration(
    const double & _arg)
  {
    this->actual_duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Result
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Result
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->estimated_duration != other.estimated_duration) {
      return false;
    }
    if (this->actual_duration != other.actual_duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_Result_

// alias to use template instance with default allocator
using ExecuteLinear_Result =
  arms_ros2_control_msgs::action::ExecuteLinear_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Feedback __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_Feedback_
{
  using Type = ExecuteLinear_Feedback_<ContainerAllocator>;

  explicit ExecuteLinear_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
      this->elapsed_time = 0.0;
      this->remaining_time = 0.0;
    }
  }

  explicit ExecuteLinear_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
      this->elapsed_time = 0.0;
      this->remaining_time = 0.0;
    }
  }

  // field types and members
  using _progress_type =
    double;
  _progress_type progress;
  using _elapsed_time_type =
    double;
  _elapsed_time_type elapsed_time;
  using _remaining_time_type =
    double;
  _remaining_time_type remaining_time;

  // setters for named parameter idiom
  Type & set__progress(
    const double & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__elapsed_time(
    const double & _arg)
  {
    this->elapsed_time = _arg;
    return *this;
  }
  Type & set__remaining_time(
    const double & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Feedback
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_Feedback
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_Feedback_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    if (this->elapsed_time != other.elapsed_time) {
      return false;
    }
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_Feedback_

// alias to use template instance with default allocator
using ExecuteLinear_Feedback =
  arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "arms_ros2_control_msgs/action/detail/execute_linear__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_SendGoal_Request_
{
  using Type = ExecuteLinear_SendGoal_Request_<ContainerAllocator>;

  explicit ExecuteLinear_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecuteLinear_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const arms_ros2_control_msgs::action::ExecuteLinear_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Request
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_SendGoal_Request_

// alias to use template instance with default allocator
using ExecuteLinear_SendGoal_Request =
  arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_SendGoal_Response_
{
  using Type = ExecuteLinear_SendGoal_Response_<ContainerAllocator>;

  explicit ExecuteLinear_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecuteLinear_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Response
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_SendGoal_Response_

// alias to use template instance with default allocator
using ExecuteLinear_SendGoal_Response =
  arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Event __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_SendGoal_Event_
{
  using Type = ExecuteLinear_SendGoal_Event_<ContainerAllocator>;

  explicit ExecuteLinear_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteLinear_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Event
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_SendGoal_Event
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_SendGoal_Event_ & other) const
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
  bool operator!=(const ExecuteLinear_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_SendGoal_Event_

// alias to use template instance with default allocator
using ExecuteLinear_SendGoal_Event =
  arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs

namespace arms_ros2_control_msgs
{

namespace action
{

struct ExecuteLinear_SendGoal
{
  using Request = arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Request;
  using Response = arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Response;
  using Event = arms_ros2_control_msgs::action::ExecuteLinear_SendGoal_Event;
};

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_GetResult_Request_
{
  using Type = ExecuteLinear_GetResult_Request_<ContainerAllocator>;

  explicit ExecuteLinear_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecuteLinear_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Request
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_GetResult_Request_

// alias to use template instance with default allocator
using ExecuteLinear_GetResult_Request =
  arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "arms_ros2_control_msgs/action/detail/execute_linear__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_GetResult_Response_
{
  using Type = ExecuteLinear_GetResult_Response_<ContainerAllocator>;

  explicit ExecuteLinear_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecuteLinear_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const arms_ros2_control_msgs::action::ExecuteLinear_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Response
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_GetResult_Response_

// alias to use template instance with default allocator
using ExecuteLinear_GetResult_Response =
  arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Event __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_GetResult_Event_
{
  using Type = ExecuteLinear_GetResult_Event_<ContainerAllocator>;

  explicit ExecuteLinear_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteLinear_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Event
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_GetResult_Event
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_GetResult_Event_ & other) const
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
  bool operator!=(const ExecuteLinear_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_GetResult_Event_

// alias to use template instance with default allocator
using ExecuteLinear_GetResult_Event =
  arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arms_ros2_control_msgs

namespace arms_ros2_control_msgs
{

namespace action
{

struct ExecuteLinear_GetResult
{
  using Request = arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Request;
  using Response = arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Response;
  using Event = arms_ros2_control_msgs::action::ExecuteLinear_GetResult_Event;
};

}  // namespace action

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "arms_ros2_control_msgs/action/detail/execute_linear__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteLinear_FeedbackMessage_
{
  using Type = ExecuteLinear_FeedbackMessage_<ContainerAllocator>;

  explicit ExecuteLinear_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecuteLinear_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const arms_ros2_control_msgs::action::ExecuteLinear_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__action__ExecuteLinear_FeedbackMessage
    std::shared_ptr<arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteLinear_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteLinear_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteLinear_FeedbackMessage_

// alias to use template instance with default allocator
using ExecuteLinear_FeedbackMessage =
  arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage_<std::allocator<void>>;

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

struct ExecuteLinear
{
  /// The goal message defined in the action definition.
  using Goal = arms_ros2_control_msgs::action::ExecuteLinear_Goal;
  /// The result message defined in the action definition.
  using Result = arms_ros2_control_msgs::action::ExecuteLinear_Result;
  /// The feedback message defined in the action definition.
  using Feedback = arms_ros2_control_msgs::action::ExecuteLinear_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = arms_ros2_control_msgs::action::ExecuteLinear_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = arms_ros2_control_msgs::action::ExecuteLinear_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = arms_ros2_control_msgs::action::ExecuteLinear_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecuteLinear ExecuteLinear;

}  // namespace action

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__ACTION__DETAIL__EXECUTE_LINEAR__STRUCT_HPP_
