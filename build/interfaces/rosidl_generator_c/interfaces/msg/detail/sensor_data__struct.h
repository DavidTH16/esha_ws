// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/sensor_data.h"


#ifndef INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SensorData in the package interfaces.
typedef struct interfaces__msg__SensorData
{
  int32_t temperature;
  int32_t gas;
  float distance;
} interfaces__msg__SensorData;

// Struct for a sequence of interfaces__msg__SensorData.
typedef struct interfaces__msg__SensorData__Sequence
{
  interfaces__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
