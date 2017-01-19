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

    def listener(self):

        # In ROS, nodes are uniquely named. If two nodes with the same
        # node are launched, the previous one is kicked off. The
        # anonymous=True flag means that rospy will choose a unique
        # name for our 'listener' node so that multiple listeners can
        # run simultaneously.
        rospy.init_node('position_simulation', anonymous=True)

        publisher = rospy.Publisher("/proc_navigation/odom",Odometry, queue_size=1)
        rate = rospy.Rate(10)  # 10hz
        sign =1
        while not rospy.is_shutdown():
            rate.sleep()
            if self.position[0] > 150 or self.position[0] <0:
                sign *= -1
            self.position = [self.position[0] + sign,self.position[1] + sign,1.0, 0,0,45.0 * sign]
            msg = Odometry()
            msg.pose.pose.position.x = self.position[0] * 0.03
            msg.pose.pose.position.y = self.position[1] * 0.03
            msg.pose.pose.position.z = self.position[2]
            msg.pose.pose.orientation.x = self.position[3]
            msg.pose.pose.orientation.y = self.position[4]
            msg.pose.pose.orientation.z = self.position[5]
            publisher.publish(msg)

if __name__ == '__main__':
    tmp = ThrusterControl()
    tmp.listener()
