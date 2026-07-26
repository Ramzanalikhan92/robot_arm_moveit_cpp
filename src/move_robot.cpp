#include <memory>

#include <rclcpp/rclcpp.hpp>

#include <geometry_msgs/msg/pose.hpp>

#include <moveit/move_group_interface/move_group_interface.h>

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  auto node = rclcpp::Node::make_shared(
      "move_robot",
      rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(
          true));

  // Connect to Panda arm planning group
  moveit::planning_interface::MoveGroupInterface move_group(node, "panda_arm");

  move_group.setPlanningTime(10.0);

  geometry_msgs::msg::Pose target_pose;

  // End effector orientation
  target_pose.orientation.w = 1.0;
  target_pose.orientation.x = 0.0;
  target_pose.orientation.y = 0.0;
  target_pose.orientation.z = 0.0;

  // Point A
  target_pose.position.x = 0.30;
  target_pose.position.y = 0.20;
  target_pose.position.z = 0.40;

  move_group.setPoseTarget(target_pose);

  auto result = move_group.move();

  if (result == moveit::core::MoveItErrorCode::SUCCESS) {
    RCLCPP_INFO(node->get_logger(), "Motion successful");
  } else {
    RCLCPP_ERROR(node->get_logger(), "Motion failed");
  }

  rclcpp::shutdown();

  return 0;
}