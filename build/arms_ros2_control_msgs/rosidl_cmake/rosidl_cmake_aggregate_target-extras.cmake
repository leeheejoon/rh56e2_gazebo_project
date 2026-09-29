# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target arms_ros2_control_msgs::arms_ros2_control_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${arms_ros2_control_msgs_TARGETS}.
if(arms_ros2_control_msgs_TARGETS AND NOT TARGET arms_ros2_control_msgs::arms_ros2_control_msgs)
  add_library(arms_ros2_control_msgs::arms_ros2_control_msgs INTERFACE IMPORTED)
  set_target_properties(arms_ros2_control_msgs::arms_ros2_control_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${arms_ros2_control_msgs_TARGETS}")
endif()
