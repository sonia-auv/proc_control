/**
 * \file	trajectory_yaw.cc
 * \author Francis Masse <francis.masse05@gmail.com>
 * \date	25/06/17
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


#include <iostream>
#include "trajectory.h"

namespace proc_control{

//==============================================================================
// C / D T O R S   S E C T I O N

//------------------------------------------------------------------------------
//
    Trajectory::Trajectory() {
        is_spline_calculated_ = false;
        spline_time_ = 0;
        zero_ << 0.0, 0.0, 0.0;
    }

//------------------------------------------------------------------------------
//
    Trajectory::~Trajectory() {}

//==============================================================================
// M E T H O D   S E C T I O N

//-----------------------------------------------------------------------------
//
    bool Trajectory::IsSplineCalculated() { return is_spline_calculated_; }

//-----------------------------------------------------------------------------
//
    void Trajectory::SetSplineParameters(Eigen::Vector3d &initial_position, Eigen::Vector3d &finale_position) {
        this->initial_position_ = initial_position;
        this->final_position_ = finale_position;
        this->spline_time_ = 0.0;
        this->is_spline_calculated_ = true;
    }

//-----------------------------------------------------------------------------
//
    Eigen::Vector3d Trajectory::ComputeLinearSpline(double dt) {

        spline_time_ += dt/5;

        if (spline_time_ >= 1.0) spline_time_ = 1.0;

        ComputeHermiteCubicSpline(this->initial_position_, this->final_position_);

        return current_position_;
    }
//-----------------------------------------------------------------------------
//
    Eigen::Vector3d Trajectory::ComputeAngularSpline(double dt){

        spline_time_ += dt;

        if (spline_time_ >= 1.0) spline_time_ = 1.0;

        current_position_ = ComputeSlerpInterpolation(this->initial_position_, this->final_position_);

        return current_position_;
    }
//-----------------------------------------------------------------------------
//
    Eigen::Vector3d Trajectory::ComputeHermiteCubicSpline(Eigen::Vector3d &pO, Eigen::Vector3d &p1) {

        double spline_time_squared = spline_time_ * spline_time_ ;
        double spline_time_cubed = spline_time_squared * spline_time_;

        current_position_ = (2 * spline_time_cubed - 3 * spline_time_squared + 1) * pO
                            + (-2 * spline_time_cubed + 3 * spline_time_squared) * p1;

        return current_position_;

    }

    //-----------------------------------------------------------------------------
//
    Eigen::Vector3d Trajectory::ComputeSlerpInterpolation(Eigen::Vector3d &pO, Eigen::Vector3d &p1) {

        Eigen::Affine3d pO_h = ComputeTransformation_.HomogeneousMatrix(pO, zero_);
        Eigen::Affine3d p1_h = ComputeTransformation_.HomogeneousMatrix(p1, zero_);

        Eigen::Quaterniond pO_q(pO_h.linear());
        Eigen::Quaterniond p1_q(p1_h.linear());

        p1_q.slerp(spline_time_, pO_q);

        current_orientation_ = p1_q.toRotationMatrix().eulerAngles(0, 1, 2);

        return current_orientation_;

    }


//-----------------------------------------------------------------------------
//
    void Trajectory::ResetSpline() {

        spline_time_ = 0.0;
        initial_position_ = zero_;
        final_position_ = zero_;
        current_position_ = zero_;
        is_spline_calculated_ = false;
    }

}
