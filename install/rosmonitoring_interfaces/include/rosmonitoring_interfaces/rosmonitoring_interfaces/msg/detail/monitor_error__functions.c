// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice
#include "rosmonitoring_interfaces/msg/detail/monitor_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `m_topic`
// Member `m_service`
// Member `m_content`
// Member `m_property`
#include "rosidl_runtime_c/string_functions.h"

bool
rosmonitoring_interfaces__msg__MonitorError__init(rosmonitoring_interfaces__msg__MonitorError * msg)
{
  if (!msg) {
    return false;
  }
  // m_topic
  if (!rosidl_runtime_c__String__init(&msg->m_topic)) {
    rosmonitoring_interfaces__msg__MonitorError__fini(msg);
    return false;
  }
  // m_service
  if (!rosidl_runtime_c__String__init(&msg->m_service)) {
    rosmonitoring_interfaces__msg__MonitorError__fini(msg);
    return false;
  }
  // m_content
  if (!rosidl_runtime_c__String__init(&msg->m_content)) {
    rosmonitoring_interfaces__msg__MonitorError__fini(msg);
    return false;
  }
  // m_property
  if (!rosidl_runtime_c__String__init(&msg->m_property)) {
    rosmonitoring_interfaces__msg__MonitorError__fini(msg);
    return false;
  }
  // m_time
  return true;
}

void
rosmonitoring_interfaces__msg__MonitorError__fini(rosmonitoring_interfaces__msg__MonitorError * msg)
{
  if (!msg) {
    return;
  }
  // m_topic
  rosidl_runtime_c__String__fini(&msg->m_topic);
  // m_service
  rosidl_runtime_c__String__fini(&msg->m_service);
  // m_content
  rosidl_runtime_c__String__fini(&msg->m_content);
  // m_property
  rosidl_runtime_c__String__fini(&msg->m_property);
  // m_time
}

bool
rosmonitoring_interfaces__msg__MonitorError__are_equal(const rosmonitoring_interfaces__msg__MonitorError * lhs, const rosmonitoring_interfaces__msg__MonitorError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // m_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->m_topic), &(rhs->m_topic)))
  {
    return false;
  }
  // m_service
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->m_service), &(rhs->m_service)))
  {
    return false;
  }
  // m_content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->m_content), &(rhs->m_content)))
  {
    return false;
  }
  // m_property
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->m_property), &(rhs->m_property)))
  {
    return false;
  }
  // m_time
  if (lhs->m_time != rhs->m_time) {
    return false;
  }
  return true;
}

bool
rosmonitoring_interfaces__msg__MonitorError__copy(
  const rosmonitoring_interfaces__msg__MonitorError * input,
  rosmonitoring_interfaces__msg__MonitorError * output)
{
  if (!input || !output) {
    return false;
  }
  // m_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->m_topic), &(output->m_topic)))
  {
    return false;
  }
  // m_service
  if (!rosidl_runtime_c__String__copy(
      &(input->m_service), &(output->m_service)))
  {
    return false;
  }
  // m_content
  if (!rosidl_runtime_c__String__copy(
      &(input->m_content), &(output->m_content)))
  {
    return false;
  }
  // m_property
  if (!rosidl_runtime_c__String__copy(
      &(input->m_property), &(output->m_property)))
  {
    return false;
  }
  // m_time
  output->m_time = input->m_time;
  return true;
}

rosmonitoring_interfaces__msg__MonitorError *
rosmonitoring_interfaces__msg__MonitorError__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmonitoring_interfaces__msg__MonitorError * msg = (rosmonitoring_interfaces__msg__MonitorError *)allocator.allocate(sizeof(rosmonitoring_interfaces__msg__MonitorError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosmonitoring_interfaces__msg__MonitorError));
  bool success = rosmonitoring_interfaces__msg__MonitorError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosmonitoring_interfaces__msg__MonitorError__destroy(rosmonitoring_interfaces__msg__MonitorError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosmonitoring_interfaces__msg__MonitorError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosmonitoring_interfaces__msg__MonitorError__Sequence__init(rosmonitoring_interfaces__msg__MonitorError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmonitoring_interfaces__msg__MonitorError * data = NULL;

  if (size) {
    data = (rosmonitoring_interfaces__msg__MonitorError *)allocator.zero_allocate(size, sizeof(rosmonitoring_interfaces__msg__MonitorError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosmonitoring_interfaces__msg__MonitorError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosmonitoring_interfaces__msg__MonitorError__fini(&data[i - 1]);
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
rosmonitoring_interfaces__msg__MonitorError__Sequence__fini(rosmonitoring_interfaces__msg__MonitorError__Sequence * array)
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
      rosmonitoring_interfaces__msg__MonitorError__fini(&array->data[i]);
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

rosmonitoring_interfaces__msg__MonitorError__Sequence *
rosmonitoring_interfaces__msg__MonitorError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosmonitoring_interfaces__msg__MonitorError__Sequence * array = (rosmonitoring_interfaces__msg__MonitorError__Sequence *)allocator.allocate(sizeof(rosmonitoring_interfaces__msg__MonitorError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosmonitoring_interfaces__msg__MonitorError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosmonitoring_interfaces__msg__MonitorError__Sequence__destroy(rosmonitoring_interfaces__msg__MonitorError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosmonitoring_interfaces__msg__MonitorError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosmonitoring_interfaces__msg__MonitorError__Sequence__are_equal(const rosmonitoring_interfaces__msg__MonitorError__Sequence * lhs, const rosmonitoring_interfaces__msg__MonitorError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosmonitoring_interfaces__msg__MonitorError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosmonitoring_interfaces__msg__MonitorError__Sequence__copy(
  const rosmonitoring_interfaces__msg__MonitorError__Sequence * input,
  rosmonitoring_interfaces__msg__MonitorError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosmonitoring_interfaces__msg__MonitorError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosmonitoring_interfaces__msg__MonitorError * data =
      (rosmonitoring_interfaces__msg__MonitorError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosmonitoring_interfaces__msg__MonitorError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosmonitoring_interfaces__msg__MonitorError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosmonitoring_interfaces__msg__MonitorError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
