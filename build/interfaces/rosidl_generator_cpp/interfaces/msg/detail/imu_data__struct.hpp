// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/ImuData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/imu_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__IMU_DATA__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__IMU_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__ImuData __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__ImuData __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuData_
{
  using Type = ImuData_<ContainerAllocator>;

  explicit ImuData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0l;
      this->pitch = 0l;
      this->yaw = 0l;
    }
  }

  explicit ImuData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0l;
      this->pitch = 0l;
      this->yaw = 0l;
    }
  }

  // field types and members
  using _roll_type =
    int32_t;
  _roll_type roll;
  using _pitch_type =
    int32_t;
  _pitch_type pitch;
  using _yaw_type =
    int32_t;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__roll(
    const int32_t & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const int32_t & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const int32_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::ImuData_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::ImuData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::ImuData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::ImuData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ImuData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ImuData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::ImuData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::ImuData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::ImuData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::ImuData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__ImuData
    std::shared_ptr<interfaces::msg::ImuData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__ImuData
    std::shared_ptr<interfaces::msg::ImuData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuData_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuData_

// alias to use template instance with default allocator
using ImuData =
  interfaces::msg::ImuData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IMU_DATA__STRUCT_HPP_
