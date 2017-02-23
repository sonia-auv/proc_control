#!/usr/bin/env python
__author__ = 'jeremie'
import math
import numpy
import rospy
import random
from sensor_msgs.msg import Imu
from tf.transformations import quaternion_about_axis, unit_vector, quaternion_multiply, quaternion_conjugate
from sonia_msgs.msg import SendCanMsg, BottomTracking, BarometerMsg
import time

from std_msgs.msg import String


# send_can_msg  = None
class AUVSimulation:
    DELTA_ORIENTATION = 5
    DELTA_VITESSE_M_S = 500
    FREQUENCY = 100
    DELTA_DEPLACEMENT_DEPTH_MM_S = 500 / FREQUENCY

    port_effort = 0
    starboard_effort = 0
    back_heading_effort = 0
    front_heading_effort = 0
    front_vector = (1,0,0)
    heading_vector = (0,-1,0)
    back_depth_motor = 0
    front_depth_motor = 0

    yaw = 0

    def __init__(self):
        rospy.init_node('AUV_Simulation', anonymous=True)

        rospy.Subscriber("/provider_can/send_can_msg", SendCanMsg, self.sendcanmsg_callback)
        self.publisher_imu = rospy.Publisher("/provider_imu/imu", Imu, queue_size=10)
        self.publisher_dvl = rospy.Publisher("/provider_dvl/bottom_tracking", BottomTracking, queue_size=10)
        self.publisher_barometer = rospy.Publisher("/provider_can/barometer_intern_press_msgs",BarometerMsg, queue_size=10)

        print quaternion_about_axis(math.radians(45), (0, 0, 1))

    def publish_data(self):
        rate = rospy.Rate(self.FREQUENCY)
        position_z = 0
        while not rospy.is_shutdown():
            back_heading_effort = self.back_heading_effort
            front_heading_effort = self.front_heading_effort
            port_effort = self.port_effort
            starboard_effort = self.starboard_effort

            heading_rotation_effort = back_heading_effort - front_heading_effort
            front_rotation_effort = port_effort - starboard_effort
            self.yaw += (heading_rotation_effort / 200.0) * self.DELTA_ORIENTATION
            self.yaw += random.randrange(-1000,1000) / 100000.0
            self.yaw %= 360.0

            freeze_yaw = self.yaw
            quat = quaternion_about_axis(math.radians(freeze_yaw), (0, 0, 1))
            ### Select the value near 0.
            north_effort = (port_effort + starboard_effort) / 200.0
            east_effort = (front_heading_effort + back_heading_effort) / 200.0
            front_vector = tuple([i * north_effort for i in self.front_vector])
            heading_vector = tuple([i * east_effort for i in self.heading_vector])
            front_vector_rot = numpy.nan_to_num(qv_mult(quat,front_vector))
            heading_vector_rot = numpy.nan_to_num(qv_mult(quat,heading_vector))

            velocity_north = (front_vector_rot[0] + heading_vector_rot[0]) * self.DELTA_VITESSE_M_S
            velocity_east = (front_vector_rot[1] + heading_vector_rot[1]) * self.DELTA_VITESSE_M_S * -1

            percent_velocity_z = (self.front_depth_motor+self.back_depth_motor)/200.0

            position_z += (percent_velocity_z * self.DELTA_DEPLACEMENT_DEPTH_MM_S)
            barometer = BarometerMsg ()
            barometer.depth = position_z
            self.publisher_barometer.publish(barometer)

            bottom_tracking = BottomTracking()
            bottom_tracking.velocity=(velocity_north,velocity_east,0,0)
            bottom_tracking.time = time.time() * 1000

            self.publisher_dvl.publish(bottom_tracking)

            imu = Imu()
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
                self.back_depth_motor = sendcanmessage.parameter_value
                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_front_depth_motor:
                self.front_depth_motor = sendcanmessage.parameter_value

                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_back_heading_motor:
                self.back_heading_effort = sendcanmessage.parameter_value
                pass
            elif sendcanmessage.unique_id == SendCanMsg.UNIQUE_ID_ACT_front_heading_motor:
                self.front_heading_effort = sendcanmessage.parameter_value
                pass

        pass

def qv_mult(q1, v1):
    v1 = unit_vector(v1)
    q2 = list(v1)
    q2.append(0.0)
    return quaternion_multiply(
        quaternion_multiply(q1, q2),
        quaternion_conjugate(q1)
    )[:3]

if __name__ == '__main__':
    tmp = AUVSimulation()
    tmp.publish_data()
