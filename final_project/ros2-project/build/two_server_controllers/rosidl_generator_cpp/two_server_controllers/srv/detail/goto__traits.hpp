// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from two_server_controllers:srv/Goto.idl
// generated code does not contain a copyright notice

#ifndef TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__TRAITS_HPP_
#define TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "two_server_controllers/srv/detail/goto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace two_server_controllers
{

namespace srv
{

inline void to_flow_style_yaml(
  const Goto_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Goto_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Goto_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace two_server_controllers

namespace rosidl_generator_traits
{

[[deprecated("use two_server_controllers::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const two_server_controllers::srv::Goto_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  two_server_controllers::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use two_server_controllers::srv::to_yaml() instead")]]
inline std::string to_yaml(const two_server_controllers::srv::Goto_Request & msg)
{
  return two_server_controllers::srv::to_yaml(msg);
}

template<>
inline const char * data_type<two_server_controllers::srv::Goto_Request>()
{
  return "two_server_controllers::srv::Goto_Request";
}

template<>
inline const char * name<two_server_controllers::srv::Goto_Request>()
{
  return "two_server_controllers/srv/Goto_Request";
}

template<>
struct has_fixed_size<two_server_controllers::srv::Goto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<two_server_controllers::srv::Goto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<two_server_controllers::srv::Goto_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace two_server_controllers
{

namespace srv
{

inline void to_flow_style_yaml(
  const Goto_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: succes
  {
    out << "succes: ";
    rosidl_generator_traits::value_to_yaml(msg.succes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Goto_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: succes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "succes: ";
    rosidl_generator_traits::value_to_yaml(msg.succes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Goto_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace two_server_controllers

namespace rosidl_generator_traits
{

[[deprecated("use two_server_controllers::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const two_server_controllers::srv::Goto_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  two_server_controllers::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use two_server_controllers::srv::to_yaml() instead")]]
inline std::string to_yaml(const two_server_controllers::srv::Goto_Response & msg)
{
  return two_server_controllers::srv::to_yaml(msg);
}

template<>
inline const char * data_type<two_server_controllers::srv::Goto_Response>()
{
  return "two_server_controllers::srv::Goto_Response";
}

template<>
inline const char * name<two_server_controllers::srv::Goto_Response>()
{
  return "two_server_controllers/srv/Goto_Response";
}

template<>
struct has_fixed_size<two_server_controllers::srv::Goto_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<two_server_controllers::srv::Goto_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<two_server_controllers::srv::Goto_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<two_server_controllers::srv::Goto>()
{
  return "two_server_controllers::srv::Goto";
}

template<>
inline const char * name<two_server_controllers::srv::Goto>()
{
  return "two_server_controllers/srv/Goto";
}

template<>
struct has_fixed_size<two_server_controllers::srv::Goto>
  : std::integral_constant<
    bool,
    has_fixed_size<two_server_controllers::srv::Goto_Request>::value &&
    has_fixed_size<two_server_controllers::srv::Goto_Response>::value
  >
{
};

template<>
struct has_bounded_size<two_server_controllers::srv::Goto>
  : std::integral_constant<
    bool,
    has_bounded_size<two_server_controllers::srv::Goto_Request>::value &&
    has_bounded_size<two_server_controllers::srv::Goto_Response>::value
  >
{
};

template<>
struct is_service<two_server_controllers::srv::Goto>
  : std::true_type
{
};

template<>
struct is_service_request<two_server_controllers::srv::Goto_Request>
  : std::true_type
{
};

template<>
struct is_service_response<two_server_controllers::srv::Goto_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__TRAITS_HPP_
