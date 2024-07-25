// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from synapse_msgs:msg/TrafficStatus.idl
// generated code does not contain a copyright notice

#ifndef SYNAPSE_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_HPP_
#define SYNAPSE_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__synapse_msgs__msg__TrafficStatus __attribute__((deprecated))
#else
# define DEPRECATED__synapse_msgs__msg__TrafficStatus __declspec(deprecated)
#endif

namespace synapse_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficStatus_
{
  using Type = TrafficStatus_<ContainerAllocator>;

  explicit TrafficStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_sign = false;
      this->traffic_light = 0;
    }
  }

  explicit TrafficStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_sign = false;
      this->traffic_light = 0;
    }
  }

  // field types and members
  using _stop_sign_type =
    bool;
  _stop_sign_type stop_sign;
  using _traffic_light_type =
    uint8_t;
  _traffic_light_type traffic_light;

  // setters for named parameter idiom
  Type & set__stop_sign(
    const bool & _arg)
  {
    this->stop_sign = _arg;
    return *this;
  }
  Type & set__traffic_light(
    const uint8_t & _arg)
  {
    this->traffic_light = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GREEN_LIGHT =
    0u;
  static constexpr uint8_t YELLOW_LIGHT =
    1u;
  static constexpr uint8_t RED_LIGHT =
    2u;

  // pointer types
  using RawPtr =
    synapse_msgs::msg::TrafficStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const synapse_msgs::msg::TrafficStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      synapse_msgs::msg::TrafficStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      synapse_msgs::msg::TrafficStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__synapse_msgs__msg__TrafficStatus
    std::shared_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__synapse_msgs__msg__TrafficStatus
    std::shared_ptr<synapse_msgs::msg::TrafficStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficStatus_ & other) const
  {
    if (this->stop_sign != other.stop_sign) {
      return false;
    }
    if (this->traffic_light != other.traffic_light) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficStatus_

// alias to use template instance with default allocator
using TrafficStatus =
  synapse_msgs::msg::TrafficStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficStatus_<ContainerAllocator>::GREEN_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficStatus_<ContainerAllocator>::YELLOW_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficStatus_<ContainerAllocator>::RED_LIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace synapse_msgs

#endif  // SYNAPSE_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_HPP_
