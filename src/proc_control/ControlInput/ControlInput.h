//
// Created by olavoie on 1/13/18.
//

#ifndef PROC_CONTROL_CONTROLINPUT_H
#define PROC_CONTROL_CONTROLINPUT_H

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <eigen3/Eigen/Eigen>


namespace proc_control {

    class ControlInput {
    public:
        //==============================================================================
        // C / D T O R S   S E C T I O N
        //------------------------------------------------------------------------------
        ControlInput(const ros::NodeHandlePtr &nh);
        ~ControlInput();

        //==========================================================================
        // P U B L I C   M E T H O D S

        void OdometryCallback(const nav_msgs::Odometry::ConstPtr &odomIn);

        Eigen::Vector3d GetPositionTranslation() const { return positionTranslation_; };
        Eigen::Vector3d GetVelocityTranslation() const { return velocityTranslation_; };

        Eigen::Vector3d GetPositionOrientation() const { return positionOrientation_; };
        Eigen::Vector3d GetVelocityOrientation() const { return velocityOrientation_; };


    private:

        //==========================================================================
        // P R I V A T E   M E M B E R S

        ros::NodeHandlePtr nh_;

        // Subscriber
        ros::Subscriber navigationOdomSubscriber_;


        Eigen::Vector3d positionTranslation_ = Eigen::Vector3d(0.0, 0.0, 0.0);
        Eigen::Vector3d positionOrientation_ = Eigen::Vector3d(0.0, 0.0, 0.0);

        Eigen::Vector3d velocityTranslation_ = Eigen::Vector3d(0.0, 0.0, 0.0);
        Eigen::Vector3d velocityOrientation_ = Eigen::Vector3d(0.0, 0.0, 0.0);






    };
}


#endif //PROC_CONTROL_CONTROLINPUT_H
