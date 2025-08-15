import rclpy
from rclpy.node import Node
from interfaces.msg import ImuData
#from sensor_msgs.msg import Imu
import random

class ImuNode(Node):
    def __init__(self):
        super().__init__('imu_node')

        self.publisher = self.create_publisher(ImuData, 'imu_talker', 10)
        #timer and callback
        # 1[Hz]   -----> 1 sec      500[Hz] -----> 0.002 sec
        # 100[hz] -----> 0.01 sec  1000[Hz] -----> 0.001 sec
        self.frequency=0.001
        self.timer = self.create_timer(self.frequency, self.publish_imu_data)
        self.counter = 0

    def publish_imu_data(self):
        self.counter += 1

        # type of terrain
        terrain = random.choice(['up', 'down', 'uneven'])
        tipping = False  # flag 

        match terrain:
            case 'up':
                # UP pitch +, roll random (simulate tipping)
                pitch = random.uniform(10,20)
                roll = random.uniform(-10,10)
                # Up-tipping simulation
                if random.random() < 0.5:
                    tipping = True
                    # Extreme pitch or roll to simulate tipping
                    pitch = random.uniform(40,50)
                    roll = random.uniform(-20,20)
            
            case 'down':
                # Down pitch -, roll random (simulate tipping)
                pitch = random.uniform(-20,-10)
                roll = random.uniform(-10,10)
                # Down-tipping simulation
                if random.random() < 0.5:
                    tipping = True
                    pitch = random.uniform(-50,-40)
                    roll = random.uniform(-20,20)
            
            case _:
                # normal terrain, simulate little changes
                pitch = random.uniform(-4,4)
                roll = random.uniform(-4,4)

        msg = ImuData()
        msg.roll = int(roll)
        msg.pitch = int(pitch)

        self.publisher.publish(msg)
        if tipping:
            self.get_logger().warn(f'Published IMU: Terrain={terrain}, Pitch={int(pitch)}, Roll={int(roll)}')
        else:
            self.get_logger().info(f'Published IMU: Terrain={terrain}, Pitch={int(pitch)}, Roll={int(roll)}')

def main(args=None):
    rclpy.init(args=args)
    node = ImuNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
