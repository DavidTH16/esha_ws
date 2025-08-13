import rclpy
from rclpy.node import Node
from interfaces.msg import SensorData
import random

class UltrasonicNode(Node):
    def __init__(self):
        super().__init__('ultrasonic_node')
        self.publisher = self.create_publisher(SensorData, 'ultrasonic_talker', 10)
        #timer and callback
        # 1[Hz]   -----> 1 sec
        # 100[hz] -----> 0.01 sec
        self.frequency=1
        self.timer = self.create_timer(self.frequency, self.sense_distance)
        self.counter = 0

    def sense_distance(self):
        self.counter += 1

        # Every three seconds, simulate obstacle or abyss
        if self.counter % 5 == 0:
            event = random.random() < 0.5
            if event:
                distance = random.uniform(30, 40)
                sensor_msg = SensorData()
                sensor_msg.distance = distance
                self.publisher.publish(sensor_msg)
                self.get_logger().info(f"Path clear")
            else:
                # Abyss detected: do not publish any message
                distance = random.uniform(20, 29)
                sensor_msg = SensorData()
                sensor_msg.distance=distance
                self.publisher.publish(sensor_msg)
                self.get_logger().warn(f"Osbtacle detected! {distance} cm.")
        else:
            # Normal sensing: path is clear
            distance = random.uniform(30, 40)
            sensor_msg = SensorData()
            sensor_msg.distance = distance
            self.publisher.publish(sensor_msg)
            self.get_logger().info(f"Path clear")

def main(args=None):
    rclpy.init(args=args)
    node = UltrasonicNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()