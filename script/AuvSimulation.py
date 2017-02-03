#!/usr/bin/env python
__author__ = 'jeremie'
import math
import rospy
from sensor_msgs.msg import Imu
from tf.transformations import quaternion_about_axis
from sonia_msgs.msg import SendCanMsg, BottomTracking
import time

from std_msgs.msg import String


# send_can_msg  = None
class AUVSimulation:
    DELTA_ORIENTATION = 6
    DELTA_VITESSE = 1
    port_effort = 0
    starboard_effort = 0
    back_heading_effort = 0
    front_heading_effort = 0

    yaw = 0

    def __init__(self):
        rospy.init_node('AUV_Simulation', anonymous=True)

        rospy.Subscriber("/provider_can/send_can_msg", SendCanMsg, self.sendcanmsg_callback)
        self.publisher_imu = rospy.Publisher("/provider_imu/imu", Imu, queue_size=10)
        self.publisher_dvl = rospy.Publisher("/provider_dvl/bottom_tracking", BottomTracking, queue_size=10)

        print quaternion_about_axis(math.radians(45), (0, 0, 1))

    def publish_data(self):
        rate = rospy.Rate(100)
        while not rospy.is_shutdown():
            velocity_x = (self.starboard_effort + self.port_effort)/200.0 * self.DELTA_VITESSE * abs(math.cos(math.radians(self.yaw))) + \
                         (self.front_heading_effort + self.back_heading_effort)/200.0 *self.DELTA_VITESSE * abs(math.sin(math.radians(self.yaw)))
            velocity_y = (self.starboard_effort + self.port_effort)/200.0*self.DELTA_VITESSE * abs(math.sin(math.radians(self.yaw))) + \
                         (self.front_heading_effort + self.back_heading_effort)/200.0 *self.DELTA_VITESSE *abs(math.cos(math.radians(self.yaw)))
            bottom_tracking = BottomTracking()
            bottom_tracking.velocity=(velocity_x,velocity_y,0,0)
            bottom_tracking.time = time.time()

            self.publisher_dvl.publish(bottom_tracking)

            imu = Imu()
            quat = quaternion_about_axis(math.radians(self.yaw), (0, 0, 1))
            imu.orientation.x = quat[0]
            imu.orientation.y = quat[1]
            imu.orientation.z = quat[2]
            imu.orientation.w = quat[3]
            self.publisher_imu.publish(imu)
            rate.sleep()

    def sendcanmsg_callback(self, sendcanmessage):
        if sendcanmessage.device_id == SendCanMsg.DEVICE_ID_actuators and sendcanmessage.method_number == SendCanMsg.METHOD_MOTOR_set_speed:
            if sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_port_motor:
                self.port_effort = sendcanmessage.parameter_value
                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_starboard_motor:
                self.starboard_effort = sendcanmessage.parameter_value
                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_back_depth_motor:
                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_front_depth_motor:
                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_back_heading_motor:
                self.back_heading_effort = sendcanmessage.parameter_value
                self.yaw += sendcanmessage.parameter_value / 100.0 * self.DELTA_ORIENTATION
                self.yaw = self.yaw % 360
                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_front_heading_motor:
                self.front_heading_effort = sendcanmessage.parameter_value
                self.yaw -= sendcanmessage.parameter_value / 100.0 * self.DELTA_ORIENTATION
                self.yaw = self.yaw % 360
                pass

        pass


if __name__ == '__main__':
    tmp = AUVSimulation()
    tmp.publish_data()
