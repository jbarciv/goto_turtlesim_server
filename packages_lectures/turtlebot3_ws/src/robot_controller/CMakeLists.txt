cmake_minimum_required(VERSION 3.8)
project(robot_controller) # same name as the package

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(talker src/publisher_cmd.cpp)
ament_target_dependencies(talker rclcpp geometry_msgs)

add_executable(listener src/subscriber_odom.cpp)
ament_target_dependencies(listener rclcpp nav_msgs)

add_executable(random src/random.cpp)
ament_target_dependencies(random rclcpp geometry_msgs)

install(TARGETS
  talker
  listener
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)
ament_package()
