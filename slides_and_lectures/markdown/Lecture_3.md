# #3 ROS TOOLS

## Content
- [Rviz visualization](#rviz-visualization)
- [Tf library](#tf-library)
- [Rqt](#rqt)
- [Rosbag](#rosbag)

## Rviz visualization
Initialize `rviz` with
```
ros2 run rviz2 rviz2
```
Do not forget to **save your desired configurations**!

## Tf library
Different coordinate frames that change over time

Install it with:
```
sudo apt-get install ros-humble-tf2-tools
```
You can create a graph (.pdf) with all the conexions between the frames, using the next command. Don't forget to run the `turtlebot` with:
`ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
`
```
ros2 run tf2_tools view_frames
```
If you want to check what transformations are happenning use:
```
ros2 run tf2_ros tf2_monitor
```
If you want to see the values for a specific frame use:
```
ros2 run tf2_ros tf2_echo base_link base_scan
```

### Static transform
- A command line utility for manually sending a static transform.
- If no translation or orientation is provided, the identity transform will be published.
The translation offsets are in meters. The rotation may be provided with roll, pitch, yaw euler angles in radians, or as a quaternion.

Use the following command for help:
```
ros2 run tf2_ros static_transform_publisher --help
```
you will see something like this:
```
usage: static_transform_publisher [--x X] [--y Y] [--z Z] [--qx QX] [--qy QY] [--qz QZ] [--qw QW] [--roll ROLL] [--pitch
PITCH] [--yaw YAW] --frame-id FRAME_ID --child-frame-id CHILD_FRAME_ID
```
The `static_transform_publisher` is designed both as a command-line tool for manual use, as well as for use within launch files for setting static transforms. For example:

```
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            arguments = ['0', '0', '1', '0', '0', '0', 'world', 'mystaticturtle']
        ),
    ])
```

## Rosbag

Record the messages published on one or more topics to a file
```
ros2 bag record -o <bag_file_name> <topic1> <topic2>
```
Replay the file messages
``` 
ros2 bag play <bag_file_name>
```
Check the rosbag information
``` 
ros2 bag info <bag_file_name>
```
## RQT

- General GUI where different plugins may run.
- Main utilities: introspection, logging, topics, services, actions, visualization…

First install the next package:
```
sudo apt-get install ros-humble-rqt-robot-steering
```
Then just type this in the command line:
```
rqt
```
As you will see, it is really simple and very powerfull!
Play around a little bit and discover the rest of utilities. For example, you can use it in order to perform a first test of your system.