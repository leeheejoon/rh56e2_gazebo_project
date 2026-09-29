from setuptools import find_packages
from setuptools import setup

setup(
    name='arms_ros2_control_msgs',
    version='1.1.0',
    packages=find_packages(
        include=('arms_ros2_control_msgs', 'arms_ros2_control_msgs.*')),
)
