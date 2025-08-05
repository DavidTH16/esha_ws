// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ImuData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/imu_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ImuData_yaw
{
public:
  explicit Init_ImuData_yaw(::interfaces::msg::ImuData & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ImuData yaw(::interfaces::msg::ImuData::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ImuData msg_;
};

class Init_ImuData_pitch
{
public:
  explicit Init_ImuData_pitch(::interfaces::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_yaw pitch(::interfaces::msg::ImuData::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ImuData_yaw(msg_);
  }

private:
  ::interfaces::msg::ImuData msg_;
};

class Init_ImuData_roll
{
public:
  Init_ImuData_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuData_pitch roll(::interfaces::msg::ImuData::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ImuData_pitch(msg_);
  }

private:
  ::interfaces::msg::ImuData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ImuData>()
{
  return interfaces::msg::builder::Init_ImuData_roll();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
