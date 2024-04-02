from setuptools import find_packages
from setuptools import setup

setup(
    name='two_server_controllers',
    version='0.0.0',
    packages=find_packages(
        include=('two_server_controllers', 'two_server_controllers.*')),
)
