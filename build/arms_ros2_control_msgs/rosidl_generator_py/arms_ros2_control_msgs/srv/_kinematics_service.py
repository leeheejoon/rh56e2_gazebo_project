# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arms_ros2_control_msgs:srv/KinematicsService.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'joint_angles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KinematicsService_Request(type):
    """Metaclass of message 'KinematicsService_Request'."""

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
                'arms_ros2_control_msgs.srv.KinematicsService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__kinematics_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__kinematics_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__kinematics_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__kinematics_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__kinematics_service__request

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


class KinematicsService_Request(metaclass=Metaclass_KinematicsService_Request):
    """Message class 'KinematicsService_Request'."""

    __slots__ = [
        '_operation_type',
        '_arm_type',
        '_solver_type',
        '_joint_angles',
        '_target_poses',
        '_max_iterations',
        '_tolerance',
        '_dls_damping',
        '_enable_random_restart',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'operation_type': 'string',
        'arm_type': 'string',
        'solver_type': 'string',
        'joint_angles': 'sequence<double>',
        'target_poses': 'sequence<geometry_msgs/Pose>',
        'max_iterations': 'int32',
        'tolerance': 'double',
        'dls_damping': 'double',
        'enable_random_restart': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.operation_type = kwargs.get('operation_type', str())
        self.arm_type = kwargs.get('arm_type', str())
        self.solver_type = kwargs.get('solver_type', str())
        self.joint_angles = array.array('d', kwargs.get('joint_angles', []))
        self.target_poses = kwargs.get('target_poses', [])
        self.max_iterations = kwargs.get('max_iterations', int())
        self.tolerance = kwargs.get('tolerance', float())
        self.dls_damping = kwargs.get('dls_damping', float())
        self.enable_random_restart = kwargs.get('enable_random_restart', bool())

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
        if self.operation_type != other.operation_type:
            return False
        if self.arm_type != other.arm_type:
            return False
        if self.solver_type != other.solver_type:
            return False
        if self.joint_angles != other.joint_angles:
            return False
        if self.target_poses != other.target_poses:
            return False
        if self.max_iterations != other.max_iterations:
            return False
        if self.tolerance != other.tolerance:
            return False
        if self.dls_damping != other.dls_damping:
            return False
        if self.enable_random_restart != other.enable_random_restart:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operation_type(self):
        """Message field 'operation_type'."""
        return self._operation_type

    @operation_type.setter
    def operation_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'operation_type' field must be of type 'str'"
        self._operation_type = value

    @builtins.property
    def arm_type(self):
        """Message field 'arm_type'."""
        return self._arm_type

    @arm_type.setter
    def arm_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'arm_type' field must be of type 'str'"
        self._arm_type = value

    @builtins.property
    def solver_type(self):
        """Message field 'solver_type'."""
        return self._solver_type

    @solver_type.setter
    def solver_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'solver_type' field must be of type 'str'"
        self._solver_type = value

    @builtins.property
    def joint_angles(self):
        """Message field 'joint_angles'."""
        return self._joint_angles

    @joint_angles.setter
    def joint_angles(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_angles' array.array() must have the type code of 'd'"
                self._joint_angles = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_angles' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_angles = array.array('d', value)

    @builtins.property
    def target_poses(self):
        """Message field 'target_poses'."""
        return self._target_poses

    @target_poses.setter
    def target_poses(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'target_poses' field must be a set or sequence and each value of type 'Pose'"
        self._target_poses = value

    @builtins.property
    def max_iterations(self):
        """Message field 'max_iterations'."""
        return self._max_iterations

    @max_iterations.setter
    def max_iterations(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_iterations' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_iterations' field must be an integer in [-2147483648, 2147483647]"
        self._max_iterations = value

    @builtins.property
    def tolerance(self):
        """Message field 'tolerance'."""
        return self._tolerance

    @tolerance.setter
    def tolerance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tolerance = value

    @builtins.property
    def dls_damping(self):
        """Message field 'dls_damping'."""
        return self._dls_damping

    @dls_damping.setter
    def dls_damping(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'dls_damping' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dls_damping' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dls_damping = value

    @builtins.property
    def enable_random_restart(self):
        """Message field 'enable_random_restart'."""
        return self._enable_random_restart

    @enable_random_restart.setter
    def enable_random_restart(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_random_restart' field must be of type 'bool'"
        self._enable_random_restart = value


# Import statements for member types

# Member 'result_joint_angles'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_KinematicsService_Response(type):
    """Metaclass of message 'KinematicsService_Response'."""

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
                'arms_ros2_control_msgs.srv.KinematicsService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__kinematics_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__kinematics_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__kinematics_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__kinematics_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__kinematics_service__response

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


class KinematicsService_Response(metaclass=Metaclass_KinematicsService_Response):
    """Message class 'KinematicsService_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_result_poses',
        '_result_joint_angles',
        '_used_solver',
        '_iterations',
        '_final_error',
        '_computation_time_ms',
        '_is_out_of_range',
        '_additional_info',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'result_poses': 'sequence<geometry_msgs/Pose>',
        'result_joint_angles': 'sequence<double>',
        'used_solver': 'string',
        'iterations': 'int32',
        'final_error': 'double',
        'computation_time_ms': 'double',
        'is_out_of_range': 'boolean',
        'additional_info': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.result_poses = kwargs.get('result_poses', [])
        self.result_joint_angles = array.array('d', kwargs.get('result_joint_angles', []))
        self.used_solver = kwargs.get('used_solver', str())
        self.iterations = kwargs.get('iterations', int())
        self.final_error = kwargs.get('final_error', float())
        self.computation_time_ms = kwargs.get('computation_time_ms', float())
        self.is_out_of_range = kwargs.get('is_out_of_range', bool())
        self.additional_info = kwargs.get('additional_info', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.result_poses != other.result_poses:
            return False
        if self.result_joint_angles != other.result_joint_angles:
            return False
        if self.used_solver != other.used_solver:
            return False
        if self.iterations != other.iterations:
            return False
        if self.final_error != other.final_error:
            return False
        if self.computation_time_ms != other.computation_time_ms:
            return False
        if self.is_out_of_range != other.is_out_of_range:
            return False
        if self.additional_info != other.additional_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def result_poses(self):
        """Message field 'result_poses'."""
        return self._result_poses

    @result_poses.setter
    def result_poses(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'result_poses' field must be a set or sequence and each value of type 'Pose'"
        self._result_poses = value

    @builtins.property
    def result_joint_angles(self):
        """Message field 'result_joint_angles'."""
        return self._result_joint_angles

    @result_joint_angles.setter
    def result_joint_angles(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'result_joint_angles' array.array() must have the type code of 'd'"
                self._result_joint_angles = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'result_joint_angles' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._result_joint_angles = array.array('d', value)

    @builtins.property
    def used_solver(self):
        """Message field 'used_solver'."""
        return self._used_solver

    @used_solver.setter
    def used_solver(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'used_solver' field must be of type 'str'"
        self._used_solver = value

    @builtins.property
    def iterations(self):
        """Message field 'iterations'."""
        return self._iterations

    @iterations.setter
    def iterations(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'iterations' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'iterations' field must be an integer in [-2147483648, 2147483647]"
        self._iterations = value

    @builtins.property
    def final_error(self):
        """Message field 'final_error'."""
        return self._final_error

    @final_error.setter
    def final_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'final_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'final_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._final_error = value

    @builtins.property
    def computation_time_ms(self):
        """Message field 'computation_time_ms'."""
        return self._computation_time_ms

    @computation_time_ms.setter
    def computation_time_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'computation_time_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'computation_time_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._computation_time_ms = value

    @builtins.property
    def is_out_of_range(self):
        """Message field 'is_out_of_range'."""
        return self._is_out_of_range

    @is_out_of_range.setter
    def is_out_of_range(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_out_of_range' field must be of type 'bool'"
        self._is_out_of_range = value

    @builtins.property
    def additional_info(self):
        """Message field 'additional_info'."""
        return self._additional_info

    @additional_info.setter
    def additional_info(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'additional_info' field must be of type 'str'"
        self._additional_info = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_KinematicsService_Event(type):
    """Metaclass of message 'KinematicsService_Event'."""

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
                'arms_ros2_control_msgs.srv.KinematicsService_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__kinematics_service__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__kinematics_service__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__kinematics_service__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__kinematics_service__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__kinematics_service__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KinematicsService_Event(metaclass=Metaclass_KinematicsService_Event):
    """Message class 'KinematicsService_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<arms_ros2_control_msgs/KinematicsService_Request, 1>',
        'response': 'sequence<arms_ros2_control_msgs/KinematicsService_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arms_ros2_control_msgs', 'srv'], 'KinematicsService_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arms_ros2_control_msgs', 'srv'], 'KinematicsService_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from arms_ros2_control_msgs.srv import KinematicsService_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, KinematicsService_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'KinematicsService_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from arms_ros2_control_msgs.srv import KinematicsService_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, KinematicsService_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'KinematicsService_Response'"
        self._response = value


class Metaclass_KinematicsService(type):
    """Metaclass of service 'KinematicsService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arms_ros2_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arms_ros2_control_msgs.srv.KinematicsService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__kinematics_service

            from arms_ros2_control_msgs.srv import _kinematics_service
            if _kinematics_service.Metaclass_KinematicsService_Request._TYPE_SUPPORT is None:
                _kinematics_service.Metaclass_KinematicsService_Request.__import_type_support__()
            if _kinematics_service.Metaclass_KinematicsService_Response._TYPE_SUPPORT is None:
                _kinematics_service.Metaclass_KinematicsService_Response.__import_type_support__()
            if _kinematics_service.Metaclass_KinematicsService_Event._TYPE_SUPPORT is None:
                _kinematics_service.Metaclass_KinematicsService_Event.__import_type_support__()


class KinematicsService(metaclass=Metaclass_KinematicsService):
    from arms_ros2_control_msgs.srv._kinematics_service import KinematicsService_Request as Request
    from arms_ros2_control_msgs.srv._kinematics_service import KinematicsService_Response as Response
    from arms_ros2_control_msgs.srv._kinematics_service import KinematicsService_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
