// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/CurrentVelocityData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/current_velocity_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__CurrentVelocityData __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__CurrentVelocityData __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentVelocityData_
{
  using Type = CurrentVelocityData_<ContainerAllocator>;

  explicit CurrentVelocityData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_current = 0.0f;
      this->arm_current = 0.0f;
      this->angular_z = 0.0f;
    }
  }

  explicit CurrentVelocityData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_current = 0.0f;
      this->arm_current = 0.0f;
      this->angular_z = 0.0f;
    }
  }

  // field types and members
  using _motor_current_type =
    float;
  _motor_current_type motor_current;
  using _arm_current_type =
    float;
  _arm_current_type arm_current;
  using _angular_z_type =
    float;
  _angular_z_type angular_z;

  // setters for named parameter idiom
  Type & set__motor_current(
    const float & _arg)
  {
    this->motor_current = _arg;
    return *this;
  }
  Type & set__arm_current(
    const float & _arg)
  {
    this->arm_current = _arg;
    return *this;
  }
  Type & set__angular_z(
    const float & _arg)
  {
    this->angular_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::CurrentVelocityData_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::CurrentVelocityData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::CurrentVelocityData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::CurrentVelocityData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__CurrentVelocityData
    std::shared_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__CurrentVelocityData
    std::shared_ptr<interfaces::msg::CurrentVelocityData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentVelocityData_ & other) const
  {
    if (this->motor_current != other.motor_current) {
      return false;
    }
    if (this->arm_current != other.arm_current) {
      return false;
    }
    if (this->angular_z != other.angular_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentVelocityData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentVelocityData_

// alias to use template instance with default allocator
using CurrentVelocityData =
  interfaces::msg::CurrentVelocityData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CURRENT_VELOCITY_DATA__STRUCT_HPP_
