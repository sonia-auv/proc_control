#!/usr/bin/env python
__author__ = 'jeremie'

import rospy
from provider_keypad.msg import Keypad
from sonia_common.msg import SendCanMsg
import time

from std_msgs.msg import String
# send_can_msg  = None
class ThrusterControl:
    def __init__(self):
        self.node = None
        self.values = list()
        self.request_device_id = SendCanMsg.DEVICE_ID_actuators
        self.request_unique_id = [SendCanMsg.UNIQUE_ID_ACT_port_motor, SendCanMsg.UNIQUE_ID_ACT_starboard_motor,
                                  SendCanMsg.UNIQUE_ID_ACT_back_depth_motor, SendCanMsg.UNIQUE_ID_ACT_front_depth_motor,
                                  SendCanMsg.UNIQUE_ID_ACT_back_heading_motor, SendCanMsg.UNIQUE_ID_ACT_front_heading_motor]
        self.request_method_number = SendCanMsg.METHOD_MOTOR_set_speed

    def keypad_callback(self, data):
        self.values = [(float(data.LJ_Up + data.LJ_Down) / 127.0)*100.0, (float(data.RJ_Up + data.RJ_Down) / 127.0)*100.0,
                       (data.RT/254.0)*100.0, (data.LT/254.0)*100.0,
                       (float(data.RJ_Left + data.RJ_Right) / 127.0)*100.0, (float(data.LJ_Left + data.LJ_Right) / 127.0)*100.0]


    def listener(self):

        # In ROS, nodes are uniquely named. If two nodes with the same
        # node are launched, the previous one is kicked off. The
        # anonymous=True flag means that rospy will choose a unique
        # name for our 'listener' node so that multiple listeners can
        # run simultaneously.
        rospy.init_node('thruster_control', anonymous=True)

        rospy.Subscriber("/provider_keypad/Keypad", Keypad, self.keypad_callback)
        publisher = rospy.Publisher("/provider_can/send_can_msg", SendCanMsg, queue_size=10)
        while(rospy.is_shutdown()):
            time.sleep(0.1)
            try:
                for i in range(len(self.values)):
                    """device_id, unique_id, method_number, parameter_value"""
                    publisher.publish(self.request_device_id, self.request_unique_id[i], self.request_method_number, self.values[i])

            except rospy.ServiceException, e:
                print "Service call failed: %s"%e

if __name__ == '__main__':
    tmp = ThrusterControl()
tmp.listener()
