# Panda Robot Arm Control using ROS 2 & MoveIt 2

A ROS 2 Humble based robotic arm control project using MoveIt 2 motion planning framework.

## Features

- Franka Panda robot simulation
- MoveIt 2 motion planning
- Cartesian pose control
- Point-to-point robotic arm movement
- ROS 2 control integration

## Environment

- ROS 2 Humble
- MoveIt 2
- RViz2
- C++

## Project Structure
robot_arm_moveit_cpp/
├── CMakeLists.txt
├── package.xml
└── src/
└── move_robot.cpp


## Run Project

### Terminal 1

Launch Panda robot:

``bashros2 launch moveit_resources_panda_moveit_config demo.launch.py
Terminal 2

Source workspace:

source ~/ros2_ws/install/setup.bash

Run controller:

ros2 run robot_arm_moveit_cpp move_robot
Motion Example

Robot moves between Cartesian poses:

Point A:

x = 0.30
y = 0.20
z = 0.40

Point B:

x = 0.45
y = -0.15
z = 0.35
Author

Ramzan Ali Khan


Save.

---

### 2. Upload README

Run:

``bash
git add README.md
git commit -m "Add project documentation"
git push
