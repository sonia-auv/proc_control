#!/usr/bin/env python
__author__ = 'jeremie'

import rospy
from provider_keypad.msg import Keypad
from nav_msgs.msg import Odometry
import time
import math

class ThrusterControl:
    def __init__(self):
        self.position = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    def keypad_callback(self, data):
        x = (float(data.LJ_Up + data.LJ_Down) / 127.0)*0.1
        y = (float(data.LJ_Left + data.LJ_Right) / 127.0)*0.1
        z = (data.RT/254.0)*0.5
        yaw = (float(data.RJ_Left + data.RJ_Right) / 127.0)*1

        self.position[0] += x/0.1
        self.position[1] += y/0.1
        self.position[2] += z/0.1
        self.position[5] += (yaw/0.1) * math.pi/180.0

    def listener(self):

        # In ROS, nodes are uniquely named. If two nodes with the same
        # node are launched, the previous one is kicked off. The
        # anonymous=True flag means that rospy will choose a unique
        # name for our 'listener' node so that multiple listeners can
        # run simultaneously.
        rospy.init_node('thruster_control', anonymous=True)

        rospy.Subscriber("/provider_keypad/Keypad", Keypad, self.keypad_callback)
        publisher = rospy.Publisher("/proc_navigation/odom",Odometry, queue_size=1)

    	while(1):
            time.sleep(0.1)
            msg = Odometry()
            msg.twist.twist.linear.x = self.position[0]
            msg.twist.twist.linear.y = self.position[1]
            msg.twist.twist.linear.z = self.position[2]
            msg.twist.twist.angular.x = self.position[3]
            msg.twist.twist.angular.y = self.position[4]
            msg.twist.twist.angular.z = self.position[5]
            publisher.publish(msg)

if __name__ == '__main__':
    tmp = ThrusterControl()
    tmp.listener()
