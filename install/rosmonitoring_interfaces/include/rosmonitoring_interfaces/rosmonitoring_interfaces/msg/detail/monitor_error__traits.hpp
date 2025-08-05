// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmonitoring_interfaces/msg/monitor_error.hpp"


#ifndef ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__TRAITS_HPP_
#define ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosmonitoring_interfaces/msg/detail/monitor_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosmonitoring_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MonitorError & msg,
  std::ostream & out)
{
  out << "{";
  // member: m_topic
  {
    out << "m_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.m_topic, out);
    out << ", ";
  }

  // member: m_service
  {
    out << "m_service: ";
    rosidl_generator_traits::value_to_yaml(msg.m_service, out);
    out << ", ";
  }

  // member: m_content
  {
    out << "m_content: ";
    rosidl_generator_traits::value_to_yaml(msg.m_content, out);
    out << ", ";
  }

  // member: m_property
  {
    out << "m_property: ";
    rosidl_generator_traits::value_to_yaml(msg.m_property, out);
    out << ", ";
  }

  // member: m_time
  {
    out << "m_time: ";
    rosidl_generator_traits::value_to_yaml(msg.m_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MonitorError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: m_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.m_topic, out);
    out << "\n";
  }

  // member: m_service
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_service: ";
    rosidl_generator_traits::value_to_yaml(msg.m_service, out);
    out << "\n";
  }

  // member: m_content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_content: ";
    rosidl_generator_traits::value_to_yaml(msg.m_content, out);
    out << "\n";
  }

  // member: m_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_property: ";
    rosidl_generator_traits::value_to_yaml(msg.m_property, out);
    out << "\n";
  }

  // member: m_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_time: ";
    rosidl_generator_traits::value_to_yaml(msg.m_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MonitorError & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rosmonitoring_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rosmonitoring_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosmonitoring_interfaces::msg::MonitorError & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosmonitoring_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosmonitoring_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosmonitoring_interfaces::msg::MonitorError & msg)
{
  return rosmonitoring_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosmonitoring_interfaces::msg::MonitorError>()
{
  return "rosmonitoring_interfaces::msg::MonitorError";
}

template<>
inline const char * name<rosmonitoring_interfaces::msg::MonitorError>()
{
  return "rosmonitoring_interfaces/msg/MonitorError";
}

template<>
struct has_fixed_size<rosmonitoring_interfaces::msg::MonitorError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosmonitoring_interfaces::msg::MonitorError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosmonitoring_interfaces::msg::MonitorError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__TRAITS_HPP_
