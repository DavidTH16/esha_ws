// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/sensor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__SensorData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x5c, 0x4b, 0x8a, 0x6f, 0xc3, 0x9f, 0x84,
      0xc5, 0x17, 0x1d, 0x87, 0xb4, 0x42, 0x25, 0x7f,
      0x1a, 0x7a, 0x6a, 0x8f, 0x78, 0x56, 0x53, 0x96,
      0x88, 0x92, 0xea, 0x58, 0x1e, 0xb9, 0xaa, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__SensorData__TYPE_NAME[] = "interfaces/msg/SensorData";

// Define type names, field names, and default values
static char interfaces__msg__SensorData__FIELD_NAME__temperature[] = "temperature";
static char interfaces__msg__SensorData__FIELD_NAME__gas[] = "gas";
static char interfaces__msg__SensorData__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field interfaces__msg__SensorData__FIELDS[] = {
  {
    {interfaces__msg__SensorData__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__SensorData__FIELD_NAME__gas, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__SensorData__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__SensorData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__SensorData__TYPE_NAME, 25, 25},
      {interfaces__msg__SensorData__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 temperature\n"
  "int32 gas\n"
  "float32 distance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__SensorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__SensorData__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__SensorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__SensorData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
