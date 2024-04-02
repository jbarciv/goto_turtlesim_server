from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_controller',
            executable='listener',
            name='listener'
        ),
        Node(
            package='robot_controller',
            executable='random',
            name='random'
        ),
    ])