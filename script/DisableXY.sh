#!/bin/sh
rosservice call /proc_control/enable_control "{X: 0, Y: 0, Z: -1, ROLL: -1, PITCH: -1, YAW: -1}"
