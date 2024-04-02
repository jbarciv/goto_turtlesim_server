cmake_minimum_required(VERSION 3.8)
project(two_server_controllers)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(custom_interfaces REQUIRED)

add_executable(go_to_goal src/goto_server.cpp)
ament_target_dependencies(go_to_goal rclcpp turtlesim geometry_msgs custom_interfaces)

add_executable(the_client src/the_client.cpp)
ament_target_dependencies(the_client rclcpp custom_interfaces)

install(TARGETS
  go_to_goal
  the_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
