from setuptools import find_packages, setup

package_name = 'inter_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='david',
    maintainer_email='jdavidtorres.h16@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'temperature_node = inter_package.temperature_node_talker:main',
            'co_node = inter_package.co_node_talker:main',
            'imu_node = inter_package.imu_node_talker:main',
            'ultrasonic_node = inter_package.ultrasonic_node_talker:main',
            'motor_current_node = inter_package.motor_current_node_talker:main',
            'velocity_node = inter_package.velocity_node_talker:main',
            'arm_current_node = inter_package.arm_current_node_talker:main',
            'camera_node=inter_package.camera_node_talker:main'
        ],
    },
)
