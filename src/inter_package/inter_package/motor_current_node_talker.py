import rclpy
from rclpy.node import Node
from interfaces.msg import CurrentVelocityData
import random


# class used to create de node to simulate the current
# for the wheels' motors.

class CurrentWheelNode(Node):
    def __init__(self):
        super().__init__('motor_current_node')

        #define publisher to send the motor current
        # message defined by user 
        self.publisher =self.create_publisher(CurrentVelocityData,'motor_current_talker',10)
        self.motor_current =0
        self.angular_velocity = 0

        # timer to publish the message frequently
        #timer and callback
        # 1[Hz]   -----> 1 sec
        # 100[hz] -----> 0.01 sec
        self.frequency=1
        self.timer = self.create_timer(self.frequency,self.publish_timer)
        self.counter=0

        #transition to simulate a change in the current
        self.transition_mode =False


    def publish_timer(self):
        #publishing the current 
        # every 5 times simulate that a change in the current might happen
        self.counter+=1
        if self.counter % 5 ==0:
            if random.random() < 0.5:
                self.transition_mode=True

        if self.transition_mode:
            # over current ---> change in the current
            self.motor_current=random.uniform(800.0,1000.0)
            self.amgular_velocity=0.0
            self.transition_mode=False
        else:
            self.motor_current=random.uniform(100.0, 500.0)
            self.angular_velocity=0.5

        data_msg=CurrentVelocityData()
        data_msg.motor_current=self.motor_current
        data_msg.angular_z=self.angular_velocity
        self.publisher.publish(data_msg)

        # info or warm depending on the current
        if data_msg.motor_current < 500:
            self.get_logger().info(f"Motor current:{data_msg.motor_current}, angular velocity:{data_msg.angular_z}")
        else:
            self.get_logger().warning(f"Motor current:{data_msg.motor_current}, angular velocity:{data_msg.angular_z}")



def main(args=None):
    rclpy.init(args=args)
    current_node = CurrentWheelNode()
    rclpy.spin(current_node)
    current_node.destroy_node()
    rclpy.shutdown()

if __name__ =='__main__':
    main()