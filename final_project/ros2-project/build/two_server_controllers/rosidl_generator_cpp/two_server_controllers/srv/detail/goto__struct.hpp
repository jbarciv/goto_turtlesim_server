// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from two_server_controllers:srv/Goto.idl
// generated code does not contain a copyright notice

#ifndef TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__STRUCT_HPP_
#define TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__two_server_controllers__srv__Goto_Request __attribute__((deprecated))
#else
# define DEPRECATED__two_server_controllers__srv__Goto_Request __declspec(deprecated)
#endif

namespace two_server_controllers
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Goto_Request_
{
  using Type = Goto_Request_<ContainerAllocator>;

  explicit Goto_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit Goto_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    two_server_controllers::srv::Goto_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const two_server_controllers::srv::Goto_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      two_server_controllers::srv::Goto_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      two_server_controllers::srv::Goto_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__two_server_controllers__srv__Goto_Request
    std::shared_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__two_server_controllers__srv__Goto_Request
    std::shared_ptr<two_server_controllers::srv::Goto_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Goto_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Goto_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Goto_Request_

// alias to use template instance with default allocator
using Goto_Request =
  two_server_controllers::srv::Goto_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace two_server_controllers


#ifndef _WIN32
# define DEPRECATED__two_server_controllers__srv__Goto_Response __attribute__((deprecated))
#else
# define DEPRECATED__two_server_controllers__srv__Goto_Response __declspec(deprecated)
#endif

namespace two_server_controllers
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Goto_Response_
{
  using Type = Goto_Response_<ContainerAllocator>;

  explicit Goto_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succes = 0l;
    }
  }

  explicit Goto_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succes = 0l;
    }
  }

  // field types and members
  using _succes_type =
    int32_t;
  _succes_type succes;

  // setters for named parameter idiom
  Type & set__succes(
    const int32_t & _arg)
  {
    this->succes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    two_server_controllers::srv::Goto_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const two_server_controllers::srv::Goto_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      two_server_controllers::srv::Goto_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      two_server_controllers::srv::Goto_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__two_server_controllers__srv__Goto_Response
    std::shared_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__two_server_controllers__srv__Goto_Response
    std::shared_ptr<two_server_controllers::srv::Goto_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Goto_Response_ & other) const
  {
    if (this->succes != other.succes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Goto_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Goto_Response_

// alias to use template instance with default allocator
using Goto_Response =
  two_server_controllers::srv::Goto_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace two_server_controllers

namespace two_server_controllers
{

namespace srv
{

struct Goto
{
  using Request = two_server_controllers::srv::Goto_Request;
  using Response = two_server_controllers::srv::Goto_Response;
};

}  // namespace srv

}  // namespace two_server_controllers

#endif  // TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__STRUCT_HPP_
