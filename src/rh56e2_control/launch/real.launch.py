"""Run one physical RH56E2 hand with the shared hand controller."""

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo, RegisterEventHandler
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import Command, FindExecutable, LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    inspire_share = get_package_share_directory("inspire_description")
    xacro_file = os.path.join(inspire_share, "xacro", "ros2_control", "hand.xacro")
    controller_yaml = os.path.join(
        inspire_share, "config", "ros2_control", "RH56E2.yaml"
    )

    robot_description = ParameterValue(
        Command([
            FindExecutable(name="xacro"), " ", xacro_file,
            " type:=RH56E2",
            " name:=",
            " direction:=", LaunchConfiguration("direction"),
            " ros2_control_hardware_type:=real",
            " gazebo:=false",
            " serial_port:=", LaunchConfiguration("serial_port"),
            " baudrate:=", LaunchConfiguration("baudrate"),
            " read_feedback:=true",
        ]),
        value_type=str,
    )

    state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description, "use_sim_time": False}],
        output="screen",
    )
    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[controller_yaml, {"use_sim_time": False}],
        remappings=[("~/robot_description", "/robot_description")],
        output="screen",
    )
    state_broadcaster = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager", "/controller_manager",
            "--controller-manager-timeout", "60",
        ],
        output="screen",
    )
    hand_controller = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "hand_joint_controller",
            "--controller-manager", "/controller_manager",
            "--controller-manager-timeout", "60",
        ],
        output="screen",
    )
    fsm_init = Node(
        package="rh56e2_control",
        executable="fsm_init_node",
        condition=IfCondition(LaunchConfiguration("initialize_fsm")),
        output="screen",
    )

    def after_hand_controller(event, context):
        if event.returncode != 0:
            return [LogInfo(msg="Hand controller activation failed; FSM was not started.")]
        return [fsm_init]

    return LaunchDescription([
        DeclareLaunchArgument(
            "serial_port", default_value="/dev/ttyUSB0",
            description="USB-RS485 device path (a /dev/serial/by-id path is also accepted).",
        ),
        DeclareLaunchArgument("baudrate", default_value="115200"),
        DeclareLaunchArgument(
            "direction", default_value="-1", choices=["-1", "1"],
            description="-1: right hand (default ID 1); 1: left hand (default ID 2).",
        ),
        DeclareLaunchArgument(
            "initialize_fsm", default_value="true", choices=["true", "false"],
            description="Send HOLD then MOVEJ after controller activation; no grasp target is sent.",
        ),
        RegisterEventHandler(OnProcessExit(
            target_action=hand_controller, on_exit=after_hand_controller,
        )),
        state_publisher,
        control_node,
        state_broadcaster,
        hand_controller,
    ])