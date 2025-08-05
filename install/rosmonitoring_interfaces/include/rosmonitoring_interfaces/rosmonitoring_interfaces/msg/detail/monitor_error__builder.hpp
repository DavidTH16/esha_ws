// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmonitoring_interfaces/msg/monitor_error.hpp"


#ifndef ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__BUILDER_HPP_
#define ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosmonitoring_interfaces/msg/detail/monitor_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosmonitoring_interfaces
{

namespace msg
{

namespace builder
{

class Init_MonitorError_m_time
{
public:
  explicit Init_MonitorError_m_time(::rosmonitoring_interfaces::msg::MonitorError & msg)
  : msg_(msg)
  {}
  ::rosmonitoring_interfaces::msg::MonitorError m_time(::rosmonitoring_interfaces::msg::MonitorError::_m_time_type arg)
  {
    msg_.m_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosmonitoring_interfaces::msg::MonitorError msg_;
};

class Init_MonitorError_m_property
{
public:
  explicit Init_MonitorError_m_property(::rosmonitoring_interfaces::msg::MonitorError & msg)
  : msg_(msg)
  {}
  Init_MonitorError_m_time m_property(::rosmonitoring_interfaces::msg::MonitorError::_m_property_type arg)
  {
    msg_.m_property = std::move(arg);
    return Init_MonitorError_m_time(msg_);
  }

private:
  ::rosmonitoring_interfaces::msg::MonitorError msg_;
};

class Init_MonitorError_m_content
{
public:
  explicit Init_MonitorError_m_content(::rosmonitoring_interfaces::msg::MonitorError & msg)
  : msg_(msg)
  {}
  Init_MonitorError_m_property m_content(::rosmonitoring_interfaces::msg::MonitorError::_m_content_type arg)
  {
    msg_.m_content = std::move(arg);
    return Init_MonitorError_m_property(msg_);
  }

private:
  ::rosmonitoring_interfaces::msg::MonitorError msg_;
};

class Init_MonitorError_m_service
{
public:
  explicit Init_MonitorError_m_service(::rosmonitoring_interfaces::msg::MonitorError & msg)
  : msg_(msg)
  {}
  Init_MonitorError_m_content m_service(::rosmonitoring_interfaces::msg::MonitorError::_m_service_type arg)
  {
    msg_.m_service = std::move(arg);
    return Init_MonitorError_m_content(msg_);
  }

private:
  ::rosmonitoring_interfaces::msg::MonitorError msg_;
};

class Init_MonitorError_m_topic
{
public:
  Init_MonitorError_m_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MonitorError_m_service m_topic(::rosmonitoring_interfaces::msg::MonitorError::_m_topic_type arg)
  {
    msg_.m_topic = std::move(arg);
    return Init_MonitorError_m_service(msg_);
  }

private:
  ::rosmonitoring_interfaces::msg::MonitorError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosmonitoring_interfaces::msg::MonitorError>()
{
  return rosmonitoring_interfaces::msg::builder::Init_MonitorError_m_topic();
}

}  // namespace rosmonitoring_interfaces

#endif  // ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__BUILDER_HPP_
