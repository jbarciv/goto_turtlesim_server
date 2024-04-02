# ROS2 Project
The aim of this project in to use and put into practice all the knowledge received during the ROS2 Course. 

## Content

1) [Description](#description)
2) [Basic Installation](#basic-installations)
3) [Description](#description)
4) [Description](#description)
5) [Description](#description)

## Description
### Tools
The tools that are going to be used are:
- Turtlesim (more info [here](https://docs.ros.org/en/humble/Tutorials/Beginner-CLI-Tools/Introducing-Turtlesim/Introducing-Turtlesim.html)). Using only the following two topics:
    - `/turtleX/pose`
    - `/turtleX/cmd_vel`
- ROS2 Humble in Ubuntu 22.04.
- C++ ROS interface.

### What?
We will create a new package containing a ROS2 node with the following two service servers:
- Service 1: `/go_to`. When this service is called, the robot should reach a goal point from the current position with a desired speed. This service message request should consist of 3 fields: {x, y, speed} being `x` and `y` the goal position and `speed` the average speed desired; the response of this service should be a boolean that indicates if the command has been received properly.
- Service 2: `/follow_path`. When this service is called, the robot should follow a path made with an array of points in the same order. This service message request should consist of 3 fields: {x[], y[], speed} being `x[]` and `y[]` goal position arrays and `speed` the average speed desired; the response of this service should be a boolean that indicates if the command has been received properly.

### Some constraints

----------------------------< TODO >----------------------------

## Basic Installations

> First it is really recommended to read Lectures 1 and 2 from the `Documentation` folder. There you can find some tips and command line examples for setting ROS2 in your laptop.

### Check about Turtlesim
Install `turtlesim` with:
```
sudo apt install ros-humble-turtlesim
```
or check if it is already installed with:
```
ros2 pkg executables turtlesim
```
You can execute one `node` as:
```
ros2 run turtlesim turtlesim_node
```
and play around with (moving the turtle with the keyboard arrows):
```
ros2 run turtlesim turtle_teleop_key
```

### Create project and build
Open a new terminal and type:
```
mkdir -p ros2-project/src && cd ros2-project && colcon build
```
we are creating a new project and compiling it.

Now, you can use the following command so that every time you open a new terminal the information regarding the project could be sourced:
```
echo "source ~/ros2-project/install/local_setup.bash" >> ~/.bashrc
```

### Initial steps with Turtlesim
The first thing to do is check what type of messages are goind to be shared:
```
ros2 topic list
```
will output the following:
```
/parameter_events
/rosout
/turtle1/cmd_vel
/turtle1/color_sensor
/turtle1/pose
```
we are interested in `/turtle1/pose` and `/turtle1/cmd_vel`.

Let's see the messages' type with `ros2 topic info /turtle1/pose` and `ros2 topic info /turtle1/cmd_vel`. The output will give is information like the following:
- **/turtle1/cmd_vel**: `geometry_msgs/msg/Twist`
- **/turtle1/pose**: `turtlesim/msg/Pose` 

More specifically, the data structure can be seen using `ros2 interface show geometry_msgs/msg/Twist` or `ros2 interface show turtlesim/msg/Pose`. You will see the following:
```
# This expresses velocity in free space broken into its linear and angular parts.

Vector3  linear
	float64 x
	float64 y
	float64 z
Vector3  angular
	float64 x
	float64 y
	float64 z
```
and 
```
float32 x
float32 y
float32 theta

float32 linear_velocity
float32 angular_velocity
```

### Creating the package    
We can create a package called `two_server_controllers` from the `src` folder with:
```
ros2 pkg create two_server_controllers --dependencies rclcpp std_srvs
```

### First Node
Firstly, we are going to create a node which given a goal position moves the turtle there.

- `goto.cpp`:
	- **Headers**: we are using rclcpp, geometry_msgs and turtlesim. `.hpp` is mandatory.
		```
		#include "rclcpp/rclcpp.hpp"
		#include "geometry_msgs/msg/twist.hpp"
		#include "turtlesim/msg/pose.hpp"
		```
	- **Class**: the node is created as a class that inherits from the `Node` class.
		```
		class GoToGoal : public rclcpp::Node
		{
		public:
		GoToGoal() : Node("go_to_goal")
		{
			// create the publisher
			// create the subscriber
			// create a wall timer
			// call if necessary any other function
		}
		private:
			// define functions as needed
			// define the callback function
			// declare variables
		};
		```
	- **main**: the main is defined with the usual instructions.
		```
		int main(int argc, char **argv) {
			rclcpp::init(argc, argv);
			rclcpp::spin(std::make_shared<GoToGoal>());
			rclcpp::shutdown();
			return 0;
		}
		```
### Maths for Turtlesim movement

----------------------------< TODO >----------------------------

### Creating .srv files
Within the package, we can create a new folder called `srv`.
```
mkdir srv
```
and there create two files: `goto.srv` and `followpath.srv`.
Inside, write the following:

- For the `goto` service:
```
float32 x
float32 y
float32 speed
---
bool success
```
- For the `followpath` service:
```
float32[] x
float32[] y
float32[] speed
---
bool success
```
### CMakeList.txt and package.xml
To convert the interfaces you defined into language-specific code (like C++ or python) so that they can be used in those languages, add the following lines to `CMakeLists.txt`:
```
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/goto.srv"
  "srv/followpath.srv"
  DEPENDENCIES #Add here packages that above messages depend on
)
``` 
Regarding the `package.xml`:

Because the interfaces rely on `rosidl_default_generators` for generating language-specific code, you need to declare a build tool dependency on it. `rosidl_default_runtime` is a runtime or execution-stage dependency, needed to be able to use the interfaces later. The `rosidl_interface_packages` is the name of the dependency group that your package, tutorial_interfaces, should be associated with, declared using the `<member_of_group>` tag.

Add the following lines within the `<package>` element of `package.xml`:
```
<buildtool_depend>rosidl_default_generators</buildtool_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<member_of_group>rosidl_interface_packages</member_of_group>
```

### Check your interface creation

We will use
```
ros2 interface show tutorial_interfaces/msg/Num
```

