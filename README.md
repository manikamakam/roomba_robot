# roomba_robot
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## Author

Sri Manika Makam

## Overview

The project implements roomba type behaviour of a robot by simulating obstacle avoidance on a turtle bot. 

## Dependencies

Ubuntu 16.04
ROS Kinetic
Turtlebot packages: To install, turtlebot packages, run the following command in terminal:

```
sudo apt install ros-kinetic-turtlebot-gazebo ros-kinetic-turtlebot-apps ros-kinetic-turtlebot-rviz-launchers
```

## Set up and build workspace

Run the following commands in terminal:

```
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
catkin_make
source devel/setup.bash
cd src/
git clone --recursive https://github.com/manikamakam/roomba_robot.git
cd ..
catkin_make
```

## Running demo

Using roslaunch

Type the following command in a new terminal:

```
roslaunch roomba_robot walkerDemo.launch
```

Using rosrun

Run roscore in a new terminal

```
roscore
```

Launch turtlebot gazebo simulation

```
roslaunch turtlebot_gazebo turtlebot_world.launch
```

Run the turtlebot node by running the following command

```
rosrun roomba_robot roomba_robot 
```

## Recording using rosbag files

Record the rostopics using the following command with the launch file:

```
roslaunch roomba_robot walkerDemo.launch recordFlag:=true
```
Recorded bag file will be stored in the results folder

To record for a specific time

```
roslaunch roomba_robot walkerDemo.launch recordFlag:=true seconds:=20
```

In the above case rosbag will record for 20 seconds

## Playing bag files

Navigate to the results folder

```
cd ~/catkin_ws/src/roomba_robot/results 
```

Play the bag file

```
rosbag play walkerRecord.bag
```

Verify the published topic by echoing the following topic

```
rostopic echo /mobile_base/commands/velocity
```
