// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ImuData.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/imu_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ImuData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x35, 0x93, 0x17, 0xc4, 0xc0, 0x41, 0xb8,
      0x57, 0xb2, 0x2e, 0xa2, 0x13, 0xfa, 0x96, 0x1e,
      0x0c, 0x6a, 0x7a, 0xd4, 0x60, 0xcc, 0x2b, 0xa8,
      0x9e, 0xe1, 0xf5, 0x3f, 0xae, 0x90, 0x41, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ImuData__TYPE_NAME[] = "interfaces/msg/ImuData";

// Define type names, field names, and default values
static char interfaces__msg__ImuData__FIELD_NAME__roll[] = "roll";
static char interfaces__msg__ImuData__FIELD_NAME__pitch[] = "pitch";
static char interfaces__msg__ImuData__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field interfaces__msg__ImuData__FIELDS[] = {
  {
    {interfaces__msg__ImuData__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ImuData__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ImuData__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__ImuData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ImuData__TYPE_NAME, 22, 22},
      {interfaces__msg__ImuData__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 roll\n"
  "int32 pitch\n"
  "int32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ImuData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ImuData__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ImuData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ImuData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
