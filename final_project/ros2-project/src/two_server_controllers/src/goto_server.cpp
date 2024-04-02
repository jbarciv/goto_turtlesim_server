#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/srv/goto.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"
#include <iostream>
#include <cmath>
#include <memory>

using namespace std::placeholders;

class GoToGoal : public rclcpp::Node
{
public:
  GoToGoal() : Node("go_to_goal"), flag(1), count_(0)
  {
    velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);

    pose_subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&GoToGoal::pose_callback, this, _1));

    service_ = this->create_service<custom_interfaces::srv::Goto>(
        "goto_server", [this](const std::shared_ptr<custom_interfaces::srv::Goto::Request> request,
                              std::shared_ptr<custom_interfaces::srv::Goto::Response> response) {
          this->go_to(request, response);
        });
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to move the turtle...");
  }

private:

  void go_to(const std::shared_ptr<custom_interfaces::srv::Goto::Request> request,
            std::shared_ptr<custom_interfaces::srv::Goto::Response> response)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to move to a new pose");
    x2 = request->x;
    y2 = request->y;
    my_speed = request->speed;
    flag = 1;
    timer_ = this->create_wall_timer(std::chrono::nanoseconds(10), [=]() { move_to_goal(response); });
  }

  void pose_callback(const turtlesim::msg::Pose::SharedPtr pose)
  {
    x1 = pose->x;
    y1 = pose->y;
    theta = pose->theta;
  }

  void move_to_goal(std::shared_ptr<custom_interfaces::srv::Goto::Response> response)
  {
    ++count_;
    if ((flag == 1) && (count_ > 100))
    {
      RCLCPP_INFO(this->get_logger(), "x1 = %f, y1 = %f", x1, y1);
      kp_linear = (2.0 / sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))) * my_speed;
      RCLCPP_INFO(this->get_logger(), "kp = %f", kp_linear);
      flag = 0;
    }
    else if (flag == 0)
    {
      dist_x = x2 - x1;
      dist_y = y2 - y1;
      euclidean_distance = sqrt(pow(dist_x, 2) + pow(dist_y, 2));
      distance_tolerance = 0.2;
      angle_tolerance = 0.1;

      if (euclidean_distance > distance_tolerance)
      {
        float kp_angular = 10;
        speed.linear.x = kp_linear * euclidean_distance;
        angle = atan2(dist_y, dist_x);
        angle_error = (angle - theta);
        if (angle_error > M_PI)
        {
          angle_error -= 2 * M_PI;
        }
        else if (angle_error < -M_PI)
        {
          angle_error += 2 * M_PI;
        }
        speed.angular.z = kp_angular * angle_error;
        velocity_publisher_->publish(speed);
      }
      else
      {
        speed.linear.x = 0.0;
        speed.angular.z = 0.0;
        velocity_publisher_->publish(speed);
        RCLCPP_INFO(this->get_logger(), "Goal (%2.f, %2.f) reached!", x2, y2);
        timer_->cancel();
        response->succes = 0; // Corrected typo in 'success'
        rmw_request_id_t req_id;
        service_->send_response(req_id, *response);
      }
    }
  }
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr pose_subscriber_;
  rclcpp::Service<custom_interfaces::srv::Goto>::SharedPtr service_;
  rclcpp::TimerBase::SharedPtr timer_;
  geometry_msgs::msg::Twist speed;
  float x1, y1, x2, y2, theta, dist_x, dist_y, my_speed;
  float euclidean_distance, distance_tolerance;
  float angle, angle_tolerance, angle_error;
  float kp_linear;
  int flag;
  int count_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<GoToGoal>());
  rclcpp::shutdown();
  return 0;
}
