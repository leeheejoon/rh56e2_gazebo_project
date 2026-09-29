// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
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
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__struct.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_current_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool arms_ros2_control_msgs__msg__wbc_current_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("arms_ros2_control_msgs.msg._wbc_current_state.WbcCurrentState", full_classname_dest, 61) == 0);
  }
  arms_ros2_control_msgs__msg__WbcCurrentState * ros_message = _ros_message;
  {  // base_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // body_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->body_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bimanual_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "bimanual_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bimanual_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_arm_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_arm_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_arm_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_arm_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_arm_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_arm_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // home_joint_reference_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_joint_reference_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->home_joint_reference_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // head_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // head_midpoint_gaze_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_midpoint_gaze_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->head_midpoint_gaze_active = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arms_ros2_control_msgs__msg__wbc_current_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WbcCurrentState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arms_ros2_control_msgs.msg._wbc_current_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WbcCurrentState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arms_ros2_control_msgs__msg__WbcCurrentState * ros_message = (arms_ros2_control_msgs__msg__WbcCurrentState *)raw_ros_message;
  {  // base_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->base_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->body_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bimanual_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bimanual_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bimanual_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_arm_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_arm_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_arm_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_arm_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_arm_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_arm_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_joint_reference_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->home_joint_reference_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_joint_reference_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->head_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_midpoint_gaze_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->head_midpoint_gaze_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_midpoint_gaze_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
