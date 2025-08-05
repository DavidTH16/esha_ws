// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmonitoring_interfaces/msg/monitor_error.h"


#ifndef ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__STRUCT_H_
#define ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'm_topic'
// Member 'm_service'
// Member 'm_content'
// Member 'm_property'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MonitorError in the package rosmonitoring_interfaces.
typedef struct rosmonitoring_interfaces__msg__MonitorError
{
  rosidl_runtime_c__String m_topic;
  rosidl_runtime_c__String m_service;
  rosidl_runtime_c__String m_content;
  rosidl_runtime_c__String m_property;
  double m_time;
} rosmonitoring_interfaces__msg__MonitorError;

// Struct for a sequence of rosmonitoring_interfaces__msg__MonitorError.
typedef struct rosmonitoring_interfaces__msg__MonitorError__Sequence
{
  rosmonitoring_interfaces__msg__MonitorError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosmonitoring_interfaces__msg__MonitorError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__STRUCT_H_
