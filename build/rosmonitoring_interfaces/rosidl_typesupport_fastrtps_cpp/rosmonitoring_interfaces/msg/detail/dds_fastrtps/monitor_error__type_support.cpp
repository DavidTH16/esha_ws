// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice
#include "rosmonitoring_interfaces/msg/detail/monitor_error__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosmonitoring_interfaces/msg/detail/monitor_error__functions.h"
#include "rosmonitoring_interfaces/msg/detail/monitor_error__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rosmonitoring_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
cdr_serialize(
  const rosmonitoring_interfaces::msg::MonitorError & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: m_topic
  cdr << ros_message.m_topic;

  // Member: m_service
  cdr << ros_message.m_service;

  // Member: m_content
  cdr << ros_message.m_content;

  // Member: m_property
  cdr << ros_message.m_property;

  // Member: m_time
  cdr << ros_message.m_time;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosmonitoring_interfaces::msg::MonitorError & ros_message)
{
  // Member: m_topic
  cdr >> ros_message.m_topic;

  // Member: m_service
  cdr >> ros_message.m_service;

  // Member: m_content
  cdr >> ros_message.m_content;

  // Member: m_property
  cdr >> ros_message.m_property;

  // Member: m_time
  cdr >> ros_message.m_time;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
get_serialized_size(
  const rosmonitoring_interfaces::msg::MonitorError & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: m_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_topic.size() + 1);

  // Member: m_service
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_service.size() + 1);

  // Member: m_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_content.size() + 1);

  // Member: m_property
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_property.size() + 1);

  // Member: m_time
  {
    size_t item_size = sizeof(ros_message.m_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
max_serialized_size_MonitorError(
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

  // Member: m_topic
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
  // Member: m_service
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
  // Member: m_content
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
  // Member: m_property
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
  // Member: m_time
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
    using DataType = rosmonitoring_interfaces::msg::MonitorError;
    is_plain =
      (
      offsetof(DataType, m_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
cdr_serialize_key(
  const rosmonitoring_interfaces::msg::MonitorError & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: m_topic
  cdr << ros_message.m_topic;

  // Member: m_service
  cdr << ros_message.m_service;

  // Member: m_content
  cdr << ros_message.m_content;

  // Member: m_property
  cdr << ros_message.m_property;

  // Member: m_time
  cdr << ros_message.m_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
get_serialized_size_key(
  const rosmonitoring_interfaces::msg::MonitorError & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: m_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_topic.size() + 1);

  // Member: m_service
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_service.size() + 1);

  // Member: m_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_content.size() + 1);

  // Member: m_property
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m_property.size() + 1);

  // Member: m_time
  {
    size_t item_size = sizeof(ros_message.m_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
max_serialized_size_key_MonitorError(
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

  // Member: m_topic
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

  // Member: m_service
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

  // Member: m_content
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

  // Member: m_property
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

  // Member: m_time
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
    using DataType = rosmonitoring_interfaces::msg::MonitorError;
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
  auto typed_message =
    static_cast<const rosmonitoring_interfaces::msg::MonitorError *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MonitorError__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosmonitoring_interfaces::msg::MonitorError *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MonitorError__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosmonitoring_interfaces::msg::MonitorError *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MonitorError__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MonitorError(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MonitorError__callbacks = {
  "rosmonitoring_interfaces::msg",
  "MonitorError",
  _MonitorError__cdr_serialize,
  _MonitorError__cdr_deserialize,
  _MonitorError__get_serialized_size,
  _MonitorError__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MonitorError__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MonitorError__callbacks,
  get_message_typesupport_handle_function,
  &rosmonitoring_interfaces__msg__MonitorError__get_type_hash,
  &rosmonitoring_interfaces__msg__MonitorError__get_type_description,
  &rosmonitoring_interfaces__msg__MonitorError__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosmonitoring_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosmonitoring_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rosmonitoring_interfaces::msg::MonitorError>()
{
  return &rosmonitoring_interfaces::msg::typesupport_fastrtps_cpp::_MonitorError__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosmonitoring_interfaces, msg, MonitorError)() {
  return &rosmonitoring_interfaces::msg::typesupport_fastrtps_cpp::_MonitorError__handle;
}

#ifdef __cplusplus
}
#endif
