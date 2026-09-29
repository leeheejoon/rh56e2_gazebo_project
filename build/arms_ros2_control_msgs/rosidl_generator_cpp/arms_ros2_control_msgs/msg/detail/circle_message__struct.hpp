// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arms_ros2_control_msgs:msg/CircleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arms_ros2_control_msgs/msg/circle_message.hpp"


#ifndef ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__STRUCT_HPP_
#define ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'midpoint'
// Member 'endpoint'
// Member 'right_midpoint'
// Member 'right_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'center'
// Member 'right_center'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'axis'
// Member 'right_axis'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arms_ros2_control_msgs__msg__CircleMessage __attribute__((deprecated))
#else
# define DEPRECATED__arms_ros2_control_msgs__msg__CircleMessage __declspec(deprecated)
#endif

namespace arms_ros2_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CircleMessage_
{
  using Type = CircleMessage_<ContainerAllocator>;

  explicit CircleMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : midpoint(_init),
    endpoint(_init),
    right_midpoint(_init),
    right_endpoint(_init),
    center(_init),
    axis(_init),
    right_center(_init),
    right_axis(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rotate_angle = 0.0;
      this->right_rotate_angle = 0.0;
      this->max_linear_velocity = 0.0;
      this->max_linear_acceleration = 0.0;
      this->max_linear_jerk = 0.0;
      this->max_angular_velocity = 0.0;
      this->max_angular_acceleration = 0.0;
      this->max_angular_jerk = 0.0;
      this->duration = 0.0;
      this->use_three_point_method = false;
      this->use_slerp_for_orientation = false;
      this->time_mode = false;
      this->frame_id = "";
      this->arm_name = "";
      this->ik_type = "";
    }
  }

  explicit CircleMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : midpoint(_alloc, _init),
    endpoint(_alloc, _init),
    right_midpoint(_alloc, _init),
    right_endpoint(_alloc, _init),
    center(_alloc, _init),
    axis(_alloc, _init),
    right_center(_alloc, _init),
    right_axis(_alloc, _init),
    frame_id(_alloc),
    arm_name(_alloc),
    ik_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rotate_angle = 0.0;
      this->right_rotate_angle = 0.0;
      this->max_linear_velocity = 0.0;
      this->max_linear_acceleration = 0.0;
      this->max_linear_jerk = 0.0;
      this->max_angular_velocity = 0.0;
      this->max_angular_acceleration = 0.0;
      this->max_angular_jerk = 0.0;
      this->duration = 0.0;
      this->use_three_point_method = false;
      this->use_slerp_for_orientation = false;
      this->time_mode = false;
      this->frame_id = "";
      this->arm_name = "";
      this->ik_type = "";
    }
  }

  // field types and members
  using _midpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _midpoint_type midpoint;
  using _endpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _endpoint_type endpoint;
  using _right_midpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _right_midpoint_type right_midpoint;
  using _right_endpoint_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _right_endpoint_type right_endpoint;
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _axis_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _axis_type axis;
  using _rotate_angle_type =
    double;
  _rotate_angle_type rotate_angle;
  using _right_center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _right_center_type right_center;
  using _right_axis_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _right_axis_type right_axis;
  using _right_rotate_angle_type =
    double;
  _right_rotate_angle_type right_rotate_angle;
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
  using _use_three_point_method_type =
    bool;
  _use_three_point_method_type use_three_point_method;
  using _use_slerp_for_orientation_type =
    bool;
  _use_slerp_for_orientation_type use_slerp_for_orientation;
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
  Type & set__midpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->midpoint = _arg;
    return *this;
  }
  Type & set__endpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->endpoint = _arg;
    return *this;
  }
  Type & set__right_midpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->right_midpoint = _arg;
    return *this;
  }
  Type & set__right_endpoint(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->right_endpoint = _arg;
    return *this;
  }
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__axis(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->axis = _arg;
    return *this;
  }
  Type & set__rotate_angle(
    const double & _arg)
  {
    this->rotate_angle = _arg;
    return *this;
  }
  Type & set__right_center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->right_center = _arg;
    return *this;
  }
  Type & set__right_axis(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->right_axis = _arg;
    return *this;
  }
  Type & set__right_rotate_angle(
    const double & _arg)
  {
    this->right_rotate_angle = _arg;
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
  Type & set__use_three_point_method(
    const bool & _arg)
  {
    this->use_three_point_method = _arg;
    return *this;
  }
  Type & set__use_slerp_for_orientation(
    const bool & _arg)
  {
    this->use_slerp_for_orientation = _arg;
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
    arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arms_ros2_control_msgs__msg__CircleMessage
    std::shared_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arms_ros2_control_msgs__msg__CircleMessage
    std::shared_ptr<arms_ros2_control_msgs::msg::CircleMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CircleMessage_ & other) const
  {
    if (this->midpoint != other.midpoint) {
      return false;
    }
    if (this->endpoint != other.endpoint) {
      return false;
    }
    if (this->right_midpoint != other.right_midpoint) {
      return false;
    }
    if (this->right_endpoint != other.right_endpoint) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->axis != other.axis) {
      return false;
    }
    if (this->rotate_angle != other.rotate_angle) {
      return false;
    }
    if (this->right_center != other.right_center) {
      return false;
    }
    if (this->right_axis != other.right_axis) {
      return false;
    }
    if (this->right_rotate_angle != other.right_rotate_angle) {
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
    if (this->use_three_point_method != other.use_three_point_method) {
      return false;
    }
    if (this->use_slerp_for_orientation != other.use_slerp_for_orientation) {
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
  bool operator!=(const CircleMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CircleMessage_

// alias to use template instance with default allocator
using CircleMessage =
  arms_ros2_control_msgs::msg::CircleMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arms_ros2_control_msgs

#endif  // ARMS_ROS2_CONTROL_MSGS__MSG__DETAIL__CIRCLE_MESSAGE__STRUCT_HPP_
