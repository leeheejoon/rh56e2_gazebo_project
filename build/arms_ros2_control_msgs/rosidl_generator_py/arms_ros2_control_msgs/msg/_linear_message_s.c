// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arms_ros2_control_msgs:msg/LinearMessage.idl
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
#include "arms_ros2_control_msgs/msg/detail/linear_message__struct.h"
#include "arms_ros2_control_msgs/msg/detail/linear_message__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool arms_ros2_control_msgs__msg__linear_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("arms_ros2_control_msgs.msg._linear_message.LinearMessage", full_classname_dest, 56) == 0);
  }
  arms_ros2_control_msgs__msg__LinearMessage * ros_message = _ros_message;
  {  // endpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "endpoint");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->endpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_endpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_endpoint");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->right_endpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // max_linear_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_linear_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_linear_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_linear_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_linear_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_linear_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_linear_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_linear_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_linear_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_angular_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_angular_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_angular_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_angular_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_angular_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_angular_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_angular_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->time_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->frame_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // arm_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->arm_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ik_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "ik_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ik_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arms_ros2_control_msgs__msg__linear_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LinearMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arms_ros2_control_msgs.msg._linear_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LinearMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arms_ros2_control_msgs__msg__LinearMessage * ros_message = (arms_ros2_control_msgs__msg__LinearMessage *)raw_ros_message;
  {  // endpoint
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->endpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "endpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_endpoint
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->right_endpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_endpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_linear_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_linear_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_linear_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_linear_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_linear_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_linear_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_linear_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_linear_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_linear_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_angular_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_angular_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_angular_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_angular_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_angular_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_angular_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_angular_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->time_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->frame_id.data,
      strlen(ros_message->frame_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->arm_name.data,
      strlen(ros_message->arm_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ik_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ik_type.data,
      strlen(ros_message->ik_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ik_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
