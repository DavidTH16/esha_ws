// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/sensor_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorData_distance
{
public:
  explicit Init_SensorData_distance(::interfaces::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::SensorData distance(::interfaces::msg::SensorData::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::SensorData msg_;
};

class Init_SensorData_gas
{
public:
  explicit Init_SensorData_gas(::interfaces::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_distance gas(::interfaces::msg::SensorData::_gas_type arg)
  {
    msg_.gas = std::move(arg);
    return Init_SensorData_distance(msg_);
  }

private:
  ::interfaces::msg::SensorData msg_;
};

class Init_SensorData_temperature
{
public:
  Init_SensorData_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_gas temperature(::interfaces::msg::SensorData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_SensorData_gas(msg_);
  }

private:
  ::interfaces::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::SensorData>()
{
  return interfaces::msg::builder::Init_SensorData_temperature();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
