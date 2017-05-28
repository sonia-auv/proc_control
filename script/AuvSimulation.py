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
sub_thruster_distance = 0.365
velocity_max = 2
acceleration_max = 0.5
friction_factor = 0.2
meterOfWaterToBar = 0.09807

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
        self.z_velocity = 0
        self.depth = 0
        self.bar = 0
        self.front_vector = (1, 0, 0)
        self.heading_vector = (0, 1, 0)

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

            yaw_thrust = sub_thruster_distance*thrust[0] + sub_thruster_distance*thrust[1] - \
                         (sub_thruster_distance*thrust[2] + sub_thruster_distance*thrust[3])
            yaw_acceleration = self.thrust_to_acceleration_yaw(yaw_thrust)
            self.yaw_velocity = self.acceleration_to_velocity(yaw_acceleration, 1.0/self.FREQUENCY, self.yaw_velocity)
            self.yaw_angle = self.velocity_to_angle(self.yaw_velocity, 1.0/self.FREQUENCY, self.yaw_angle)

            quat = quaternion_about_axis(math.radians(self.yaw_angle), (0, 0, 1))

            x_thrust = ((sub_thruster_distance*thrust[0] + sub_thruster_distance*thrust[1] +
                         sub_thruster_distance*thrust[2] + sub_thruster_distance*thrust[3]) *
                        math.sin(math.radians(45)))
            x_acceleration = self.thrust_to_acceleration(x_thrust)
            self.x_velocity = self.acceleration_to_velocity(x_acceleration, 1.0/self.FREQUENCY, self.x_velocity)

            y_thrust = ((sub_thruster_distance*thrust[1] + sub_thruster_distance*thrust[3] -
                         (sub_thruster_distance*thrust[0] + sub_thruster_distance*thrust[2])) *
                        math.sin(math.radians(45)))
            y_acceleration = self.thrust_to_acceleration(y_thrust)
            self.y_velocity = self.acceleration_to_velocity(y_acceleration, 1.0/self.FREQUENCY, self.y_velocity)

            front_vector_rot = numpy.nan_to_num(qv_mult(quat, self.front_vector))
            heading_vector_rot = numpy.nan_to_num(qv_mult(quat, self.heading_vector))

            x_vel = self.x_velocity * (front_vector_rot[0] + heading_vector_rot[0])
            y_vel = self.y_velocity * (front_vector_rot[1] + heading_vector_rot[1])

            z_thrust = thrust[4] + thrust[5] + thrust[6] + thrust[7]
            z_acceleration = self.thrust_to_acceleration_depth(z_thrust)
            self.z_velocity = self.acceleration_to_velocity(z_acceleration, 1.0/self.FREQUENCY, self.z_velocity)

            self.depth = self.velocity_to_depth(self.z_velocity, 1.0/self.FREQUENCY, self.depth)
            self.bar = self.depth_to_bar(self.depth, self.bar)

            dvl_pressure = FluidPressure()
            dvl_pressure.fluid_pressure = self.bar
            self.publisher_dvl_pressure.publish(dvl_pressure)

            imu = Imu()
            imu.orientation.x = quat[0]
            imu.orientation.y = quat[1]
            imu.orientation.z = quat[2]
            imu.orientation.w = quat[3]
            imu.angular_velocity.z = self.yaw_velocity
            imu.header.frame_id = "NED"
            self.publisher_imu.publish(imu)

            dvl_twist = TwistStamped()
            dvl_twist.header.stamp = rospy.get_rostime()
            dvl_twist.header.frame_id = "NED"
            dvl_twist.twist.linear.x = x_vel
            dvl_twist.twist.linear.y = y_vel
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
        acceleration = thrust / (sub_weight * 9.8 * 2)

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
        return depth/meterOfWaterToBar

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
