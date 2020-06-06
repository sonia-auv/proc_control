#! /bin/bash
echo "Hello"
source /opt/ros/melodic/setup.bash
if [ -f $ROS_SONIA_WS/devel/setup.bash ]; then
    source $ROS_SONIA_WS/devel/setup.bash
fi
roscd proc_control_matlab
cd ./bin/
echo $PWD
./ProcControlMatlab/run_ProcControlMatlab.sh /usr/local/MATLAB/MATLAB_Runtime/v97
