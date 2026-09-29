# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arms_ros2_control_msgs:msg/WbcCapability.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WbcCapability(type):
    """Metaclass of message 'WbcCapability'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arms_ros2_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arms_ros2_control_msgs.msg.WbcCapability')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wbc_capability
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wbc_capability
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wbc_capability
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wbc_capability
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wbc_capability

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WbcCapability(metaclass=Metaclass_WbcCapability):
    """Message class 'WbcCapability'."""

    __slots__ = [
        '_has_mobile_base',
        '_has_body_relative_constraint',
        '_has_waist_lock',
        '_has_head_coupling',
        '_has_custom_joint_lock',
        '_has_bimanual_coupling',
        '_body_tracking_ee_enabled',
        '_head_tracking_ee_enabled',
        '_has_home_joint_reference',
        '_head_midpoint_gaze_enabled',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'has_mobile_base': 'boolean',
        'has_body_relative_constraint': 'boolean',
        'has_waist_lock': 'boolean',
        'has_head_coupling': 'boolean',
        'has_custom_joint_lock': 'boolean',
        'has_bimanual_coupling': 'boolean',
        'body_tracking_ee_enabled': 'boolean',
        'head_tracking_ee_enabled': 'boolean',
        'has_home_joint_reference': 'boolean',
        'head_midpoint_gaze_enabled': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.has_mobile_base = kwargs.get('has_mobile_base', bool())
        self.has_body_relative_constraint = kwargs.get('has_body_relative_constraint', bool())
        self.has_waist_lock = kwargs.get('has_waist_lock', bool())
        self.has_head_coupling = kwargs.get('has_head_coupling', bool())
        self.has_custom_joint_lock = kwargs.get('has_custom_joint_lock', bool())
        self.has_bimanual_coupling = kwargs.get('has_bimanual_coupling', bool())
        self.body_tracking_ee_enabled = kwargs.get('body_tracking_ee_enabled', bool())
        self.head_tracking_ee_enabled = kwargs.get('head_tracking_ee_enabled', bool())
        self.has_home_joint_reference = kwargs.get('has_home_joint_reference', bool())
        self.head_midpoint_gaze_enabled = kwargs.get('head_midpoint_gaze_enabled', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.has_mobile_base != other.has_mobile_base:
            return False
        if self.has_body_relative_constraint != other.has_body_relative_constraint:
            return False
        if self.has_waist_lock != other.has_waist_lock:
            return False
        if self.has_head_coupling != other.has_head_coupling:
            return False
        if self.has_custom_joint_lock != other.has_custom_joint_lock:
            return False
        if self.has_bimanual_coupling != other.has_bimanual_coupling:
            return False
        if self.body_tracking_ee_enabled != other.body_tracking_ee_enabled:
            return False
        if self.head_tracking_ee_enabled != other.head_tracking_ee_enabled:
            return False
        if self.has_home_joint_reference != other.has_home_joint_reference:
            return False
        if self.head_midpoint_gaze_enabled != other.head_midpoint_gaze_enabled:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def has_mobile_base(self):
        """Message field 'has_mobile_base'."""
        return self._has_mobile_base

    @has_mobile_base.setter
    def has_mobile_base(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_mobile_base' field must be of type 'bool'"
        self._has_mobile_base = value

    @builtins.property
    def has_body_relative_constraint(self):
        """Message field 'has_body_relative_constraint'."""
        return self._has_body_relative_constraint

    @has_body_relative_constraint.setter
    def has_body_relative_constraint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_body_relative_constraint' field must be of type 'bool'"
        self._has_body_relative_constraint = value

    @builtins.property
    def has_waist_lock(self):
        """Message field 'has_waist_lock'."""
        return self._has_waist_lock

    @has_waist_lock.setter
    def has_waist_lock(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_waist_lock' field must be of type 'bool'"
        self._has_waist_lock = value

    @builtins.property
    def has_head_coupling(self):
        """Message field 'has_head_coupling'."""
        return self._has_head_coupling

    @has_head_coupling.setter
    def has_head_coupling(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_head_coupling' field must be of type 'bool'"
        self._has_head_coupling = value

    @builtins.property
    def has_custom_joint_lock(self):
        """Message field 'has_custom_joint_lock'."""
        return self._has_custom_joint_lock

    @has_custom_joint_lock.setter
    def has_custom_joint_lock(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_custom_joint_lock' field must be of type 'bool'"
        self._has_custom_joint_lock = value

    @builtins.property
    def has_bimanual_coupling(self):
        """Message field 'has_bimanual_coupling'."""
        return self._has_bimanual_coupling

    @has_bimanual_coupling.setter
    def has_bimanual_coupling(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_bimanual_coupling' field must be of type 'bool'"
        self._has_bimanual_coupling = value

    @builtins.property
    def body_tracking_ee_enabled(self):
        """Message field 'body_tracking_ee_enabled'."""
        return self._body_tracking_ee_enabled

    @body_tracking_ee_enabled.setter
    def body_tracking_ee_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'body_tracking_ee_enabled' field must be of type 'bool'"
        self._body_tracking_ee_enabled = value

    @builtins.property
    def head_tracking_ee_enabled(self):
        """Message field 'head_tracking_ee_enabled'."""
        return self._head_tracking_ee_enabled

    @head_tracking_ee_enabled.setter
    def head_tracking_ee_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'head_tracking_ee_enabled' field must be of type 'bool'"
        self._head_tracking_ee_enabled = value

    @builtins.property
    def has_home_joint_reference(self):
        """Message field 'has_home_joint_reference'."""
        return self._has_home_joint_reference

    @has_home_joint_reference.setter
    def has_home_joint_reference(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_home_joint_reference' field must be of type 'bool'"
        self._has_home_joint_reference = value

    @builtins.property
    def head_midpoint_gaze_enabled(self):
        """Message field 'head_midpoint_gaze_enabled'."""
        return self._head_midpoint_gaze_enabled

    @head_midpoint_gaze_enabled.setter
    def head_midpoint_gaze_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'head_midpoint_gaze_enabled' field must be of type 'bool'"
        self._head_midpoint_gaze_enabled = value
