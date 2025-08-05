from launch import LaunchDescription
from launch_ros.actions import Node

# describe the nodes to be used in the launch file 
# every node should inlcude 

def generate_launch_description():
    ld=LaunchDescription()

    arm_current_node=Node(
        package='inter_package',
        executable='arm_current_node'
    )

    ld.add_action(arm_current_node)
   
    return ld