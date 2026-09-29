# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arms_ros2_control_msgs:msg/LinearMessage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LinearMessage(type):
    """Metaclass of message 'LinearMessage'."""

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
                'arms_ros2_control_msgs.msg.LinearMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__linear_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__linear_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__linear_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__linear_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__linear_message

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMessage(metaclass=Metaclass_LinearMessage):
    """Message class 'LinearMessage'."""

    __slots__ = [
        '_endpoint',
        '_right_endpoint',
        '_max_linear_velocity',
        '_max_linear_acceleration',
        '_max_linear_jerk',
        '_max_angular_velocity',
        '_max_angular_acceleration',
        '_max_angular_jerk',
        '_duration',
        '_time_mode',
        '_frame_id',
        '_arm_name',
        '_ik_type',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'endpoint': 'geometry_msgs/Pose',
        'right_endpoint': 'geometry_msgs/Pose',
        'max_linear_velocity': 'double',
        'max_linear_acceleration': 'double',
        'max_linear_jerk': 'double',
        'max_angular_velocity': 'double',
        'max_angular_acceleration': 'double',
        'max_angular_jerk': 'double',
        'duration': 'double',
        'time_mode': 'boolean',
        'frame_id': 'string',
        'arm_name': 'string',
        'ik_type': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        from geometry_msgs.msg import Pose
        self.endpoint = kwargs.get('endpoint', Pose())
        from geometry_msgs.msg import Pose
        self.right_endpoint = kwargs.get('right_endpoint', Pose())
        self.max_linear_velocity = kwargs.get('max_linear_velocity', float())
        self.max_linear_acceleration = kwargs.get('max_linear_acceleration', float())
        self.max_linear_jerk = kwargs.get('max_linear_jerk', float())
        self.max_angular_velocity = kwargs.get('max_angular_velocity', float())
        self.max_angular_acceleration = kwargs.get('max_angular_acceleration', float())
        self.max_angular_jerk = kwargs.get('max_angular_jerk', float())
        self.duration = kwargs.get('duration', float())
        self.time_mode = kwargs.get('time_mode', bool())
        self.frame_id = kwargs.get('frame_id', str())
        self.arm_name = kwargs.get('arm_name', str())
        self.ik_type = kwargs.get('ik_type', str())

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
        if self.endpoint != other.endpoint:
            return False
        if self.right_endpoint != other.right_endpoint:
            return False
        if self.max_linear_velocity != other.max_linear_velocity:
            return False
        if self.max_linear_acceleration != other.max_linear_acceleration:
            return False
        if self.max_linear_jerk != other.max_linear_jerk:
            return False
        if self.max_angular_velocity != other.max_angular_velocity:
            return False
        if self.max_angular_acceleration != other.max_angular_acceleration:
            return False
        if self.max_angular_jerk != other.max_angular_jerk:
            return False
        if self.duration != other.duration:
            return False
        if self.time_mode != other.time_mode:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.arm_name != other.arm_name:
            return False
        if self.ik_type != other.ik_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def endpoint(self):
        """Message field 'endpoint'."""
        return self._endpoint

    @endpoint.setter
    def endpoint(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'endpoint' field must be a sub message of type 'Pose'"
        self._endpoint = value

    @builtins.property
    def right_endpoint(self):
        """Message field 'right_endpoint'."""
        return self._right_endpoint

    @right_endpoint.setter
    def right_endpoint(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'right_endpoint' field must be a sub message of type 'Pose'"
        self._right_endpoint = value

    @builtins.property
    def max_linear_velocity(self):
        """Message field 'max_linear_velocity'."""
        return self._max_linear_velocity

    @max_linear_velocity.setter
    def max_linear_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_linear_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_linear_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_linear_velocity = value

    @builtins.property
    def max_linear_acceleration(self):
        """Message field 'max_linear_acceleration'."""
        return self._max_linear_acceleration

    @max_linear_acceleration.setter
    def max_linear_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_linear_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_linear_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_linear_acceleration = value

    @builtins.property
    def max_linear_jerk(self):
        """Message field 'max_linear_jerk'."""
        return self._max_linear_jerk

    @max_linear_jerk.setter
    def max_linear_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_linear_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_linear_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_linear_jerk = value

    @builtins.property
    def max_angular_velocity(self):
        """Message field 'max_angular_velocity'."""
        return self._max_angular_velocity

    @max_angular_velocity.setter
    def max_angular_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_angular_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_angular_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_angular_velocity = value

    @builtins.property
    def max_angular_acceleration(self):
        """Message field 'max_angular_acceleration'."""
        return self._max_angular_acceleration

    @max_angular_acceleration.setter
    def max_angular_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_angular_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_angular_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_angular_acceleration = value

    @builtins.property
    def max_angular_jerk(self):
        """Message field 'max_angular_jerk'."""
        return self._max_angular_jerk

    @max_angular_jerk.setter
    def max_angular_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_angular_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_angular_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_angular_jerk = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration = value

    @builtins.property
    def time_mode(self):
        """Message field 'time_mode'."""
        return self._time_mode

    @time_mode.setter
    def time_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'time_mode' field must be of type 'bool'"
        self._time_mode = value

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

    @builtins.property
    def arm_name(self):
        """Message field 'arm_name'."""
        return self._arm_name

    @arm_name.setter
    def arm_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'arm_name' field must be of type 'str'"
        self._arm_name = value

    @builtins.property
    def ik_type(self):
        """Message field 'ik_type'."""
        return self._ik_type

    @ik_type.setter
    def ik_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'ik_type' field must be of type 'str'"
        self._ik_type = value
