import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

from ament_index_python.packages import get_package_share_directory

from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit


def generate_launch_description():

    ur5_rh56e2_share = get_package_share_directory(
        "ur5_rh56e2_description"
    )

    ros_gz_sim_share = get_package_share_directory(
        "ros_gz_sim"
    )

    xacro_file = os.path.join(
        ur5_rh56e2_share,
        "urdf",
        "ur5_rh56e2.urdf.xacro"
    )

    # Xacro -> URDF
    robot_description = ParameterValue(
    Command([
        "xacro ",
        xacro_file,
        " type:=RH56E2",
        " direction:=-1",
        " ros2_control_hardware_type:=gz",
        " gazebo:=true"
    ]),
    value_type=str
    )

    # robot_description publish
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{
            "robot_description": robot_description,
            "use_sim_time": True
        }],
        output="screen"
    )

    # Gazebo
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                ros_gz_sim_share,
                "launch",
                "gz_sim.launch.py"
            )
        ),
        launch_arguments={
            "gz_args": "-r empty.sdf"
        }.items()
    )

    # Gazebo clock -> ROS /clock
    clock_bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
            "/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock"
        ],
        output="screen"
    )

    # UR5 + RH56E2를 Gazebo에 spawn
    spawn_robot = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-name", "ur5_rh56e2",
            "-topic", "/robot_description",
            "-x", "0",
            "-y", "0",
            "-z", "0"
        ],
        output="screen"
    )

    # joint state broadcaster
    joint_state_broadcaster = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "/controller_manager",
            "--controller-manager-timeout",
            "30"
        ],
        output="screen"
    )


    fsm_init_node = Node(
    package="rh56e2_control",
    executable="fsm_init_node",
    output="screen"
    )

    hand_command_node = Node(
    package="rh56e2_control",
    executable="hand_command_node",
    output="screen"
    )


    # RH56E2 joint controller
    hand_joint_controller = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "hand_joint_controller",
            "--controller-manager",
            "/controller_manager",
            "--controller-manager-timeout",
            "30"
        ],
        output="screen"
    )

    start_fsm_after_controller = RegisterEventHandler(
        OnProcessExit(
            target_action=hand_joint_controller,
            on_exit=[
                fsm_init_node
            ]
        )
    )

    

    return LaunchDescription([
        robot_state_publisher,
        gazebo,
        clock_bridge,
        spawn_robot,

        joint_state_broadcaster,
        hand_joint_controller,

        start_fsm_after_controller,
    ])