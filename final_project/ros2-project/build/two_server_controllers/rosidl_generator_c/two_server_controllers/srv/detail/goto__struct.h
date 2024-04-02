// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from two_server_controllers:srv/Goto.idl
// generated code does not contain a copyright notice

#ifndef TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__STRUCT_H_
#define TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Goto in the package two_server_controllers.
typedef struct two_server_controllers__srv__Goto_Request
{
  float x;
  float y;
  float speed;
} two_server_controllers__srv__Goto_Request;

// Struct for a sequence of two_server_controllers__srv__Goto_Request.
typedef struct two_server_controllers__srv__Goto_Request__Sequence
{
  two_server_controllers__srv__Goto_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} two_server_controllers__srv__Goto_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Goto in the package two_server_controllers.
typedef struct two_server_controllers__srv__Goto_Response
{
  int32_t succes;
} two_server_controllers__srv__Goto_Response;

// Struct for a sequence of two_server_controllers__srv__Goto_Response.
typedef struct two_server_controllers__srv__Goto_Response__Sequence
{
  two_server_controllers__srv__Goto_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} two_server_controllers__srv__Goto_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TWO_SERVER_CONTROLLERS__SRV__DETAIL__GOTO__STRUCT_H_
