import rclpy
from rclpy.node import Node
from interfaces.msg import CurrentVelocityData
import random

class ArmCurrentNode(Node):
    def __init__(self):
        super().__init__('arm_current_node')

        #define publisher to send the arm current
        #message define by the user
        self.publisher= self.create_publisher(CurrentVelocityData,'arm_current_talker',10)
        self.arm_current =0

        #timer and callback
        self.timer=self.create_timer(1,self.publish_timer)
        self.counter=0

        #transition to simulate current
        self.transition_mode= False

    def publish_timer(self):
        self.counter +=1
        if self.counter % 5 == 0:
            if random.random()< 0.5:
                self.transition_mode=True

        if self.transition_mode:
            self.arm_current=random.uniform(1000.0,2000.0)
            self.transition_mode=False
        else:
            self.arm_current=random.uniform(0.0,900.0)

        current_msg=CurrentVelocityData()
        current_msg.arm_current=self.arm_current
        self.publisher.publish(current_msg)

        # info or warm depending on the current
        if current_msg.arm_current < 900:
            self.get_logger().info(f"Arm current:{current_msg.arm_current}")
        else:
            self.get_logger().warning(f"Arm current:{current_msg.arm_current}")


def main(args=None):
    rclpy.init(args=args)
    current_node = ArmCurrentNode()
    rclpy.spin(current_node)
    current_node.destroy_node()
    rclpy.shutdown()


if __name__ =='__main__':
    main()