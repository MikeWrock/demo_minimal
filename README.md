#Set Up

## Clone this repository

`mkdir -p  ~/minimal_colcon_ws`
`git clone git@github.com:MikeWrock/demo_minimal.git ~/minimal_colcon_ws`

## Run the container:

`docker run --name minimal_container --rm -v ~/minimal_colcon_ws:/minimal_colcon_ws/src/demo_minimal -it ros:noetic-ros-base tail -F /dev/null`

## Enter the container, install colcon, and build the package in Debug

`docker exec -it minimal_container bash`

`sudo apt update && sudo apt install -y python3-colcon-common-extensions`

`source /opt/ros/noetic/setup.bash && cd /minimal_colcon_ws/ && colcon build --cmake-args -DCMAKE_BUILD_TYPE=Debug`

## Run the launch file

`source /minimal_colcon_ws/install/setup.bash && roslaunch demo_minimal demo.launch`

# Did everything run successfully??? Now lets build the product for release and try again:

## Build as release and relaunch

`cd /minimal_colcon_ws/ && colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release`

`source /minimal_colcon_ws/install/setup.bash && roslaunch demo_minimal demo.launch`

# What happened?

![OhNo](ohno.png)

Take a look here for a nice discussion of what happened: https://www.codeproject.com/Articles/548/Surviving-the-Release-Version