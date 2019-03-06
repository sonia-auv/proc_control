#!/usr/bin/env python
__author__ = 'jeremie'

import math
import numpy
import rospy
import random
import tf
from sensor_msgs.msg import Imu
from sensor_msgs.msg import FluidPressure
from geometry_msgs.msg import TwistStamped, Wrench
from tf.transformations import quaternion_about_axis, unit_vector, quaternion_multiply, quaternion_conjugate
from provider_thruster.msg import ThrusterEffort
import time
import dynamic_reconfigure.client

from std_msgs.msg import String

sub_weight = 44.98
sub_volume = 0.0353
sub_circumference = 2.3
sub_thruster_distance = 0.365
velocity_max = 2
acceleration_max = 0.5
friction_factor = 0.2
meterOfWaterTodBar = 9.80638
rho = 998.68
buoyancy = rho * sub_volume * 9.8


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

        rospy.Subscriber("/provider_thruster/effort", ThrusterEffort, self.thruster_msg_callback)
        self.publisher_imu = rospy.Publisher("/provider_imu/imu", Imu, queue_size=1000)
        self.publisher_dvl_twist = rospy.Publisher("/provider_dvl/dvl_twist", TwistStamped, queue_size=1000)
        self.publisher_dvl_pressure = rospy.Publisher("/provider_dvl/dvl_pressure", FluidPressure, queue_size=1000)

        self.yaw_velocity = 0
        self.yaw_angle = 0
        self.pitch_velocity = 0
        self.pitch_angle = 0
        self.x_velocity = 0
        self.y_velocity = 0
        self.z_velocity = 0
        self.depth = 0
        self.bar = 0
        self.current_yaw = 0
        self.front_vector = (1, 0, 0)
        self.heading_vector = (0, 1, 0)
        self.xaxis, self.yaxis, self.zaxis = (1, 0, 0), (0, 1, 0), (0, 0, 1)


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
                thrust.append(self.effort_to_thrust(effort[index]))

            yaw_thrust = (thrust[3] + thrust[1] - thrust[0] - thrust[2])

            self.current_yaw += yaw_thrust * (1.0/self.FREQUENCY) * 0.1
            self.current_yaw %= 360.0
            pitch_thrust = sub_thruster_distance*thrust[4] - sub_thruster_distance*thrust[5] - \
                           sub_thruster_distance*thrust[6] + sub_thruster_distance*thrust[7]

            pitch_acceleration = self.thrust_to_acceleration_yaw(pitch_thrust)
            self.pitch_velocity = self.acceleration_to_velocity(pitch_acceleration, 1.0/self.FREQUENCY, self.pitch_velocity)
            self.pitch_angle = self.velocity_to_angle(self.pitch_velocity, 1.0/self.FREQUENCY, self.pitch_angle)

            qx = quaternion_about_axis(self.current_yaw, self.zaxis)

            x_thrust = (thrust[0] - thrust[1] - thrust[2] + thrust[3]) * 0.7
            self.x_velocity = x_thrust * (1.0/self.FREQUENCY) * 1.3

            y_thrust = (thrust[2] + thrust[3] - thrust[0] - thrust[1] ) * 0.7
            self.y_velocity =  y_thrust * (1.0/self.FREQUENCY) * 1.3

            #front_vector_rot = numpy.nan_to_num(qv_mult(q, self.front_vector))
            #heading_vector_rot = numpy.nan_to_num(qv_mult(q, self.heading_vector))

            #x_vel = self.x_velocity * (front_vector_rot[0] + heading_vector_rot[0])
            #y_vel = self.y_velocity * (front_vector_rot[1] + heading_vector_rot[1])

            z_thrust = thrust[4] + thrust[5] + thrust[6] + thrust[7]
            self.bar += z_thrust * -0.000055
            #self.z_velocity = self.acceleration_to_velocity(z_acceleration, 1.0/self.FREQUENCY, self.z_velocity)

            #self.depth = self.velocity_to_depth(self.z_velocity, 1.0/self.FREQUENCY, self.depth)
            #self.bar = self.depth_to_bar(self.depth, self.bar)

            dvl_pressure = FluidPressure()
            dvl_pressure.fluid_pressure = self.bar
            self.publisher_dvl_pressure.publish(dvl_pressure)

            imu = Imu()
            imu.orientation.x = qx[0]
            imu.orientation.y = qx[1]
            imu.orientation.z = qx[2]
            imu.orientation.w = qx[3]
            imu.angular_velocity.y = self.pitch_velocity
            imu.angular_velocity.z = self.yaw_velocity
            imu.header.frame_id = "NED"
            self.publisher_imu.publish(imu)

            dvl_twist = TwistStamped()
            dvl_twist.header.stamp = rospy.get_rostime()
            dvl_twist.header.frame_id = "BODY"
            dvl_twist.twist.linear.x = self.x_velocity
            dvl_twist.twist.linear.y = self.y_velocity
            dvl_twist.twist.linear.z = self.z_velocity

            self.publisher_dvl_twist.publish(dvl_twist)

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

    def effort_to_thrust(self, effort):
        if effort > 0:
            thrust = effort * 0.49
        elif effort < 0:
            thrust = effort * 0.39
        else:
            thrust = 0

        return thrust

    def thrust_to_acceleration_yaw(self, thrust):
        acceleration = thrust / sub_weight

        if thrust == 0:
            acceleration = 0.0

        return acceleration

    def thrust_to_acceleration_depth(self, thrust):
        acceleration = thrust / ((sub_weight * 9.8) - buoyancy)

        if thrust == 0:
            acceleration = 0.0

        if acceleration > acceleration_max:
            return acceleration_max
        elif acceleration < -acceleration_max:
            return -acceleration_max
        else:
            return acceleration

    def thrust_to_acceleration(self, thrust):
        acceleration = thrust / (sub_weight * 3)

        if thrust == 0:
            acceleration = 0.0

        if acceleration > acceleration_max:
            return acceleration_max
        elif acceleration < -acceleration_max:
            return -acceleration_max
        else:
            return acceleration

    def acceleration_to_velocity(self, acceleration, dt, velocity):
        velocity = velocity + acceleration*dt

        if acceleration == 0:
            velocity = velocity - friction_factor*velocity

        if velocity > velocity_max:
            return velocity_max
        elif velocity < -velocity_max:
            return -velocity_max
        else:
            return velocity

    def velocity_to_depth(self, velocity, dt, depth):
        depth = depth + velocity*dt
        return depth

    def depth_to_bar(self, depth, bar):
        return depth/meterOfWaterTodBar

    def velocity_to_angle(self, velocity, dt, angle):
        angle_second = (velocity * .05 / sub_circumference) * 360
        angle = angle + angle_second * dt
        angle %= 360.0
        return angle


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
