import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import random

class CameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.publisher = self.create_publisher(Float32, 'camera_talker', 10)
        self.timer = self.create_timer(1, self.publish_accuracy)
        self.counter = 0
        self.low_accuracy_mode = False

    def publish_accuracy(self):
        self.counter += 1

        # Every 5 times, switch to low accuracy mode
        if self.counter % 5 == 0:
            self.low_accuracy_mode = True

        if self.low_accuracy_mode:
            accuracy = random.uniform(0.70, 0.89)
            self.low_accuracy_mode = False
        else:
            accuracy = random.uniform(0.90, 0.98)

        msg = Float32()
        msg.data = accuracy
        self.publisher.publish(msg)

        if accuracy < 0.90:
            self.get_logger().warning(f"Low model accuracy: {accuracy:.2f}")
        else:
            self.get_logger().info(f"Model accuracy: {accuracy:.2f}")

def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    rclpy.spin(camera_node)
    camera_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()