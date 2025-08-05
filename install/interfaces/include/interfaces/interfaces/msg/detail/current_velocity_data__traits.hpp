// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/CurrentVelocityData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/current_velocity_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/current_velocity_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentVelocityData & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_current
  {
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << ", ";
  }

  // member: arm_current
  {
    out << "arm_current: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_current, out);
    out << ", ";
  }

  // member: angular_z
  {
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurrentVelocityData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << "\n";
  }

  // member: arm_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_current: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_current, out);
    out << "\n";
  }

  // member: angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurrentVelocityData & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::CurrentVelocityData & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::CurrentVelocityData & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::CurrentVelocityData>()
{
  return "interfaces::msg::CurrentVelocityData";
}

template<>
inline const char * name<interfaces::msg::CurrentVelocityData>()
{
  return "interfaces/msg/CurrentVelocityData";
}

template<>
struct has_fixed_size<interfaces::msg::CurrentVelocityData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::CurrentVelocityData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::CurrentVelocityData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__TRAITS_HPP_
