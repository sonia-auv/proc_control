/**
 * \file	proc_control_node.cc
 * \author	Olivier Lavoie <olavoie9507@gmail.com>
 * \date	10/21/17
 *
 * \copyright Copyright (c) 2017 S.O.N.I.A. AUV All rights reserved.
 *
 * \section LICENSE
 *
 * This file is part of S.O.N.I.A. software.
 *
 * S.O.N.I.A. AUV software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S.O.N.I.A. AUV software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S.O.N.I.A. AUV software. If not, see <http://www.gnu.org/licenses/>.
 */

#include "proc_control_node.h"


namespace proc_control{

    ProcControlNode::ProcControlNode(const ros::NodeHandlePtr &nh): nh_(nh), stability_count_(0)  {

        for (int i = 0; i < 6; i++){
            enable_control_[i] = false;
        }

        navigation_odom_subscriber_ = nh_->subscribe("/proc_navigation/odom", 100, &ProcControlNode::odometry_callback, this);
        kill_switch_subscriber_ = nh_->subscribe("/provider_kill_mission/kill_switch_msg", 100, &ProcControlNode::kill_switch_callback, this);

        target_publisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_target", 100);
        debug_target_publisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/debug_current_target", 100);
        error_publisher_ = nh_->advertise<proc_control::PositionTarget>("/proc_control/current_error", 100);
        target_is_reached_publisher_ = nh_->advertise<proc_control::TargetReached>("/proc_control/target_reached", 100);

        set_global_position_target_server_ =
                nh_->advertiseService("/proc_control/set_global_target",
                                      &ProcControlNode::set_global_target_position_service_callback, this);
        set_local_position_target_server_ =
                nh_->advertiseService("/proc_control/set_local_target",
                                      &ProcControlNode::set_local_target_position_service_callback, this);
        set_local_velocity_target_server_ =
                nh_->advertiseService("/proc_control/set_local_velocity_target",
                                      &ProcControlNode::set_local_target_velocity_service_callback, this);

        enable_control_server_ = nh_->advertiseService("/proc_control/enable_control",
                                                       &ProcControlNode::enable_control_service_callback, this);

        controller_state_server_ = nh_->advertiseService("/proc_control/controller_state",
                                                       &ProcControlNode::controller_state_service_callback, this);

        enable_thrusters_server_ = nh_->advertiseService("/proc_control/enable_thrusters",
                                                         &ProcControlNode::enable_thrusters_server_callback, this);
        clear_waypoint_server_ = nh->advertiseService("/proc_control/clear_waypoint",
                                                      &ProcControlNode::clear_saypoint_service_callback, this);

        update_controller_state_ = nh_->serviceClient<proc_control::ControllerState>("/proc_control/controller_update_state");

        trajectory_x_.ResetSpline();
        trajectory_y_.ResetSpline();
        trajectory_z_.ResetSpline();
        trajectory_roll_.ResetSpline();
        trajectory_pitch_.ResetSpline();
        trajectory_yaw_.ResetSpline();

    }

    ProcControlNode::~ProcControlNode() {

        navigation_odom_subscriber_.shutdown();
        kill_switch_subscriber_.shutdown();

    }

    void ProcControlNode::Control_loop() {

        local_position_mutex_.lock();

        std::array<double, 6> global_error, local_error;

        std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();

        auto diff = now_time - last_time_;

        double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count())/(double(1E9));
        if (trajectory_x_.IsSplineCalculated())
            target_[X] = trajectory_x_.ComputeSpline(deltaTime_s);
        if (trajectory_y_.IsSplineCalculated())
            target_[Y] = trajectory_y_.ComputeSpline(deltaTime_s);
        if (trajectory_z_.IsSplineCalculated())
            target_[Z] = trajectory_z_.ComputeSpline(deltaTime_s);
        if (trajectory_roll_.IsSplineCalculated())
            target_[ROLL] = trajectory_roll_.ComputeSpline(deltaTime_s);
        if (trajectory_pitch_.IsSplineCalculated())
            target_[PITCH] = trajectory_pitch_.ComputeSpline(deltaTime_s);
        if (trajectory_yaw_.IsSplineCalculated())
            target_[YAW] = trajectory_yaw_.ComputeSpline(deltaTime_s);

        current_target_debug_position_publisher();

        local_error = get_local_error(target_);
        local_error_publisher(local_error);

