// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from synapse_msgs:msg/BezierCurve.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "synapse_msgs/msg/detail/bezier_curve__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace synapse_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BezierCurve_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) synapse_msgs::msg::BezierCurve(_init);
}

void BezierCurve_fini_function(void * message_memory)
{
  auto typed_message = static_cast<synapse_msgs::msg::BezierCurve *>(message_memory);
  typed_message->~BezierCurve();
}

size_t size_function__BezierCurve__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BezierCurve__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BezierCurve__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BezierCurve__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BezierCurve__x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BezierCurve__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BezierCurve__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BezierCurve__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BezierCurve__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BezierCurve__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BezierCurve__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BezierCurve__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BezierCurve__y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BezierCurve__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BezierCurve__y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BezierCurve__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BezierCurve__z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BezierCurve__z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BezierCurve__z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BezierCurve__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BezierCurve__z(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BezierCurve__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BezierCurve__z(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BezierCurve__z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BezierCurve__yaw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BezierCurve__yaw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__BezierCurve__yaw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__BezierCurve__yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__BezierCurve__yaw(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__BezierCurve__yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__BezierCurve__yaw(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__BezierCurve__yaw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BezierCurve_message_member_array[5] = {
  {
    "time_stop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(synapse_msgs::msg::BezierCurve, time_stop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(synapse_msgs::msg::BezierCurve, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__BezierCurve__x,  // size() function pointer
    get_const_function__BezierCurve__x,  // get_const(index) function pointer
    get_function__BezierCurve__x,  // get(index) function pointer
    fetch_function__BezierCurve__x,  // fetch(index, &value) function pointer
    assign_function__BezierCurve__x,  // assign(index, value) function pointer
    resize_function__BezierCurve__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(synapse_msgs::msg::BezierCurve, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__BezierCurve__y,  // size() function pointer
    get_const_function__BezierCurve__y,  // get_const(index) function pointer
    get_function__BezierCurve__y,  // get(index) function pointer
    fetch_function__BezierCurve__y,  // fetch(index, &value) function pointer
    assign_function__BezierCurve__y,  // assign(index, value) function pointer
    resize_function__BezierCurve__y  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(synapse_msgs::msg::BezierCurve, z),  // bytes offset in struct
    nullptr,  // default value
    size_function__BezierCurve__z,  // size() function pointer
    get_const_function__BezierCurve__z,  // get_const(index) function pointer
    get_function__BezierCurve__z,  // get(index) function pointer
    fetch_function__BezierCurve__z,  // fetch(index, &value) function pointer
    assign_function__BezierCurve__z,  // assign(index, value) function pointer
    resize_function__BezierCurve__z  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(synapse_msgs::msg::BezierCurve, yaw),  // bytes offset in struct
    nullptr,  // default value
    size_function__BezierCurve__yaw,  // size() function pointer
    get_const_function__BezierCurve__yaw,  // get_const(index) function pointer
    get_function__BezierCurve__yaw,  // get(index) function pointer
    fetch_function__BezierCurve__yaw,  // fetch(index, &value) function pointer
    assign_function__BezierCurve__yaw,  // assign(index, value) function pointer
    resize_function__BezierCurve__yaw  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BezierCurve_message_members = {
  "synapse_msgs::msg",  // message namespace
  "BezierCurve",  // message name
  5,  // number of fields
  sizeof(synapse_msgs::msg::BezierCurve),
  BezierCurve_message_member_array,  // message members
  BezierCurve_init_function,  // function to initialize message memory (memory has to be allocated)
  BezierCurve_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BezierCurve_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BezierCurve_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace synapse_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<synapse_msgs::msg::BezierCurve>()
{
  return &::synapse_msgs::msg::rosidl_typesupport_introspection_cpp::BezierCurve_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, synapse_msgs, msg, BezierCurve)() {
  return &::synapse_msgs::msg::rosidl_typesupport_introspection_cpp::BezierCurve_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
