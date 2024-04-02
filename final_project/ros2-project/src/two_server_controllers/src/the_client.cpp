#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/srv/goto.hpp"                                       

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 4) { 
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: the_client X Y SPEED"); 
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("goto_server"); 
  rclcpp::Client<custom_interfaces::srv::Goto>::SharedPtr client =                
    node->create_client<custom_interfaces::srv::Goto>("goto_server");          

  auto request = std::make_shared<custom_interfaces::srv::Goto::Request>();       
  request->x = atoll(argv[1]);
  request->y = atoll(argv[2]);
  request->speed = atoll(argv[3]);                                                              

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Mission finished?: %ld", result.get()->succes);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service goto_server");    
  }

  rclcpp::shutdown();
  return 0;
}