        // Handle the is target reached message
        proc_control::TargetReached msg_target_reached;
        msg_target_reached.target_is_reached = static_cast<unsigned char> (evaluate_target_reached(asked_position_) ? 1 : 0);
        target_is_reached_publisher_.publish(msg_target_reached);

        std::cout << "X : " << local_error[X] << std::endl;
        std::cout << "Y : " << local_error[Y] << std::endl;
        std::cout << "Z : " << local_error[Z] << std::endl;
        std::cout << "YAW : " << local_error[YAW] << std::endl;

        // Calculate required actuation
        std::array<double, 6> actuation = control_auv_.GetActuationForError(local_error);
        std::array<double, 3> actuation_lin = {actuation[X], actuation[Y], actuation[Z]};
        std::array<double, 3> actuation_rot = {actuation[ROLL], actuation[PITCH], actuation[YAW]};

        for (int i = 0; i < 3; i++) {
            if (!enable_control_[i]) {
                actuation_lin[i] = 0.0f;
            }
            if (!enable_control_[i + 3]) {
                actuation_rot[i] = 0.0f;
            }
        }

        thruster_manager_.Commit(actuation_lin, actuation_rot);

        last_time_ = now_time;

        local_position_mutex_.unlock();

    }

    //==============================================================================
    // M E T H O D   S E C T I O N

    //-----------------------------------------------------------------------------
    void ProcControlNode::local_error_publisher(std::array<double, 6> error) {

        proc_control::PositionTarget error_;
        error_.X = error[X];
        error_.Y = error[Y];
        error_.Z = error[Z];
        error_.PITCH = error[ROLL];
        error_.ROLL = error[PITCH];
        error_.YAW = error[YAW];

        error_publisher_.publish(error_);

    }


    //-----------------------------------------------------------------------------
    void ProcControlNode::current_target_debug_position_publisher() {

        proc_control::PositionTarget msg_target;
        msg_target.X = target_[X];
        msg_target.Y = target_[Y];
        msg_target.Z = target_[Z];
        msg_target.ROLL = target_[ROLL];
        msg_target.PITCH = target_[PITCH];
        msg_target.YAW = target_[YAW];
        debug_target_publisher_.publish(msg_target);
    }

    //-----------------------------------------------------------------------------
    void ProcControlNode::current_target_position_publisher() {

        proc_control::PositionTarget current_target;

        current_target.X = asked_position_[X];
        current_target.Y = asked_position_[Y];
        current_target.Z = asked_position_[Z];
        current_target.ROLL = asked_position_[ROLL];
        current_target.PITCH = asked_position_[PITCH];
        current_target.YAW = asked_position_[YAW];
        target_publisher_.publish(current_target);

    }

    void ProcControlNode::odometry_callback(const nav_msgs::Odometry::ConstPtr &odom_in) {
        local_position_mutex_.lock();

        world_position_[X] = odom_in->pose.pose.position.x;
        world_position_[Y] = odom_in->pose.pose.position.y;
        world_position_[Z] = odom_in->pose.pose.position.z;
        world_position_[ROLL] = odom_in->pose.pose.orientation.x;
        world_position_[PITCH] = odom_in->pose.pose.orientation.y;
        world_position_[YAW] = odom_in->pose.pose.orientation.z;

        local_velocity_[X] = odom_in->twist.twist.linear.x;
        local_velocity_[Y] = odom_in->twist.twist.linear.y;
        local_velocity_[Z] = odom_in->twist.twist.linear.z;
        local_velocity_[ROLL] = odom_in->twist.twist.angular.x;
        local_velocity_[PITCH] = odom_in->twist.twist.angular.y;
        local_velocity_[YAW] = odom_in->twist.twist.angular.z;

        local_position_mutex_.unlock();

    }

    //-----------------------------------------------------------------------------
    void ProcControlNode::kill_switch_callback(const provider_kill_mission::KillSwitchMsg::ConstPtr &state_in) {

        for (int i = 0; i < 6; i++){
            enable_control_[i] = false;
        }

        for (int i = 0; i < 6; i++){
            asked_position_[i] = 0.0;
        }

        trajectory_x_.ResetSpline();
        trajectory_y_.ResetSpline();
        trajectory_z_.ResetSpline();
        trajectory_roll_.ResetSpline();
        trajectory_pitch_.ResetSpline();
        trajectory_yaw_.ResetSpline();

    }

    bool ProcControlNode::set_global_target_position_service_callback(proc_control::SetPositionTargetRequest &request,
                                                                      proc_control::SetPositionTargetResponse &response) {

        reset_trajectory();

        proc_control::SetPositionTargetRequest global_target = request;

        asked_position_[X] = global_target.X;
        asked_position_[Y] = global_target.Y;
        asked_position_[Z] = global_target.Z;
        asked_position_[ROLL] = global_target.ROLL;
        asked_position_[PITCH] = global_target.PITCH;
        asked_position_[YAW] = global_target.YAW;

        current_target_position_publisher();

        compute_spline_from_target(world_position_, asked_position_);

        last_target_position_ = asked_position_;

        return true;

    }

    bool ProcControlNode::set_local_target_position_service_callback(proc_control::SetPositionTargetRequest &request,
                                                                     proc_control::SetPositionTargetResponse &response) {
        reset_trajectory();

        proc_control::SetPositionTargetRequest local_target = request;
        proc_control::Transformation Transform;

        Transform.compute_homogeneous_matrix(Eigen::Vector3d(world_position_[ROLL], world_position_[PITCH], world_position_[YAW]),
                                             Eigen::Vector3d(world_position_[X], world_position_[Y], world_position_[Z]));
        Eigen::Matrix4d world_position_h = Transform.get_homogeneous_matrix();

        Transform.compute_homogeneous_matrix(Eigen::Vector3d(local_target.ROLL, local_target.PITCH, local_target.YAW),
                                             Eigen::Vector3d(local_target.X, local_target.Y, local_target.Z));
        Eigen::Matrix4d target_position_h = Transform.get_homogeneous_matrix();

        Eigen::Matrix4d global_target_h = world_position_h * target_position_h;

        Transform.compute_position_from_homogeneous_matrix(global_target_h);

        asked_position_ = Transform.get_position_from_homogeneous_matrix();

        current_target_position_publisher();

        compute_spline_from_target(world_position_, asked_position_);

        last_target_position_ = asked_position_;


        return true;
    }

    std::array<double, 6> ProcControlNode::get_local_error(const std::array<double, 6> &target) {

        std::array<double, 6> local_error;

        proc_control::Transformation Transform;

        Transform.compute_homogeneous_matrix(Eigen::Vector3d(world_position_[ROLL], world_position_[PITCH], world_position_[YAW]),
                                             Eigen::Vector3d(world_position_[X], world_position_[Y], world_position_[Z]));
        Eigen::Matrix4d world_position_h = Transform.get_homogeneous_matrix();

        std::cout << "world_pose : \n" << world_position_h << std::endl;

        Transform.compute_homogeneous_matrix(Eigen::Vector3d(target[ROLL], target[PITCH], target[YAW]),
                                             Eigen::Vector3d(target[X], target[Y], target[Z]));
        Eigen::Matrix4d target_position_h = Transform.get_homogeneous_matrix();

        std::cout << "error_pose : \n" << target_position_h << std::endl;

        Eigen::Matrix4d local_error_h;

        local_error_h.setZero();

        if (target_position_h.determinant() != 0){
            local_error_h = world_position_h * target_position_h.inverse();
        }else{
            local_error_h.setZero();
        }

        std::cout << "local_error : \n" << local_error_h << std::endl;

        Transform.compute_position_from_homogeneous_matrix(local_error_h);
        local_error = Transform.get_position_from_homogeneous_matrix();
        // Reverse error to fit motor config
        local_error[Z] *= -1;
        local_error[YAW] *= -1;

        return local_error;


    }

    bool ProcControlNode::evaluate_target_reached(const std::array<double, 6> &target_error) {

        std::array<double, 6> error;

        error[0] = target_error[X] - world_position_[X];
        error[1] = target_error[Y] - world_position_[Y];
        error[2] = target_error[Z] - world_position_[Z];
        error[3] = target_error[ROLL] - world_position_[ROLL];
        error[4] = target_error[PITCH] - world_position_[PITCH];
        error[5] = target_error[YAW] - world_position_[YAW];

        if (control_auv_.IsInBoundingBox(error)){
            stability_count_++;
        } else {
            stability_count_ = 0;
        }

        return stability_count_ > 14;
    }

    bool ProcControlNode::set_local_target_velocity_service_callback(proc_control::SetPositionTargetRequest &request,
                                                                     proc_control::SetPositionTargetResponse &response) {

        reset_trajectory();

        proc_control::SetPositionTargetRequest local_velocity = request;

        asked_velocity_[X] = local_velocity.X;
        asked_velocity_[Y] = local_velocity.Y;
        asked_velocity_[Z] = local_velocity.Z;
        asked_velocity_[ROLL] = local_velocity.ROLL;
        asked_velocity_[PITCH] = local_velocity.PITCH;
        asked_velocity_[YAW] = local_velocity.YAW;

        last_target_velocity_ = asked_velocity_;

        current_target_position_publisher();

        compute_spline_from_target(local_velocity_, asked_velocity_);

        return true;
    }

    void ProcControlNode::compute_spline_from_target(const OdomInfo &initial_pose, const OdomInfo &final_pose) {
        local_position_mutex_.lock();
        trajectory_x_.SetInitPoseAndFinalPose(last_target_position_[X], final_pose[X]);
        trajectory_y_.SetInitPoseAndFinalPose(last_target_position_[Y], final_pose[Y]);
        trajectory_z_.SetInitPoseAndFinalPose(last_target_position_[Z], final_pose[Z]);
        trajectory_roll_.SetInitPoseAndFinalPose(last_target_position_[ROLL], final_pose[ROLL]);
        trajectory_pitch_.SetInitPoseAndFinalPose(last_target_position_[PITCH], final_pose[PITCH]);
        trajectory_yaw_.SetInitPoseAndFinalPose(last_target_position_[YAW], final_pose[YAW]);
        local_position_mutex_.unlock();

    }

    bool ProcControlNode::enable_control_service_callback(proc_control::EnableControlRequest &request,
                                                          proc_control::EnableControlResponse &response) {

        proc_control::ControllerState new_state;

        if (request.X != request.DONT_CARE){
            trajectory_x_.ResetSpline();
            handle_enable_disable_control(bool(request.X), world_position_[X], X);
            new_state.request.X = bool(request.X);
        }

        if (request.Y != request.DONT_CARE){
            trajectory_y_.ResetSpline();
            handle_enable_disable_control(bool(request.Y), world_position_[Y], Y);
            new_state.request.Y = bool(request.Y);
        }

        if (request.Z != request.DONT_CARE){
            trajectory_z_.ResetSpline();
            handle_enable_disable_control(bool(request.Z), world_position_[Z], Z);
            new_state.request.Z = bool(request.Z);
        }

        if (request.ROLL != request.DONT_CARE){
            trajectory_roll_.ResetSpline();
            handle_enable_disable_control(bool(request.ROLL), world_position_[ROLL], ROLL);
            new_state.request.ROLL = bool(request.ROLL);
        }

        if (request.PITCH != request.DONT_CARE){
            trajectory_pitch_.ResetSpline();
            handle_enable_disable_control(bool(request.PITCH), world_position_[PITCH], PITCH);
            new_state.request.PITCH = bool(request.PITCH);
        }

        if (request.YAW != request.DONT_CARE){
            trajectory_yaw_.ResetSpline();
            handle_enable_disable_control(bool(request.YAW), world_position_[YAW], YAW);
            new_state.request.YAW = bool(request.YAW);
        }

        update_controller_state_.call(new_state);

        target_ = asked_position_;
        current_target_position_publisher();


        std::vector<std::string> tmp{"X", "Y", "Z", "ROLL", "PITCH", "YAW"};
        std::cout << "Active control: ";
        for (int i = 0; i < 6; i++) {
            std::cout << tmp[i] + " : " + (enable_control_[i] ? "true" : "false") + "\t";
        }
        std::cout << std::endl;

        return true;
    }

    bool ProcControlNode::enable_thrusters_server_callback(proc_control::EnableThrustersRequest &request,
                                                           proc_control::EnableThrustersResponse &response) {

        this->thruster_manager_.SetEnable(request.isEnable);

        return true;
    }

    bool ProcControlNode::clear_saypoint_service_callback(proc_control::ClearWaypointRequest &request,
                                                       proc_control::ClearWaypointResponse &response)
    {


        for (int i = 0; i < 6; i++) {
            asked_position_[i] = world_position_[i];
        }

        current_target_position_publisher();
        return true;
    }

    void ProcControlNode::handle_enable_disable_control(bool state, double target, const size_t axis) {

        enable_control_[axis] = state;
        asked_position_[axis] = target;

        current_target_position_publisher();

    }

    bool ProcControlNode::controller_state_service_callback(proc_control::ControllerStateRequest &request,
                                                            proc_control::ControllerStateResponse &response) {

        response.X = enable_control_[X];
        response.Y = enable_control_[Y];
        response.Z = enable_control_[Z];
        response.ROLL = enable_control_[ROLL];
        response.PITCH = enable_control_[PITCH];
        response.YAW = enable_control_[YAW];

        return true;
    }

}