//
// Created by olavoie on 1/13/18.
//

#include "ControlInput.h"

namespace proc_control{

    ControlInput::ControlInput(const ros::NodeHandlePtr &nh): nh_(nh) {

        navigationOdomSubscriber_ = nh_->subscribe("/proc_navigation/odom", 100, &ControlInput::OdometryCallback, this);

    }

    ControlInput::~ControlInput(){

        navigationOdomSubscriber_.shutdown();

    }


    void ControlInput::OdometryCallback(const nav_msgs::Odometry::ConstPtr &odomIn) {

        positionTranslation_[0] = odomIn->pose.pose.position.x;
        positionTranslation_[1] = odomIn->pose.pose.position.y;
        positionTranslation_[2] = odomIn->pose.pose.position.z;
        positionOrientation_[0] = odomIn->pose.pose.orientation.x * DEGREE_TO_RAD;
        positionOrientation_[1] = odomIn->pose.pose.orientation.y * DEGREE_TO_RAD;
        positionOrientation_[2] = odomIn->pose.pose.orientation.z * DEGREE_TO_RAD;

        velocityTranslation_[0] = odomIn->twist.twist.linear.x;
        velocityTranslation_[1] = odomIn->twist.twist.linear.y;
        velocityTranslation_[2] = odomIn->pose.pose.position.z;
        velocityOrientation_[0] = odomIn->twist.twist.angular.x;
        velocityOrientation_[1] = odomIn->twist.twist.angular.y;
        velocityOrientation_[2] = odomIn->twist.twist.angular.z;


    }


}