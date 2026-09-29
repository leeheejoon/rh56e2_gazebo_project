cmake_minimum_required(VERSION 3.8)
project(rh56e2_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# 실행 파일 생성
add_executable(
  hand_command_node
  src/hand_command_node.cpp
)

# 실행 파일에 ROS 2 의존성 연결
ament_target_dependencies(
  hand_command_node
  rclcpp
  std_msgs
)

add_executable(
  fsm_init_node
  src/fsm_init_node.cpp
)

ament_target_dependencies(
  fsm_init_node
  rclcpp
  std_msgs
)

# 실행 파일에 ROS 2 의존성 연결
install(
  TARGETS 
   hand_command_node
   fsm_init_node
  DESTINATION lib/${PROJECT_NAME}
)

# 실행 파일에 launch 파일 추가
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
