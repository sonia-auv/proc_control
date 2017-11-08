#!/usr/bin/env python
import rospy

from interface_rs485.msg import SendRS485Msg
from proc_control.msg import ThrustLogging
import struct
import numpy as np


class Percentage2Thrust:

    def __init__(self):
        rospy.init_node('transform_thrust', anonymous=True)
        self.THRUSTs = []
        self.thrust_percentage_sub = rospy.Subscriber('/interface_rs485/dataRx', SendRS485Msg, self._thrust_percentage_callback)
        self.thrust_publisher = rospy.Publisher('/proc_control/thrust_logging', ThrustLogging, queue_size=100)
        self.thruster = np.array([[0.7071, -0.7071, 0, 0, 0, -0.25],
                                  [-0.7071, -0.7071, 0, 0, 0, 0.25],
                                  [-0.7071, 0.7071, 0, 0, 0, -0.25],
                                  [0.7071, 0.7071, 0, 0, 0, 0.25],
                                  [0, 0, -1, 0.25, 0.5, 0],
                                  [0, 0, -1, 0.5, -0.5, 0],
                                  [0, 0, -1, -0.5, -0.5, 0],
                                  [0, 0, -1, -0.5, 0.5, 0]])
        self.i = 0
        rospy.spin()

    def _thrust_percentage_callback(self, msg):
        percentage = list(struct.unpack("{}B".format(len(msg.data)), msg.data))
        if len(percentage) == 8:
            self.percentage_2_pwm(percentage)

    def percentage_2_pwm(self, percentage):
        PWMs = []
        for percent in percentage:
            if percent > 0 and percent < 100:
                PWMs.append(int(3.7 * percent + 1100))
            elif percent <= 200 and percent > 100 :
                PWMs.append(int(3.7 * percent + 1160))
            elif percent == 100:
                PWMs.append(1500)

        self.pwm_2_thrust(PWMs)

    def pwm_2_thrust(self, PWMs):
        self.THRUSTs = []
        for pwm in PWMs:
            if 1100 <= pwm and pwm < 1180:
                thrust = 0.0258 * pwm - 37.5007

            elif 1180 <= pwm and pwm < 1350:
                thrust = 0.0285 * pwm - 40.5859

            elif 1350 <= pwm and pwm < 1470:
                thrust = 0.0182 * pwm - 26.6501

            elif 1530 <= pwm and pwm < 1625:
                thrust = 0.0197 * pwm - 30.1860

            elif 1625 <= pwm and pwm < 1850:
                thrust = 0.0326 * pwm - 51.0527

            elif 1850 <= pwm and pwm < 1900:
                thrust = 0.0389 * pwm - 62.6640

            else:
                thrust = 0
            self.THRUSTs.append(thrust)
        self.thruster_thrust_to_axe_thrust(self.THRUSTs)

    def thruster_thrust_to_axe_thrust(self, thrust):
        thrust_thruster = np.array(thrust)
        thrust_axe = np.dot(thrust_thruster, self.thruster)
        self.publish_data(thrust_axe, thrust)

    def publish_data(self, thrust_axe, thrust_thruster):
        msg = ThrustLogging()
        msg.thrust_axe = list(thrust_axe)
        msg.thrust_thruster = list(thrust_thruster)

        self.thrust_publisher.publish(msg)

if __name__ == '__main__':
    thrust = Percentage2Thrust()
