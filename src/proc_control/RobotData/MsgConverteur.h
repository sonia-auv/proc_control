//
// Created by olavoie on 9/20/18.
//

#ifndef PROC_CONTROL_MSGCONVERTEUR_H
#define PROC_CONTROL_MSGCONVERTEUR_H

#include <eigen3/Eigen/Eigen>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Wrench.h>
#include <control_library/ControlType.h>

namespace proc_control
{
    inline void EigenVectorToPoseMsg(const Eigen::VectorXd &vector, geometry_msgs::Pose &msg)
    {
        msg.position.x    = vector[0];
        msg.position.y    = vector[1];
        msg.position.z    = vector[2];
        msg.orientation.x = vector[3] * control::RAD_TO_DEGREE;  // ROLL
        msg.orientation.y = vector[4] * control::RAD_TO_DEGREE;  // PITCH
        msg.orientation.z = vector[5] * control::RAD_TO_DEGREE;  // YAW
    }

    inline void EigenVectorToTwistMsg(const Eigen::VectorXd &vector, geometry_msgs::Twist &msg)
    {
        msg.linear.x  = vector[0];
        msg.linear.y  = vector[1];
        msg.linear.z  = vector[2];
        msg.angular.x = vector[3];  // ROLL
        msg.angular.y = vector[4];  // PITCH
        msg.angular.z = vector[5];  // YAW
    }

    inline void EigenVectorToWrenchMsg(const Eigen::VectorXd &vector, geometry_msgs::Wrench &msg)
    {
        msg.force.x  = vector[0];
        msg.force.y  = vector[1];
        msg.force.z  = vector[2];
        msg.torque.x = vector[3];  // ROLL
        msg.torque.y = vector[4];  // PITCH
        msg.torque.z = vector[5];  // YAW
    }

}

#endif //PROC_CONTROL_MSGCONVERTEUR_H
