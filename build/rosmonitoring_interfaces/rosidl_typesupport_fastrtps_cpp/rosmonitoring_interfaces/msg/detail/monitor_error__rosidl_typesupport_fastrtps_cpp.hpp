// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice

#ifndef ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosmonitoring_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rosmonitoring_interfaces/msg/detail/monitor_error__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosmonitoring_interfaces::msg::MonitorError & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
get_serialized_size(
  const rosmonitoring_interfaces::msg::MonitorError & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
max_serialized_size_MonitorError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
cdr_serialize_key(
  const rosmonitoring_interfaces::msg::MonitorError & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
get_serialized_size_key(
  const rosmonitoring_interfaces::msg::MonitorError & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
max_serialized_size_key_MonitorError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosmonitoring_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosmonitoring_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosmonitoring_interfaces, msg, MonitorError)();

#ifdef __cplusplus
}
#endif

#endif  // ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
