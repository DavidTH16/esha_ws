import rclpy
from rclpy.node import Node
from std_msgs.msg import String     # if user decide do teleoperation
from geometry_msgs.msg import Twist # if user decide do teleoperation
import random


class VelocityNode(Node):
    def __init__(self):
        super().__init__('velocity_node')

        #define the subscriber for teleoperation
        #remove the comments for teleoperation node
        #self.subcriber= self.create_subscription(
        #    String,
        #    'keyboard_input',
        #    self.keyboard_callback,
        #    10
        #)

        #define the publisher
        self.publisher=self.create_publisher(Twist,'cmd_vel',10)
        self.timer=self.create_timer(1,self.publish_velocity)
        self.counter=0

# remove the commands for manual teleoperation
# def keyboar_callback(self,msg):
#
#     command =msg.data()
#     twist= Twist()
#
#     match twist:
#         case 'w':  #forward
#             twist.linear.x =0.5
#         case 's':  #backward
#             twist.linear.x =-0.5
#         case 'a':  #left
#             twist.angular.z=0.5
#         case 'd':  #right
#             twist.angular.z=-0.5
#         #user shoudl include exception
#         #when command is not found
#     
#     self.publisher.publish(twist)
#     self.get_logger().info(f"Publishing velocity: {twist}")

    def publish_velocity(self):
        #command='w'
        self.counter +=1
        twist=Twist()
        if self.counter % 5 ==0:
            # to simulate velocity is zero
            twist.linear.x = 0.0 #random.choice([0.0,0.5])
        else:
            twist.linear.x=0.5
        self.publisher.publish(twist)
        self.get_logger().info(f"Published velocity: {twist.linear.x}")

def main(args=None):
    rclpy.init(args=args)
    node = VelocityNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()