#!/usr/bin/env python
__author__ = 'jeremie'

import math
import numpy
import rospy
import random
import tf
from sensor_msgs.msg import Imu
from sensor_msgs.msg import FluidPressure
from geometry_msgs.msg import TwistStamped
from tf.transformations import quaternion_about_axis, unit_vector, quaternion_multiply, quaternion_conjugate
from provider_thruster.msg import ThrusterEffort
import time

from std_msgs.msg import String

sub_weight = 38
sub_circumference = 2.3
velocity_max = 2
minimum_acceleration_to_keep_accelerate = 0.2

class AUVSimulation:
    FREQUENCY = 100

    thruster_T1 = 0
    thruster_T2 = 0
    thruster_T3 = 0
    thruster_T4 = 0
    thruster_T5 = 0
    thruster_T6 = 0
    thruster_T7 = 0
    thruster_T8 = 0

    def __init__(self):
        rospy.init_node('AUV_Simulation', anonymous=True)

        rospy.Subscriber("/provider_thruster/thruster_effort", ThrusterEffort, self.thruster_msg_callback)
        self.publisher_imu = rospy.Publisher("/provider_imu/imu", Imu, queue_size=1000)
        self.publisher_dvl_twist = rospy.Publisher("/provider_dvl/dvl_twist", TwistStamped, queue_size=1000)
        self.publisher_dvl_pressure = rospy.Publisher("/provider_dvl/dvl_pressure", FluidPressure, queue_size=1000)

        self.yaw_velocity = 0
        self.yaw_angle = 0
        self.x_velocity = 0
        self.y_velocity = 0


    def publish_data(self):
        rate = rospy.Rate(self.FREQUENCY)

        while not rospy.is_shutdown():
            effort = []
            thrust = []

            effort.append(self.thruster_T1)
            effort.append(self.thruster_T2)
            effort.append(self.thruster_T3)
            effort.append(self.thruster_T4)
            effort.append(self.thruster_T5)
            effort.append(self.thruster_T6)
            effort.append(self.thruster_T7)
            effort.append(self.thruster_T8)

            for index in range(len(effort)):
                thrust.append(effort_to_thrust(effort[index]))

            yaw_thrust = thrust[0] + thrust[1] - (thrust[2] + thrust[3])
            yaw_acceleration = thrust_to_acceleration_yaw(yaw_thrust)
            self.yaw_velocity = acceleration_to_velocity(yaw_acceleration, 1.0/self.FREQUENCY, self.yaw_velocity)
            self.yaw_angle = velocity_to_angle(self.yaw_velocity, 1.0/self.FREQUENCY, self.yaw_angle)

            x_thrust = ((thrust[0] + thrust[1] + thrust[2] + thrust[3]) * math.sin(math.radians(45)))
            x_acceleration = thrust_to_acceleration(x_thrust)
            self.x_velocity = acceleration_to_velocity(x_acceleration, 1.0/self.FREQUENCY, self.x_velocity)

            y_thrust = ((thrust[1] + thrust[3] - (thrust[0] + thrust[2])) * math.sin(math.radians(45)))
            y_acceleration = thrust_to_acceleration(y_thrust)
            self.y_velocity = acceleration_to_velocity(y_acceleration, 1.0/self.FREQUENCY, self.y_velocity)

            dvl_twist = TwistStamped()
            dvl_twist.header.stamp = rospy.get_rostime()
            dvl_twist.twist.linear.x = self.x_velocity
            dvl_twist.twist.linear.y = self.y_velocity
            dvl_twist.twist.linear.z = 0

            self.publisher_dvl_twist.publish(dvl_twist)

            imu = Imu()
            quat = quaternion_about_axis(math.radians(self.yaw_angle), (0, 0, 1))
            imu.orientation.x = quat[0]
            imu.orientation.y = quat[1]
            imu.orientation.z = quat[2]
            imu.orientation.w = quat[3]
            imu.angular_velocity.z = self.yaw_velocity
            self.publisher_imu.publish(imu)

            rate.sleep()

    def thruster_msg_callback(self, msg):
            if msg.ID == ThrusterEffort.UNIQUE_ID_T1:
                self.thruster_T1 = msg.effort

            elif msg.ID == ThrusterEffort.UNIQUE_ID_T2:
                self.thruster_T2 = msg.effort

            elif msg.ID == ThrusterEffort.UNIQUE_ID_T3:
                self.thruster_T3 = msg.effort

            elif msg.ID == ThrusterEffort.UNIQUE_ID_T4:
                self.thruster_T4 = msg.effort

            elif msg.ID == ThrusterEffort.UNIQUE_ID_T5:
                self.thruster_T5 = msg.effort

            elif msg.ID == ThrusterEffort.UNIQUE_ID_T6:
                self.thruster_T6 = msg.effort

            elif msg.ID == ThrusterEffort.UNIQUE_ID_T7:
                self.thruster_T7 = msg.effort

            elif msg.ID == ThrusterEffort.UNIQUE_ID_T8:
                self.thruster_T8 = msg.effort


def qv_mult(q1, v1):
    v1 = unit_vector(v1)
    q2 = list(v1)
    q2.append(0.0)
    return quaternion_multiply(
        quaternion_multiply(q1, q2),
        quaternion_conjugate(q1)
    )[:3]


def effort_to_thrust(effort):
    if effort >= 0:
        thrust = effort * 0.49
    else:
        thrust = effort * 0.39

    return thrust


def thrust_to_acceleration_yaw(thrust):
    return thrust / sub_weight


def thrust_to_acceleration(thrust):
    return thrust / (sub_weight*2)


def acceleration_to_velocity(acceleration, dt, velocity):
    velocity = velocity + acceleration * dt

    if velocity > 0.0:
        velocity = velocity - minimum_acceleration_to_keep_accelerate * dt
    elif velocity < 0.0:
        velocity = velocity + minimum_acceleration_to_keep_accelerate * dt

    if velocity > velocity_max:
        return velocity_max
    elif velocity < -velocity_max:
        return -velocity_max
    else:
        return velocity


def velocity_to_angle(velocity, dt, angle):
    angle_second = (velocity*.05/sub_circumference) * 360
    angle = angle + angle_second*dt
    angle %= 360.0
    return angle



if __name__ == '__main__':
    tmp = AUVSimulation()
    tmp.publish_data()
