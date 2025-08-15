import rclpy
from rclpy.node import Node
from interfaces.msg import SensorData
import random

class CoNode(Node):
    def __init__(self):
        super().__init__('co_node')
        self.publisher = self.create_publisher(SensorData, 'co_talker', 10)
        self.counter = 0
        #timer and callback
        # 1[Hz]   -----> 1 sec      500[Hz] -----> 0.002 sec
        # 100[hz] -----> 0.01 sec  1000[Hz] -----> 0.001 sec
        self.frequency=0.001
        self.timer = self.create_timer(self.frequency, self.publish_co)  # publish every second

    def publish_co(self):
        self.counter += 1
        sensor_msg = SensorData()
        # Every 5th time, randomly decide if CO is above 150 or not
        if self.counter % 5 == 0:
            if random.choice([True, False]):
                sensor_msg.gas = int(random.uniform(150, 200))
            else:
                sensor_msg.gas = int(random.uniform(0, 149))
        else:
            sensor_msg.gas = int(random.uniform(0, 149))

        if sensor_msg.gas >149:
            self.get_logger().warn(f"CO: {sensor_msg.gas}")
        else:
            self.get_logger().info(f"CO: {sensor_msg.gas}")
        self.publisher.publish(sensor_msg)

def main(args=None):
    rclpy.init(args=args)
    co_node = CoNode()
    rclpy.spin(co_node)
    co_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
