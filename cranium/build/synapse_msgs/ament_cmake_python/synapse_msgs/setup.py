from setuptools import find_packages
from setuptools import setup

setup(
    name='synapse_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('synapse_msgs', 'synapse_msgs.*')),
)
