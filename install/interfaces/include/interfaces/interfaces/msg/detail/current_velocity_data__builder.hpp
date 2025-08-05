// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/CurrentVelocityData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/current_velocity_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/current_velocity_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_CurrentVelocityData_angular_z
{
public:
  explicit Init_CurrentVelocityData_angular_z(::interfaces::msg::CurrentVelocityData & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::CurrentVelocityData angular_z(::interfaces::msg::CurrentVelocityData::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::CurrentVelocityData msg_;
};

class Init_CurrentVelocityData_arm_current
{
public:
  explicit Init_CurrentVelocityData_arm_current(::interfaces::msg::CurrentVelocityData & msg)
  : msg_(msg)
  {}
  Init_CurrentVelocityData_angular_z arm_current(::interfaces::msg::CurrentVelocityData::_arm_current_type arg)
  {
    msg_.arm_current = std::move(arg);
    return Init_CurrentVelocityData_angular_z(msg_);
  }

private:
  ::interfaces::msg::CurrentVelocityData msg_;
};

class Init_CurrentVelocityData_motor_current
{
public:
  Init_CurrentVelocityData_motor_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentVelocityData_arm_current motor_current(::interfaces::msg::CurrentVelocityData::_motor_current_type arg)
  {
    msg_.motor_current = std::move(arg);
    return Init_CurrentVelocityData_arm_current(msg_);
  }

private:
  ::interfaces::msg::CurrentVelocityData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::CurrentVelocityData>()
{
  return interfaces::msg::builder::Init_CurrentVelocityData_motor_current();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__BUILDER_HPP_
