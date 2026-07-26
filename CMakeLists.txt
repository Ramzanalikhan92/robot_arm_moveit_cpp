cmake_minimum_required(VERSION 3.8)

project(robot_arm_moveit_cpp)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(move_robot
  src/move_robot.cpp
)

ament_target_dependencies(move_robot
  rclcpp
  moveit_ros_planning_interface
  geometry_msgs
)

install(
  TARGETS
  move_robot
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()