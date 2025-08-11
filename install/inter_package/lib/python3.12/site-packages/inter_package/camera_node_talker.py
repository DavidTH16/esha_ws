import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Float32
import random

class CameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')

        # List of successful detection labels
        self.labels = [
            'Victim Detected',
            'Victim Moving',
            'Victim Unconscious',
            'Victim Hand Gesture (Help Signal)',
            'Obstacle: Debris',
            'Obstacle: Rubble Pile',
            'Obstacle: Collapsed Wall',
            'Obstacle: Narrow Passage',
            'Fire/Smoke Detected',
            'Hazardous Material Sign',
            'Danger Zone: Structural Instability',
            'Pathway Clear',
            'Navigable Ramp Found',
            'Staircase Detected',
            'Void Space (Searchable Cavity)',
            'Animal Detected',
            'Rescue Personnel Identified',
            'Dropped Equipment Found',
            'Thermal Anomaly (Heat Source)',
            'Moving Object (Non-Human)'
        ]

        # List of failure situations
        self.failure_situations = [
            'Heavy Dust Obscuring View',
            'Poor Lighting Conditions',
            'Glare/Overexposure',
            'Camera Lens Covered with Debris',
            'Motion Blur due to Impact',
            'Victim Occluded by Rubble',
            'Blocked Field of View',
            'Infrared Interference',
            'Cluttered Overlapping Objects',
            'Low Texture Surfaces',
            'Reflective Surface Confusion',
            'Distant Small Victim',
            'Multiple Moving Objects',
            'Camera Calibration Issue',
            'Lens Fogging/Condensation'
        ]

        self.label_publisher = self.create_publisher(String, 'camera_label', 10)
        self.accuracy_publisher = self.create_publisher(Float32, 'camera_accuracy', 10)
        self.timer = self.create_timer(1.0, self.publish_detection)
        self.counter = 0

    def publish_detection(self):
        self.counter += 1

        msg_label = String()
        msg_accuracy = Float32()

        # Every 5th message: Simulate detection failure
        if self.counter % 5 == 0:
            failure = random.choice(self.failure_situations)
            msg_label.data = f"Unknown ({failure})"
            msg_accuracy.data = random.uniform(0.70, 0.89)
            self.get_logger().warning(f"Detection Failure: {msg_label.data} | Accuracy: {msg_accuracy.data:.2f}")
        else:
            label = random.choice(self.labels)
            msg_label.data = label
            msg_accuracy.data = random.uniform(0.90, 0.95)
            self.get_logger().info(f"Detected: {msg_label.data} | Accuracy: {msg_accuracy.data:.2f}")

        # Publish messages
        self.label_publisher.publish(msg_label)
        self.accuracy_publisher.publish(msg_accuracy)

def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    rclpy.spin(camera_node)
    camera_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
