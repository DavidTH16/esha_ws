// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/CurrentVelocityData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/current_velocity_data.h"


#ifndef INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__STRUCT_H_
#define INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CurrentVelocityData in the package interfaces.
typedef struct interfaces__msg__CurrentVelocityData
{
  float motor_current;
  float arm_current;
  float angular_z;
} interfaces__msg__CurrentVelocityData;

// Struct for a sequence of interfaces__msg__CurrentVelocityData.
typedef struct interfaces__msg__CurrentVelocityData__Sequence
{
  interfaces__msg__CurrentVelocityData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__CurrentVelocityData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__STRUCT_H_
