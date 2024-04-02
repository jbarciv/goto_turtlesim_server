// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/Goto.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__GOTO__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__GOTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/goto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Goto_Request_speed
{
public:
  explicit Init_Goto_Request_speed(::custom_interfaces::srv::Goto_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Goto_Request speed(::custom_interfaces::srv::Goto_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Goto_Request msg_;
};

class Init_Goto_Request_y
{
public:
  explicit Init_Goto_Request_y(::custom_interfaces::srv::Goto_Request & msg)
  : msg_(msg)
  {}
  Init_Goto_Request_speed y(::custom_interfaces::srv::Goto_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Goto_Request_speed(msg_);
  }

private:
  ::custom_interfaces::srv::Goto_Request msg_;
};

class Init_Goto_Request_x
{
public:
  Init_Goto_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Goto_Request_y x(::custom_interfaces::srv::Goto_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Goto_Request_y(msg_);
  }

private:
  ::custom_interfaces::srv::Goto_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Goto_Request>()
{
  return custom_interfaces::srv::builder::Init_Goto_Request_x();
}

}  // namespace custom_interfaces


namespace custom_interfaces
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
  ::custom_interfaces::srv::Goto_Response succes(::custom_interfaces::srv::Goto_Response::_succes_type arg)
  {
    msg_.succes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Goto_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Goto_Response>()
{
  return custom_interfaces::srv::builder::Init_Goto_Response_succes();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__GOTO__BUILDER_HPP_
