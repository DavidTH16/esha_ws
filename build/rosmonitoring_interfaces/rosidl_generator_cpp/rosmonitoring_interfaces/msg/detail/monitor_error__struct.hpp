// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosmonitoring_interfaces:msg/MonitorError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmonitoring_interfaces/msg/monitor_error.hpp"


#ifndef ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__STRUCT_HPP_
#define ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosmonitoring_interfaces__msg__MonitorError __attribute__((deprecated))
#else
# define DEPRECATED__rosmonitoring_interfaces__msg__MonitorError __declspec(deprecated)
#endif

namespace rosmonitoring_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MonitorError_
{
  using Type = MonitorError_<ContainerAllocator>;

  explicit MonitorError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_topic = "";
      this->m_service = "";
      this->m_content = "";
      this->m_property = "";
      this->m_time = 0.0;
    }
  }

  explicit MonitorError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_topic(_alloc),
    m_service(_alloc),
    m_content(_alloc),
    m_property(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_topic = "";
      this->m_service = "";
      this->m_content = "";
      this->m_property = "";
      this->m_time = 0.0;
    }
  }

  // field types and members
  using _m_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _m_topic_type m_topic;
  using _m_service_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _m_service_type m_service;
  using _m_content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _m_content_type m_content;
  using _m_property_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _m_property_type m_property;
  using _m_time_type =
    double;
  _m_time_type m_time;

  // setters for named parameter idiom
  Type & set__m_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->m_topic = _arg;
    return *this;
  }
  Type & set__m_service(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->m_service = _arg;
    return *this;
  }
  Type & set__m_content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->m_content = _arg;
    return *this;
  }
  Type & set__m_property(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->m_property = _arg;
    return *this;
  }
  Type & set__m_time(
    const double & _arg)
  {
    this->m_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosmonitoring_interfaces__msg__MonitorError
    std::shared_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosmonitoring_interfaces__msg__MonitorError
    std::shared_ptr<rosmonitoring_interfaces::msg::MonitorError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MonitorError_ & other) const
  {
    if (this->m_topic != other.m_topic) {
      return false;
    }
    if (this->m_service != other.m_service) {
      return false;
    }
    if (this->m_content != other.m_content) {
      return false;
    }
    if (this->m_property != other.m_property) {
      return false;
    }
    if (this->m_time != other.m_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MonitorError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MonitorError_

// alias to use template instance with default allocator
using MonitorError =
  rosmonitoring_interfaces::msg::MonitorError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosmonitoring_interfaces

#endif  // ROSMONITORING_INTERFACES__MSG__DETAIL__MONITOR_ERROR__STRUCT_HPP_
