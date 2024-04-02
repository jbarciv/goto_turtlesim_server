// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/Goto.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__GOTO__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__GOTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Goto in the package custom_interfaces.
typedef struct custom_interfaces__srv__Goto_Request
{
  float x;
  float y;
  float speed;
} custom_interfaces__srv__Goto_Request;

// Struct for a sequence of custom_interfaces__srv__Goto_Request.
typedef struct custom_interfaces__srv__Goto_Request__Sequence
{
  custom_interfaces__srv__Goto_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Goto_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Goto in the package custom_interfaces.
typedef struct custom_interfaces__srv__Goto_Response
{
  int64_t succes;
} custom_interfaces__srv__Goto_Response;

// Struct for a sequence of custom_interfaces__srv__Goto_Response.
typedef struct custom_interfaces__srv__Goto_Response__Sequence
{
  custom_interfaces__srv__Goto_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Goto_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__GOTO__STRUCT_H_
