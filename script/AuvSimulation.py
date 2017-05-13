#!/usr/bin/env python
__author__ = 'jeremie'
import math
import numpy
import rospy
import random
from sensor_msgs.msg import Imu
from sensor_msgs.msg import FluidPressure
from geometry_msgs.msg import TwistStamped
from tf.transformations import quaternion_about_axis, unit_vector, quaternion_multiply, quaternion_conjugate
from provider_thruster.msg import ThrusterEffort
import time

from std_msgs.msg import String

# send_can_msg  = None
class AUVSimulation:
    DELTA_ORIENTATION = 15
    DELTA_VITESSE_M_S = 500
    FREQUENCY = 100
    DELTA_DEPLACEMENT_DEPTH_MM_S = 500 / FREQUENCY

    thruster_T1 = 0
    thruster_T2 = 0
    thruster_T3 = 0
    thruster_T4 = 0
    thruster_T5 = 0
    thruster_T6 = 0
    thruster_T7 = 0
    thruster_T8 = 0

    front_vector = (1,0,0)
    heading_vector = (0,1,0)
    back_depth_motor = 0
    front_depth_motor = 0

    yaw = 0

    def __init__(self):
        rospy.init_node('AUV_Simulation', anonymous=True)

        rospy.Subscriber("/provider_thruster/thruster_effort", ThrusterEffort, self.sendRS485msg_callback)
        self.publisher_imu = rospy.Publisher("/provider_imu/imu", Imu, queue_size=10)
        self.publisher_dvl = rospy.Publisher("/provider_dvl/dvl_twist", geometry_msgs/TwistStamped, queue_size=10)
        self.publisher_barometer = rospy.Publisher("/provider_dvl/dvl_pressure", sensor_msgs/FluidPressure, queue_size=10)

        print quaternion_about_axis(math.radians(45), (0, 0, 1))

    def publish_data(self):
        rate = rospy.Rate(self.FREQUENCY)
        position_z = 0
        while not rospy.is_shutdown():
            thruster_T1 = self.thruster_T1
            thruster_T2 = self.thruster_T2
            thruster_T3 = self.thruster_T3
            thruster_T4 = self.thruster_T4
            thruster_T5 = self.thruster_T5
            thruster_T6 = self.thruster_T6
            thruster_T7 = self.thruster_T7
            thruster_T8 = self.thruster_T8

            heading_rotation_effort = thruster_T1 + thruster_T2 - (thruster_T3 + thruster_T4)
            self.yaw += (heading_rotation_effort / 400.0) * self.DELTA_ORIENTATION
            self.yaw += random.randrange(-1000,1000) / 100000.0
            self.yaw %= 360.0

            freeze_yaw = self.yaw
            quat = quaternion_about_axis(math.radians(freeze_yaw), (0, 0, 1))
            ### Select the value near 0.
            north_effort = ((thruster_T1 + thruster_T2 + thruster_T3 + thruster_T4) * math.sin(math.radians(45))) / 400.0
            east_effort = ((thruster_T2 + thruster_T4 - (thruster_T1 + thruster_T3)) * math.sin(math.radians(45))) / 400.0
            front_vector = tuple([i * north_effort for i in self.front_vector])
            heading_vector = tuple([i * east_effort for i in self.heading_vector])
            front_vector_rot = numpy.nan_to_num(qv_mult(quat,front_vector))
            heading_vector_rot = numpy.nan_to_num(qv_mult(quat,heading_vector))

            velocity_north = (front_vector_rot[0] + heading_vector_rot[0]) * self.DELTA_VITESSE_M_S
            velocity_east = (front_vector_rot[1] + heading_vector_rot[1]) * self.DELTA_VITESSE_M_S * -1

            percent_velocity_z = (thruster_T5 + thruster_T6 + thruster_T7 + thruster_T8)/400.0

            position_z += (percent_velocity_z * self.DELTA_DEPLACEMENT_DEPTH_MM_S)
            barometer = sensor_msgs::FluidPressure
            barometer.pressure = position_z
            self.publisher_barometer.publish(barometer)

            bottom_tracking = geometry_msgs::TwistStamped
            bottom_tracking.twist.linear.x = velocity_north
            bottom_tracking.twist.linear.y = velocity_east
            bottom_tracking.twist.linear.z = 0;
            bottom_tracking.time = time.time() * 1000

            self.publisher_dvl.publish(bottom_tracking)

            imu = Imu()
            imu.orientation.x = quat[0]
            imu.orientation.y = quat[1]
            imu.orientation.z = quat[2]
            imu.orientation.w = quat[3]
            self.publisher_imu.publish(imu)
            rate.sleep()

    def sendRS485msg_callback(self, sendRSmessage):
            if sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T1:
                self.thruster_T1 = sendRSmessage.effort

            elif sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T2:
                self.thruster_T2 = sendRSmessage.effort

            elif sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T3:
                self.thruster_T3 = sendRSmessage.effort

            elif sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T4:
                self.thruster_T4 = sendRSmessage.effort

            elif sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T5:
                self.thruster_T5 = sendRSmessage.effort

            elif sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T6:
                self.thruster_T6 = sendRSmessage.effort

            elif sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T7:
                self.thruster_T7 = sendRSmessage.effort

            elif sendRSmessage.ID == ThrusterEffort.UNIQUE_ID_T8:
                self.thruster_T8 = sendRSmessage.effort


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
