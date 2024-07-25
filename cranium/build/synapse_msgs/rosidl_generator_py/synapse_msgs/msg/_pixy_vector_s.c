// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from synapse_msgs:msg/PixyVector.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "synapse_msgs/msg/detail/pixy_vector__struct.h"
#include "synapse_msgs/msg/detail/pixy_vector__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool synapse_msgs__msg__pixy_vector__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("synapse_msgs.msg._pixy_vector.PixyVector", full_classname_dest, 40) == 0);
  }
  synapse_msgs__msg__PixyVector * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // m0_x0
    PyObject * field = PyObject_GetAttrString(_pymsg, "m0_x0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m0_x0 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // m0_y0
    PyObject * field = PyObject_GetAttrString(_pymsg, "m0_y0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m0_y0 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // m0_x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "m0_x1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m0_x1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // m0_y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "m0_y1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m0_y1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // m1_x0
    PyObject * field = PyObject_GetAttrString(_pymsg, "m1_x0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m1_x0 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // m1_y0
    PyObject * field = PyObject_GetAttrString(_pymsg, "m1_y0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m1_y0 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // m1_x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "m1_x1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m1_x1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // m1_y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "m1_y1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m1_y1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * synapse_msgs__msg__pixy_vector__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PixyVector */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("synapse_msgs.msg._pixy_vector");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PixyVector");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  synapse_msgs__msg__PixyVector * ros_message = (synapse_msgs__msg__PixyVector *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m0_x0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m0_x0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m0_x0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m0_y0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m0_y0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m0_y0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m0_x1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m0_x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m0_x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m0_y1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m0_y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m0_y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m1_x0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m1_x0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m1_x0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m1_y0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m1_y0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m1_y0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m1_x1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m1_x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m1_x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m1_y1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->m1_y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m1_y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
