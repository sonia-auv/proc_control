#!/usr/bin/env python
__author__ = 'jeremie'

import rospy
from provider_keypad.msg import Keypad
from sonia_msgs.srv import SendCanMessage
from sonia_msgs.srv import SendCanMessageRequest
from sonia_msgs.srv import SendCanMessageResponse

from std_msgs.msg import String

def keypad_callback(data):
    try:
        send_can_msg = rospy.ServiceProxy('/provider_can/send_can_message', SendCanMessage)
        
        request_device_id = SendCanMessageRequest.DEVICE_ID_actuators
        request_unique_id = [SendCanMessageRequest.UNIQUE_ID_ACT_port_motor, SendCanMessageRequest.UNIQUE_ID_ACT_starboard_motor,
                             SendCanMessageRequest.UNIQUE_ID_ACT_back_depth_motor, SendCanMessageRequest.UNIQUE_ID_ACT_front_depth_motor,
                             SendCanMessageRequest.UNIQUE_ID_ACT_back_heading_motor, SendCanMessageRequest.UNIQUE_ID_ACT_front_heading_motor]
        request_method_number = SendCanMessageRequest.METHOD_MOTOR_set_speed
        value = [(float(data.LJ_Up + data.LJ_Down) / 127.0)*100.0, (float(data.RJ_Up + data.RJ_Down) / 127.0)*100.0,
                 (data.RT/254.0)*100.0, (data.LT/254.0)*100.0,
                 (float(data.RJ_Left + data.RJ_Right) / 127.0)*100.0, (float(data.LJ_Left + data.LJ_Right) / 127.0)*100.0]

        for i in range(len(request_unique_id)):
            """device_id, unique_id, method_number, parameter_value"""
            resp1 = send_can_msg(request_device_id, request_unique_id[i], request_method_number, value[i])

    except rospy.ServiceException, e:
        print "Service call failed: %s"%e

def listener():

    # In ROS, nodes are uniquely named. If two nodes with the same
    # node are launched, the previous one is kicked off. The
    # anonymous=True flag means that rospy will choose a unique
    # name for our 'listener' node so that multiple listeners can
    # run simultaneously.
    rospy.init_node('thruster_control', anonymous=True)

    rospy.Subscriber("/provider_keypad/Keypad", Keypad, keypad_callback)

    rospy.spin()

if __name__ == '__main__':
    listener()