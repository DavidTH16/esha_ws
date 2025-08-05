// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice

#include "rosmonitoring_interfaces/msg/detail/monitor_error__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosmonitoring_interfaces
const rosidl_type_hash_t *
rosmonitoring_interfaces__msg__MonitorError__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0xdd, 0xdd, 0xfd, 0x92, 0x12, 0x21, 0xdb,
      0xe1, 0xf8, 0x9c, 0xb5, 0x92, 0x24, 0xd0, 0x27,
      0xcd, 0x9c, 0xc2, 0xf4, 0x11, 0x66, 0xa2, 0xf8,
      0x1b, 0xc8, 0xfb, 0x2a, 0x94, 0x94, 0xd7, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rosmonitoring_interfaces__msg__MonitorError__TYPE_NAME[] = "rosmonitoring_interfaces/msg/MonitorError";

// Define type names, field names, and default values
static char rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_topic[] = "m_topic";
static char rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_service[] = "m_service";
static char rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_content[] = "m_content";
static char rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_property[] = "m_property";
static char rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_time[] = "m_time";

static rosidl_runtime_c__type_description__Field rosmonitoring_interfaces__msg__MonitorError__FIELDS[] = {
  {
    {rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_topic, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_service, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_content, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_property, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmonitoring_interfaces__msg__MonitorError__FIELD_NAME__m_time, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosmonitoring_interfaces__msg__MonitorError__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosmonitoring_interfaces__msg__MonitorError__TYPE_NAME, 41, 41},
      {rosmonitoring_interfaces__msg__MonitorError__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string m_topic\n"
  "string m_service\n"
  "string m_content\n"
  "string m_property\n"
  "float64 m_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosmonitoring_interfaces__msg__MonitorError__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosmonitoring_interfaces__msg__MonitorError__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosmonitoring_interfaces__msg__MonitorError__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosmonitoring_interfaces__msg__MonitorError__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
