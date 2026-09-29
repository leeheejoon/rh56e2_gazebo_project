# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arms_ros2_control_msgs:msg/WbcCurrentState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WbcCurrentState(type):
    """Metaclass of message 'WbcCurrentState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BASE_LOCKED': 0,
        'BASE_UNLOCKED': 1,
        'BODY_FREE': 0,
        'BODY_VERTICAL': 1,
        'BODY_TRACKING': 2,
        'BODY_LOCKED': 3,
        'BODY_CUSTOM_LOCKED': 5,
        'BIMANUAL_INDEPENDENT': 0,
        'BIMANUAL_COUPLED': 1,
        'ARM_DISABLED': 0,
        'ARM_ENABLED': 1,
        'HEAD_DISABLED': 0,
        'HEAD_TRACKING': 1,
        'HEAD_GAZE': 2,
        'HEAD_FORWARD': 3,
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
                'arms_ros2_control_msgs.msg.WbcCurrentState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wbc_current_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wbc_current_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wbc_current_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wbc_current_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wbc_current_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BASE_LOCKED': cls.__constants['BASE_LOCKED'],
            'BASE_UNLOCKED': cls.__constants['BASE_UNLOCKED'],
            'BODY_FREE': cls.__constants['BODY_FREE'],
            'BODY_VERTICAL': cls.__constants['BODY_VERTICAL'],
            'BODY_TRACKING': cls.__constants['BODY_TRACKING'],
            'BODY_LOCKED': cls.__constants['BODY_LOCKED'],
            'BODY_CUSTOM_LOCKED': cls.__constants['BODY_CUSTOM_LOCKED'],
            'BIMANUAL_INDEPENDENT': cls.__constants['BIMANUAL_INDEPENDENT'],
            'BIMANUAL_COUPLED': cls.__constants['BIMANUAL_COUPLED'],
            'ARM_DISABLED': cls.__constants['ARM_DISABLED'],
            'ARM_ENABLED': cls.__constants['ARM_ENABLED'],
            'HEAD_DISABLED': cls.__constants['HEAD_DISABLED'],
            'HEAD_TRACKING': cls.__constants['HEAD_TRACKING'],
            'HEAD_GAZE': cls.__constants['HEAD_GAZE'],
            'HEAD_FORWARD': cls.__constants['HEAD_FORWARD'],
        }

    @property
    def BASE_LOCKED(self):
        """Message constant 'BASE_LOCKED'."""
        return Metaclass_WbcCurrentState.__constants['BASE_LOCKED']

    @property
    def BASE_UNLOCKED(self):
        """Message constant 'BASE_UNLOCKED'."""
        return Metaclass_WbcCurrentState.__constants['BASE_UNLOCKED']

    @property
    def BODY_FREE(self):
        """Message constant 'BODY_FREE'."""
        return Metaclass_WbcCurrentState.__constants['BODY_FREE']

    @property
    def BODY_VERTICAL(self):
        """Message constant 'BODY_VERTICAL'."""
        return Metaclass_WbcCurrentState.__constants['BODY_VERTICAL']

    @property
    def BODY_TRACKING(self):
        """Message constant 'BODY_TRACKING'."""
        return Metaclass_WbcCurrentState.__constants['BODY_TRACKING']

    @property
    def BODY_LOCKED(self):
        """Message constant 'BODY_LOCKED'."""
        return Metaclass_WbcCurrentState.__constants['BODY_LOCKED']

    @property
    def BODY_CUSTOM_LOCKED(self):
        """Message constant 'BODY_CUSTOM_LOCKED'."""
        return Metaclass_WbcCurrentState.__constants['BODY_CUSTOM_LOCKED']

    @property
    def BIMANUAL_INDEPENDENT(self):
        """Message constant 'BIMANUAL_INDEPENDENT'."""
        return Metaclass_WbcCurrentState.__constants['BIMANUAL_INDEPENDENT']

    @property
    def BIMANUAL_COUPLED(self):
        """Message constant 'BIMANUAL_COUPLED'."""
        return Metaclass_WbcCurrentState.__constants['BIMANUAL_COUPLED']

    @property
    def ARM_DISABLED(self):
        """Message constant 'ARM_DISABLED'."""
        return Metaclass_WbcCurrentState.__constants['ARM_DISABLED']

    @property
    def ARM_ENABLED(self):
        """Message constant 'ARM_ENABLED'."""
        return Metaclass_WbcCurrentState.__constants['ARM_ENABLED']

    @property
    def HEAD_DISABLED(self):
        """Message constant 'HEAD_DISABLED'."""
        return Metaclass_WbcCurrentState.__constants['HEAD_DISABLED']

    @property
    def HEAD_TRACKING(self):
        """Message constant 'HEAD_TRACKING'."""
        return Metaclass_WbcCurrentState.__constants['HEAD_TRACKING']

    @property
    def HEAD_GAZE(self):
        """Message constant 'HEAD_GAZE'."""
        return Metaclass_WbcCurrentState.__constants['HEAD_GAZE']

    @property
    def HEAD_FORWARD(self):
        """Message constant 'HEAD_FORWARD'."""
        return Metaclass_WbcCurrentState.__constants['HEAD_FORWARD']


class WbcCurrentState(metaclass=Metaclass_WbcCurrentState):
    """
    Message class 'WbcCurrentState'.

    Constants:
      BASE_LOCKED
      BASE_UNLOCKED
      BODY_FREE
      BODY_VERTICAL
      BODY_TRACKING
      BODY_LOCKED
      BODY_CUSTOM_LOCKED
      BIMANUAL_INDEPENDENT
      BIMANUAL_COUPLED
      ARM_DISABLED
      ARM_ENABLED
      HEAD_DISABLED
      HEAD_TRACKING
      HEAD_GAZE
      HEAD_FORWARD
    """

    __slots__ = [
        '_base_state',
        '_body_state',
        '_bimanual_state',
        '_left_arm_state',
        '_right_arm_state',
        '_home_joint_reference_enabled',
        '_head_state',
        '_head_midpoint_gaze_active',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'base_state': 'uint8',
        'body_state': 'uint8',
        'bimanual_state': 'uint8',
        'left_arm_state': 'uint8',
        'right_arm_state': 'uint8',
        'home_joint_reference_enabled': 'boolean',
        'head_state': 'uint8',
        'head_midpoint_gaze_active': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.base_state = kwargs.get('base_state', int())
        self.body_state = kwargs.get('body_state', int())
        self.bimanual_state = kwargs.get('bimanual_state', int())
        self.left_arm_state = kwargs.get('left_arm_state', int())
        self.right_arm_state = kwargs.get('right_arm_state', int())
        self.home_joint_reference_enabled = kwargs.get('home_joint_reference_enabled', bool())
        self.head_state = kwargs.get('head_state', int())
        self.head_midpoint_gaze_active = kwargs.get('head_midpoint_gaze_active', bool())

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
        if self.base_state != other.base_state:
            return False
        if self.body_state != other.body_state:
            return False
        if self.bimanual_state != other.bimanual_state:
            return False
        if self.left_arm_state != other.left_arm_state:
            return False
        if self.right_arm_state != other.right_arm_state:
            return False
        if self.home_joint_reference_enabled != other.home_joint_reference_enabled:
            return False
        if self.head_state != other.head_state:
            return False
        if self.head_midpoint_gaze_active != other.head_midpoint_gaze_active:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_state(self):
        """Message field 'base_state'."""
        return self._base_state

    @base_state.setter
    def base_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'base_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'base_state' field must be an unsigned integer in [0, 255]"
        self._base_state = value

    @builtins.property
    def body_state(self):
        """Message field 'body_state'."""
        return self._body_state

    @body_state.setter
    def body_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'body_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'body_state' field must be an unsigned integer in [0, 255]"
        self._body_state = value

    @builtins.property
    def bimanual_state(self):
        """Message field 'bimanual_state'."""
        return self._bimanual_state

    @bimanual_state.setter
    def bimanual_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bimanual_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bimanual_state' field must be an unsigned integer in [0, 255]"
        self._bimanual_state = value

    @builtins.property
    def left_arm_state(self):
        """Message field 'left_arm_state'."""
        return self._left_arm_state

    @left_arm_state.setter
    def left_arm_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'left_arm_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_arm_state' field must be an unsigned integer in [0, 255]"
        self._left_arm_state = value

    @builtins.property
    def right_arm_state(self):
        """Message field 'right_arm_state'."""
        return self._right_arm_state

    @right_arm_state.setter
    def right_arm_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'right_arm_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_arm_state' field must be an unsigned integer in [0, 255]"
        self._right_arm_state = value

    @builtins.property
    def home_joint_reference_enabled(self):
        """Message field 'home_joint_reference_enabled'."""
        return self._home_joint_reference_enabled

    @home_joint_reference_enabled.setter
    def home_joint_reference_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'home_joint_reference_enabled' field must be of type 'bool'"
        self._home_joint_reference_enabled = value

    @builtins.property
    def head_state(self):
        """Message field 'head_state'."""
        return self._head_state

    @head_state.setter
    def head_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'head_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'head_state' field must be an unsigned integer in [0, 255]"
        self._head_state = value

    @builtins.property
    def head_midpoint_gaze_active(self):
        """Message field 'head_midpoint_gaze_active'."""
        return self._head_midpoint_gaze_active

    @head_midpoint_gaze_active.setter
    def head_midpoint_gaze_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'head_midpoint_gaze_active' field must be of type 'bool'"
        self._head_midpoint_gaze_active = value
