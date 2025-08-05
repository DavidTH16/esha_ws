# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/CurrentVelocityData.idl
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


class Metaclass_CurrentVelocityData(type):
    """Metaclass of message 'CurrentVelocityData'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.CurrentVelocityData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__current_velocity_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__current_velocity_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__current_velocity_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__current_velocity_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__current_velocity_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CurrentVelocityData(metaclass=Metaclass_CurrentVelocityData):
    """Message class 'CurrentVelocityData'."""

    __slots__ = [
        '_motor_current',
        '_arm_current',
        '_angular_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'motor_current': 'float',
        'arm_current': 'float',
        'angular_z': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.motor_current = kwargs.get('motor_current', float())
        self.arm_current = kwargs.get('arm_current', float())
        self.angular_z = kwargs.get('angular_z', float())

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
        if self.motor_current != other.motor_current:
            return False
        if self.arm_current != other.arm_current:
            return False
        if self.angular_z != other.angular_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_current(self):
        """Message field 'motor_current'."""
        return self._motor_current

    @motor_current.setter
    def motor_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'motor_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_current = value

    @builtins.property
    def arm_current(self):
        """Message field 'arm_current'."""
        return self._arm_current

    @arm_current.setter
    def arm_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'arm_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_current = value

    @builtins.property
    def angular_z(self):
        """Message field 'angular_z'."""
        return self._angular_z

    @angular_z.setter
    def angular_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'angular_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_z = value
