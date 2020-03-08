#!/bin/bash

cd ~/data

rosbag record -o $1 --duration=$2 /proc_navigation/odom /provider_thruster/effort /provider_thruster/thruster_effort /provider_thruster/thruster_effort_vector