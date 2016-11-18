#!/bin/sh
rosservice call /proc_control/enable_control "{X: 0, Y: 0, Z: 0, ROLL: 0, PITCH: 0, YAW: 0}" 
