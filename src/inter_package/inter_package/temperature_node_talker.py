import rclpy
from rclpy.node import Node
from interfaces.msg import SensorData
import random

class TemperatureNode(Node):
    def __init__(self):
        super().__init__('temperature_node')
        self.publisher = self.create_publisher(SensorData, 'temperature_talker', 10)
        self.counter = 0
        #timer and callback
        # 1[Hz]   -----> 1 sec      500[Hz] -----> 0.002 sec
        # 100[hz] -----> 0.01 sec  1000[Hz] -----> 0.001 sec
        self.frequency=0.001
        self.timer = self.create_timer(self.frequency, self.publish_temperature)  # publish every second

    def publish_temperature(self):
        self.counter += 1
        sensor_msg = SensorData()
        # Every 5th time, randomly decide if temperature is above 60 or not
        if self.counter % 5 == 0:
            if random.choice([True, False]):
                sensor_msg.temperature = int(random.uniform(60, 100))
            else:
                sensor_msg.temperature = int(random.uniform(15, 59))
        else:
            sensor_msg.temperature = int(random.uniform(15, 59))
        if sensor_msg.temperature >= 60.0:
            self.get_logger().warn(f"Temperature: {sensor_msg.temperature}")
        else:
            self.get_logger().info(f"Temperature: {sensor_msg.temperature}")
        self.publisher.publish(sensor_msg)

def main(args=None):
    rclpy.init(args=args)
    sensor_node = TemperatureNode()
    rclpy.spin(sensor_node)
    sensor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()