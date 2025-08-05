// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/CurrentVelocityData.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/current_velocity_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__CurrentVelocityData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x3b, 0xf0, 0xf9, 0x7e, 0x88, 0x2a, 0x4a,
      0xa1, 0x5f, 0xc9, 0x66, 0x4f, 0x60, 0xfa, 0x4b,
      0x0e, 0xba, 0x4b, 0x7c, 0x48, 0x7d, 0x6a, 0x59,
      0xb7, 0x18, 0xeb, 0xe4, 0xe9, 0xab, 0x20, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__CurrentVelocityData__TYPE_NAME[] = "interfaces/msg/CurrentVelocityData";

// Define type names, field names, and default values
static char interfaces__msg__CurrentVelocityData__FIELD_NAME__motor_current[] = "motor_current";
static char interfaces__msg__CurrentVelocityData__FIELD_NAME__arm_current[] = "arm_current";
static char interfaces__msg__CurrentVelocityData__FIELD_NAME__angular_z[] = "angular_z";

static rosidl_runtime_c__type_description__Field interfaces__msg__CurrentVelocityData__FIELDS[] = {
  {
    {interfaces__msg__CurrentVelocityData__FIELD_NAME__motor_current, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__CurrentVelocityData__FIELD_NAME__arm_current, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__CurrentVelocityData__FIELD_NAME__angular_z, 9, 9},
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
interfaces__msg__CurrentVelocityData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__CurrentVelocityData__TYPE_NAME, 34, 34},
      {interfaces__msg__CurrentVelocityData__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 motor_current\n"
  "float32 arm_current\n"
  "float32 angular_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__CurrentVelocityData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__CurrentVelocityData__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 59, 59},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__CurrentVelocityData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__CurrentVelocityData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
