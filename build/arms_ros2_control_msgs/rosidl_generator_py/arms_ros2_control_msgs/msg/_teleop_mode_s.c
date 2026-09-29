// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arms_ros2_control_msgs:msg/TeleopMode.idl
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
#include "arms_ros2_control_msgs/msg/detail/teleop_mode__struct.h"
#include "arms_ros2_control_msgs/msg/detail/teleop_mode__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool arms_ros2_control_msgs__msg__teleop_mode__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("arms_ros2_control_msgs.msg._teleop_mode.TeleopMode", full_classname_dest, 50) == 0);
  }
  arms_ros2_control_msgs__msg__TeleopMode * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirror_movement
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirror_movement");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mirror_movement = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_level = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_scale
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_scale");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_scale = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arms_ros2_control_msgs__msg__teleop_mode__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TeleopMode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arms_ros2_control_msgs.msg._teleop_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TeleopMode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arms_ros2_control_msgs__msg__TeleopMode * ros_message = (arms_ros2_control_msgs__msg__TeleopMode *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirror_movement
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mirror_movement ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirror_movement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_scale
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_scale);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_scale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
