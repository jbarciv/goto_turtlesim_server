#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

class RandomPublisher : public rclcpp::Node
{
  public:
    RandomPublisher()
    : Node("velocity_publisher"), count_(0)
    {
      // Now we initialize the "publisher" with the "geometry_msgs" message type, to
      // the topic name "cmd_vel".
      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
      // Now we initialize a timer that will cause the "timer_callback" function to
      // be executed twice a second.
      timer_ = this->create_wall_timer(
      500ms, std::bind(&RandomPublisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
      auto message = geometry_msgs::msg::Twist();
      srand (time(NULL));
      int random = rand() % 10 + 1;
      message.angular.z = ((float) random)/8.5;
      message.linear.x = ((float) random)*0.1;
      RCLCPP_INFO(this->get_logger(), "Publishing: theta=%f, v_x=%f", message.angular.z, message.linear.x);
      publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<RandomPublisher>());
  rclcpp::shutdown();
  return 0;
}
