// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from two_server_controllers:srv/Goto.idl
// generated code does not contain a copyright notice

#ifndef TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__BUILDER_HPP_
#define TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "two_server_controllers/srv/detail/goto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace two_server_controllers
{

namespace srv
{

namespace builder
{

class Init_Goto_Request_speed
{
public:
  explicit Init_Goto_Request_speed(::two_server_controllers::srv::Goto_Request & msg)
  : msg_(msg)
  {}
  ::two_server_controllers::srv::Goto_Request speed(::two_server_controllers::srv::Goto_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::two_server_controllers::srv::Goto_Request msg_;
};

class Init_Goto_Request_y
{
public:
  explicit Init_Goto_Request_y(::two_server_controllers::srv::Goto_Request & msg)
  : msg_(msg)
  {}
  Init_Goto_Request_speed y(::two_server_controllers::srv::Goto_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Goto_Request_speed(msg_);
  }

private:
  ::two_server_controllers::srv::Goto_Request msg_;
};

class Init_Goto_Request_x
{
public:
  Init_Goto_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Goto_Request_y x(::two_server_controllers::srv::Goto_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Goto_Request_y(msg_);
  }

private:
  ::two_server_controllers::srv::Goto_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::two_server_controllers::srv::Goto_Request>()
{
  return two_server_controllers::srv::builder::Init_Goto_Request_x();
}

}  // namespace two_server_controllers


namespace two_server_controllers
{

namespace srv
{

namespace builder
{

class Init_Goto_Response_succes
{
public:
  Init_Goto_Response_succes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::two_server_controllers::srv::Goto_Response succes(::two_server_controllers::srv::Goto_Response::_succes_type arg)
  {
    msg_.succes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::two_server_controllers::srv::Goto_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::two_server_controllers::srv::Goto_Response>()
{
  return two_server_controllers::srv::builder::Init_Goto_Response_succes();
}

}  // namespace two_server_controllers

#endif  // TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__BUILDER_HPP_
