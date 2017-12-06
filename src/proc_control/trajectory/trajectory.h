/**
 * \file	trajectory_yaw.h
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

#ifndef PROC_CONTROL_TRAJECTORY_H
#define PROC_CONTROL_TRAJECTORY_H

#include <cmath>
namespace proc_control{

    class Trajectory {
        public:
            //==========================================================================
            // P U B L I C   C / D T O R S

            Trajectory();
            ~Trajectory();

            //==========================================================================
            // P U B L I C   M E T H O D S

            void SetLinearSplineParameters(double initial_position, double finale_position);
            void SetOrientationSplineParameters(double initial_position, double finale_position,
                                                bool best_trajectory, bool best_rotation);
            bool IsSplineCalculated();
            void ResetSpline();
            double ComputeLinearSpline(double dt);
            double ComputeOrientationSpline(double dt);


        private:
            //==========================================================================
            // P R I V A T E   M E T H O D S
            double ComputeHermiteCubicSpline(double pO, double p1);
            void SetRotation();

            //==========================================================================
            // P R I V A T E   M E M B E R S

            double initial_position_, final_position_;
            double current_position_;

            bool is_spline_calculated_;

            bool best_trajectory_, best_rotation_;
            double first_rotation_, second_rotation_;

            double hermite_spline_solution_[4];
            double spline_time_;
    };

}


#endif //PROC_CONTROL_TRAJECTORY_H
