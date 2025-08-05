from setuptools import find_packages
from setuptools import setup

setup(
    name='rosmonitoring_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('rosmonitoring_interfaces', 'rosmonitoring_interfaces.*')),
)
