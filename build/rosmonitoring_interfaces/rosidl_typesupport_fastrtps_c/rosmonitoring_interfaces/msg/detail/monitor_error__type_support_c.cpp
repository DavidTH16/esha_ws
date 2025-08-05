// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice
#include "rosmonitoring_interfaces/msg/detail/monitor_error__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosmonitoring_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosmonitoring_interfaces/msg/detail/monitor_error__struct.h"
#include "rosmonitoring_interfaces/msg/detail/monitor_error__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // m_content, m_property, m_service, m_topic
#include "rosidl_runtime_c/string_functions.h"  // m_content, m_property, m_service, m_topic

// forward declare type support functions


using _MonitorError__ros_msg_type = rosmonitoring_interfaces__msg__MonitorError;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
bool cdr_serialize_rosmonitoring_interfaces__msg__MonitorError(
  const rosmonitoring_interfaces__msg__MonitorError * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: m_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->m_topic;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_service
  {
    const rosidl_runtime_c__String * str = &ros_message->m_service;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_content
  {
    const rosidl_runtime_c__String * str = &ros_message->m_content;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_property
  {
    const rosidl_runtime_c__String * str = &ros_message->m_property;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_time
  {
    cdr << ros_message->m_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
bool cdr_deserialize_rosmonitoring_interfaces__msg__MonitorError(
  eprosima::fastcdr::Cdr & cdr,
  rosmonitoring_interfaces__msg__MonitorError * ros_message)
{
  // Field name: m_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->m_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->m_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->m_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'm_topic'\n");
      return false;
    }
  }

  // Field name: m_service
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->m_service.data) {
      rosidl_runtime_c__String__init(&ros_message->m_service);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->m_service,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'm_service'\n");
      return false;
    }
  }

  // Field name: m_content
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->m_content.data) {
      rosidl_runtime_c__String__init(&ros_message->m_content);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->m_content,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'm_content'\n");
      return false;
    }
  }

  // Field name: m_property
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->m_property.data) {
      rosidl_runtime_c__String__init(&ros_message->m_property);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->m_property,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'm_property'\n");
      return false;
    }
  }

  // Field name: m_time
  {
    cdr >> ros_message->m_time;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t get_serialized_size_rosmonitoring_interfaces__msg__MonitorError(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MonitorError__ros_msg_type * ros_message = static_cast<const _MonitorError__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: m_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_topic.size + 1);

  // Field name: m_service
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_service.size + 1);

  // Field name: m_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_content.size + 1);

  // Field name: m_property
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_property.size + 1);

  // Field name: m_time
  {
    size_t item_size = sizeof(ros_message->m_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t max_serialized_size_rosmonitoring_interfaces__msg__MonitorError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: m_topic
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_service
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_content
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_property
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmonitoring_interfaces__msg__MonitorError;
    is_plain =
      (
      offsetof(DataType, m_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
bool cdr_serialize_key_rosmonitoring_interfaces__msg__MonitorError(
  const rosmonitoring_interfaces__msg__MonitorError * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: m_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->m_topic;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_service
  {
    const rosidl_runtime_c__String * str = &ros_message->m_service;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_content
  {
    const rosidl_runtime_c__String * str = &ros_message->m_content;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_property
  {
    const rosidl_runtime_c__String * str = &ros_message->m_property;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: m_time
  {
    cdr << ros_message->m_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t get_serialized_size_key_rosmonitoring_interfaces__msg__MonitorError(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MonitorError__ros_msg_type * ros_message = static_cast<const _MonitorError__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: m_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_topic.size + 1);

  // Field name: m_service
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_service.size + 1);

  // Field name: m_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_content.size + 1);

  // Field name: m_property
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->m_property.size + 1);

  // Field name: m_time
  {
    size_t item_size = sizeof(ros_message->m_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t max_serialized_size_key_rosmonitoring_interfaces__msg__MonitorError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: m_topic
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_service
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_content
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_property
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: m_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmonitoring_interfaces__msg__MonitorError;
    is_plain =
      (
      offsetof(DataType, m_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MonitorError__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rosmonitoring_interfaces__msg__MonitorError * ros_message = static_cast<const rosmonitoring_interfaces__msg__MonitorError *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rosmonitoring_interfaces__msg__MonitorError(ros_message, cdr);
}

static bool _MonitorError__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rosmonitoring_interfaces__msg__MonitorError * ros_message = static_cast<rosmonitoring_interfaces__msg__MonitorError *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rosmonitoring_interfaces__msg__MonitorError(cdr, ros_message);
}

static uint32_t _MonitorError__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosmonitoring_interfaces__msg__MonitorError(
      untyped_ros_message, 0));
}

static size_t _MonitorError__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosmonitoring_interfaces__msg__MonitorError(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MonitorError = {
  "rosmonitoring_interfaces::msg",
  "MonitorError",
  _MonitorError__cdr_serialize,
  _MonitorError__cdr_deserialize,
  _MonitorError__get_serialized_size,
  _MonitorError__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MonitorError__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MonitorError,
  get_message_typesupport_handle_function,
  &rosmonitoring_interfaces__msg__MonitorError__get_type_hash,
  &rosmonitoring_interfaces__msg__MonitorError__get_type_description,
  &rosmonitoring_interfaces__msg__MonitorError__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosmonitoring_interfaces, msg, MonitorError)() {
  return &_MonitorError__type_support;
}

#if defined(__cplusplus)
}
#endif
