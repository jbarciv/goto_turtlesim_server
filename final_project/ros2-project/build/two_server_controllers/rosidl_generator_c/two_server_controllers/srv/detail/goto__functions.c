// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from two_server_controllers:srv/Goto.idl
// generated code does not contain a copyright notice
#include "two_server_controllers/srv/detail/goto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
two_server_controllers__srv__Goto_Request__init(two_server_controllers__srv__Goto_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // speed
  return true;
}

void
two_server_controllers__srv__Goto_Request__fini(two_server_controllers__srv__Goto_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // speed
}

bool
two_server_controllers__srv__Goto_Request__are_equal(const two_server_controllers__srv__Goto_Request * lhs, const two_server_controllers__srv__Goto_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
two_server_controllers__srv__Goto_Request__copy(
  const two_server_controllers__srv__Goto_Request * input,
  two_server_controllers__srv__Goto_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // speed
  output->speed = input->speed;
  return true;
}

two_server_controllers__srv__Goto_Request *
two_server_controllers__srv__Goto_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  two_server_controllers__srv__Goto_Request * msg = (two_server_controllers__srv__Goto_Request *)allocator.allocate(sizeof(two_server_controllers__srv__Goto_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(two_server_controllers__srv__Goto_Request));
  bool success = two_server_controllers__srv__Goto_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
two_server_controllers__srv__Goto_Request__destroy(two_server_controllers__srv__Goto_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    two_server_controllers__srv__Goto_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
two_server_controllers__srv__Goto_Request__Sequence__init(two_server_controllers__srv__Goto_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  two_server_controllers__srv__Goto_Request * data = NULL;

  if (size) {
    data = (two_server_controllers__srv__Goto_Request *)allocator.zero_allocate(size, sizeof(two_server_controllers__srv__Goto_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = two_server_controllers__srv__Goto_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        two_server_controllers__srv__Goto_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
two_server_controllers__srv__Goto_Request__Sequence__fini(two_server_controllers__srv__Goto_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      two_server_controllers__srv__Goto_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

two_server_controllers__srv__Goto_Request__Sequence *
two_server_controllers__srv__Goto_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  two_server_controllers__srv__Goto_Request__Sequence * array = (two_server_controllers__srv__Goto_Request__Sequence *)allocator.allocate(sizeof(two_server_controllers__srv__Goto_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = two_server_controllers__srv__Goto_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
two_server_controllers__srv__Goto_Request__Sequence__destroy(two_server_controllers__srv__Goto_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    two_server_controllers__srv__Goto_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
two_server_controllers__srv__Goto_Request__Sequence__are_equal(const two_server_controllers__srv__Goto_Request__Sequence * lhs, const two_server_controllers__srv__Goto_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!two_server_controllers__srv__Goto_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
two_server_controllers__srv__Goto_Request__Sequence__copy(
  const two_server_controllers__srv__Goto_Request__Sequence * input,
  two_server_controllers__srv__Goto_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(two_server_controllers__srv__Goto_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    two_server_controllers__srv__Goto_Request * data =
      (two_server_controllers__srv__Goto_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!two_server_controllers__srv__Goto_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          two_server_controllers__srv__Goto_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!two_server_controllers__srv__Goto_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
two_server_controllers__srv__Goto_Response__init(two_server_controllers__srv__Goto_Response * msg)
{
  if (!msg) {
    return false;
  }
  // succes
  return true;
}

void
two_server_controllers__srv__Goto_Response__fini(two_server_controllers__srv__Goto_Response * msg)
{
  if (!msg) {
    return;
  }
  // succes
}

bool
two_server_controllers__srv__Goto_Response__are_equal(const two_server_controllers__srv__Goto_Response * lhs, const two_server_controllers__srv__Goto_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // succes
  if (lhs->succes != rhs->succes) {
    return false;
  }
  return true;
}

bool
two_server_controllers__srv__Goto_Response__copy(
  const two_server_controllers__srv__Goto_Response * input,
  two_server_controllers__srv__Goto_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // succes
  output->succes = input->succes;
  return true;
}

two_server_controllers__srv__Goto_Response *
two_server_controllers__srv__Goto_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  two_server_controllers__srv__Goto_Response * msg = (two_server_controllers__srv__Goto_Response *)allocator.allocate(sizeof(two_server_controllers__srv__Goto_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(two_server_controllers__srv__Goto_Response));
  bool success = two_server_controllers__srv__Goto_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
two_server_controllers__srv__Goto_Response__destroy(two_server_controllers__srv__Goto_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    two_server_controllers__srv__Goto_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
two_server_controllers__srv__Goto_Response__Sequence__init(two_server_controllers__srv__Goto_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  two_server_controllers__srv__Goto_Response * data = NULL;

  if (size) {
    data = (two_server_controllers__srv__Goto_Response *)allocator.zero_allocate(size, sizeof(two_server_controllers__srv__Goto_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = two_server_controllers__srv__Goto_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        two_server_controllers__srv__Goto_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
two_server_controllers__srv__Goto_Response__Sequence__fini(two_server_controllers__srv__Goto_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      two_server_controllers__srv__Goto_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

two_server_controllers__srv__Goto_Response__Sequence *
two_server_controllers__srv__Goto_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  two_server_controllers__srv__Goto_Response__Sequence * array = (two_server_controllers__srv__Goto_Response__Sequence *)allocator.allocate(sizeof(two_server_controllers__srv__Goto_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = two_server_controllers__srv__Goto_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
two_server_controllers__srv__Goto_Response__Sequence__destroy(two_server_controllers__srv__Goto_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    two_server_controllers__srv__Goto_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
two_server_controllers__srv__Goto_Response__Sequence__are_equal(const two_server_controllers__srv__Goto_Response__Sequence * lhs, const two_server_controllers__srv__Goto_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!two_server_controllers__srv__Goto_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
two_server_controllers__srv__Goto_Response__Sequence__copy(
  const two_server_controllers__srv__Goto_Response__Sequence * input,
  two_server_controllers__srv__Goto_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(two_server_controllers__srv__Goto_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    two_server_controllers__srv__Goto_Response * data =
      (two_server_controllers__srv__Goto_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!two_server_controllers__srv__Goto_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          two_server_controllers__srv__Goto_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!two_server_controllers__srv__Goto_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
