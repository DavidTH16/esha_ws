from launch import LaunchDescription
from launch_ros.actions import Node

# describe the nodes to be used in the launch file 
# every node should inlcude 

def generate_launch_description():
    ld=LaunchDescription()

    veolocity_node=Node(
        package='inter_package',
        executable='velocity_node',
        output='screen'
    )

    ultrasonic_node=Node(
        package='inter_package',
        executable='ultrasonic_node'
    )

    temperature_node=Node(
        package='inter_package',
        executable='temperature_node'
    )

    motor_current_node=Node(
        package='inter_package',
        executable='motor_current_node'
    )

    imu_node=Node(
        package='inter_package',
        executable='imu_node'
    )

    co_node=Node(
        package='inter_package',
        executable='co_node'
    )

    camera_node=Node(
        package='inter_package',
        executable='camera_node'
    )

    arm_current_node=Node(
        package='inter_package',
        executable='arm_current_node'
    )

    ld.add_action(arm_current_node)
    ld.add_action(camera_node)
    ld.add_action(co_node)
    ld.add_action(imu_node)
    ld.add_action(motor_current_node)
    ld.add_action(veolocity_node)
    ld.add_action(ultrasonic_node)
    ld.add_action(temperature_node)
   
    return ld