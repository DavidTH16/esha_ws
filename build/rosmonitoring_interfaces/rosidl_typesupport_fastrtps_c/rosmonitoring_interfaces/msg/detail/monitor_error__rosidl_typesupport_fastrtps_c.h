// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice
#ifndef ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosmonitoring_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosmonitoring_interfaces/msg/detail/monitor_error__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
bool cdr_serialize_rosmonitoring_interfaces__msg__MonitorError(
  const rosmonitoring_interfaces__msg__MonitorError * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
bool cdr_deserialize_rosmonitoring_interfaces__msg__MonitorError(
  eprosima::fastcdr::Cdr &,
  rosmonitoring_interfaces__msg__MonitorError * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t get_serialized_size_rosmonitoring_interfaces__msg__MonitorError(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t max_serialized_size_rosmonitoring_interfaces__msg__MonitorError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
bool cdr_serialize_key_rosmonitoring_interfaces__msg__MonitorError(
  const rosmonitoring_interfaces__msg__MonitorError * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t get_serialized_size_key_rosmonitoring_interfaces__msg__MonitorError(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
size_t max_serialized_size_key_rosmonitoring_interfaces__msg__MonitorError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmonitoring_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosmonitoring_interfaces, msg, MonitorError)();

#ifdef __cplusplus
}
#endif

#endif  // ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
