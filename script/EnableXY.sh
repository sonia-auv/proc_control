#!/bin/sh
rosservice call /proc_control/enable_control "{X: 1, Y: 1, Z: -1, ROLL: -1, PITCH: -1, YAW: -1}"
