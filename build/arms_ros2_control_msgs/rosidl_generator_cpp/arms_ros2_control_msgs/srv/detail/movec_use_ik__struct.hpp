// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:srv/MovecUseIK.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/srv/movec_use_ik.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__MOVEC_USE_IK__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__MOVEC_USE_IK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'circle_params'
#include "arms_ros2_control_msgs/msg/detail/circle_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Request __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Request __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovecUseIK_Request_
{
  using Type = MovecUseIK_Request_<ContainerAllocator>;

  explicit MovecUseIK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : circle_params(_init)
  {
    (void)_init;
  }

  explicit MovecUseIK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : circle_params(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _circle_params_type =
    arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator>;
  _circle_params_type circle_params;

  // setters for named parameter idiom
  Type & set__circle_params(
    const arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator> & _arg)
  {
    this->circle_params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Request
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Request
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovecUseIK_Request_ & other) const
  {
    if (this->circle_params != other.circle_params) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovecUseIK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovecUseIK_Request_

// alias to use template instance with default allocator
using MovecUseIK_Request =
  arms_ros2_control_msgs::srv::MovecUseIK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arms_ros2_control_msgs


#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Response __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Response __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovecUseIK_Response_
{
  using Type = MovecUseIK_Response_<ContainerAllocator>;

  explicit MovecUseIK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->estimated_duration = 0.0;
    }
  }

  explicit MovecUseIK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->estimated_duration = 0.0;
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

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Response
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Response
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovecUseIK_Response_ & other) const
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
    return true;
  }
  bool operator!=(const MovecUseIK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovecUseIK_Response_

// alias to use template instance with default allocator
using MovecUseIK_Response =
  arms_ros2_control_msgs::srv::MovecUseIK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arms_ros2_control_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Event __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Event __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovecUseIK_Event_
{
  using Type = MovecUseIK_Event_<ContainerAllocator>;

  explicit MovecUseIK_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MovecUseIK_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::srv::MovecUseIK_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arms_ros2_control_msgs::srv::MovecUseIK_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Event
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__srv__MovecUseIK_Event
    std::shared_ptr<arms_ros2_control_msgs::srv::MovecUseIK_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovecUseIK_Event_ & other) const
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
  bool operator!=(const MovecUseIK_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovecUseIK_Event_

// alias to use template instance with default allocator
using MovecUseIK_Event =
  arms_ros2_control_msgs::srv::MovecUseIK_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arms_ros2_control_msgs

namespace arms_ros2_control_msgs
{

namespace srv
{

struct MovecUseIK
{
  using Request = arms_ros2_control_msgs::srv::MovecUseIK_Request;
  using Response = arms_ros2_control_msgs::srv::MovecUseIK_Response;
  using Event = arms_ros2_control_msgs::srv::MovecUseIK_Event;
};

}  // namespace srv

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__SRV__DETAIL__MOVEC_USE_IK__STRUCT_HPP_
