// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arms_ros2_control_msgs:msg/WbcCapability.idl
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
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__struct.h"
#include "arms_ros2_control_msgs/msg/detail/wbc_capability__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool arms_ros2_control_msgs__msg__wbc_capability__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("arms_ros2_control_msgs.msg._wbc_capability.WbcCapability", full_classname_dest, 56) == 0);
  }
  arms_ros2_control_msgs__msg__WbcCapability * ros_message = _ros_message;
  {  // has_mobile_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_mobile_base");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_mobile_base = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_body_relative_constraint
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_body_relative_constraint");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_body_relative_constraint = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_waist_lock
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_waist_lock");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_waist_lock = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_head_coupling
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_head_coupling");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_head_coupling = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_custom_joint_lock
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_custom_joint_lock");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_custom_joint_lock = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_bimanual_coupling
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_bimanual_coupling");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_bimanual_coupling = (Py_True == field);
    Py_DECREF(field);
  }
  {  // body_tracking_ee_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_tracking_ee_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->body_tracking_ee_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // head_tracking_ee_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_tracking_ee_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->head_tracking_ee_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_home_joint_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_home_joint_reference");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_home_joint_reference = (Py_True == field);
    Py_DECREF(field);
  }
  {  // head_midpoint_gaze_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_midpoint_gaze_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->head_midpoint_gaze_enabled = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arms_ros2_control_msgs__msg__wbc_capability__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WbcCapability */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arms_ros2_control_msgs.msg._wbc_capability");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WbcCapability");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arms_ros2_control_msgs__msg__WbcCapability * ros_message = (arms_ros2_control_msgs__msg__WbcCapability *)raw_ros_message;
  {  // has_mobile_base
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_mobile_base ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_mobile_base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_body_relative_constraint
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_body_relative_constraint ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_body_relative_constraint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_waist_lock
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_waist_lock ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_waist_lock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_head_coupling
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_head_coupling ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_head_coupling", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_custom_joint_lock
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_custom_joint_lock ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_custom_joint_lock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_bimanual_coupling
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_bimanual_coupling ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_bimanual_coupling", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_tracking_ee_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->body_tracking_ee_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_tracking_ee_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_tracking_ee_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->head_tracking_ee_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_tracking_ee_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_home_joint_reference
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_home_joint_reference ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_home_joint_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_midpoint_gaze_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->head_midpoint_gaze_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_midpoint_gaze_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
