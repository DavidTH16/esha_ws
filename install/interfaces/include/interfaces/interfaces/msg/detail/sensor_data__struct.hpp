// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/sensor_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__SensorData __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0l;
      this->gas = 0l;
      this->distance = 0.0f;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0l;
      this->gas = 0l;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _temperature_type =
    int32_t;
  _temperature_type temperature;
  using _gas_type =
    int32_t;
  _gas_type gas;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__temperature(
    const int32_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__gas(
    const int32_t & _arg)
  {
    this->gas = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__SensorData
    std::shared_ptr<interfaces::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__SensorData
    std::shared_ptr<interfaces::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->gas != other.gas) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  interfaces::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
