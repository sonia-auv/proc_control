//
// Created by jeremie on 10/17/16.
//

#include "thruster_manager.h"

ThrusterManager::ThrusterManager() :
  atlas::Observer<>(thruster_config_manager_)
{
  // Add all the thrusters
  thrusters_.push_back(Thruster("port"));
  thrusters_.push_back(Thruster("starboard"));
  thrusters_.push_back(Thruster("front_heading"));
  thrusters_.push_back(Thruster("back_heading"));
  thrusters_.push_back(Thruster("front_depth"));
  thrusters_.push_back(Thruster("back_depth"));

}

void ThrusterManager::Commit(std::array<double, 3> &linear_target, std::array<double, 3> &rotational_target)
{
  // legacy code...
  const double POWER_LIMIT_BEFORE_LUT = 43.0f;
  for (auto t : thrusters_) {
    std::array<double,3> thruster_effort_lin = t.GetLinearEffort();
    std::array<double,3> thruster_effort_rot = t.GetRotationnalEffort();
    // 2014-10-31 KC Change to limit Thruster effort earlier in the
    // process to 24 (55% from lookup table)
    double pretendedLinearEffortYTarget = linear_target[1] * thruster_effort_lin[1];
    double pretendedLinearEffortXTarget = linear_target[0] * thruster_effort_lin[0];
    double pretendedLinearEffortZTarget = linear_target[2]* thruster_effort_lin[2];
    // -
    double pretendedRotationEffortZTargetY = rotational_target[2] * thruster_effort_rot[1];
    double pretendedRotationEffortZTargetX = rotational_target[2] * thruster_effort_rot[0];
    double pretendedRotationEffortYTarget = rotational_target[1] * thruster_effort_rot[2];
    if(pretendedLinearEffortYTarget < pretendedLinearEffortXTarget * 1.2){
      // -
      // We put a higher priority on rotation, since we should attain
      // this
      // goal faster.
      if ((std::abs(pretendedLinearEffortYTarget)
           + std::abs(pretendedRotationEffortZTargetY)) > POWER_LIMIT_BEFORE_LUT) {
        // Setting the Y linear effort to what is left after rotational effort
        if ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetY)) <= 0){
          linear_target[1] = 0;
          //-
        }
        else{
          linear_target[1] = atlas::signum(linear_target[1])
                            * ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetY)) / std::abs(thruster_effort_lin[1]));
        }
      }
    }
    else{
      // -
      // We put a higher priority on rotation, since we should attain
      // this
      // goal faster.
      if ((std::abs(pretendedLinearEffortXTarget)
           + std::abs(pretendedRotationEffortZTargetX)) > POWER_LIMIT_BEFORE_LUT) {
        // Setting the Y linear effort to what is left after rotational effort
        if ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetX)) <= 0){
          linear_target[0] = (0);
          //-
        }
        else{
          linear_target[0] = (atlas::signum(linear_target[0])
                            * ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortZTargetX)) / std::abs(thruster_effort_lin[0])));
        }
      }

    }
    // We put a higher priority on rotation, since we should attain
    // this
    // goal faster.
    if ((std::abs(pretendedLinearEffortZTarget)
         + std::abs(pretendedRotationEffortYTarget)) > POWER_LIMIT_BEFORE_LUT) {
      // Setting the Z linear effort to what is left after rotational effort
      if ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortYTarget)) <= 0){
        linear_target[3] = (0);

      }
      else{
        linear_target[3] = (atlas::signum(linear_target[2])
                  * ((POWER_LIMIT_BEFORE_LUT - std::abs(pretendedRotationEffortYTarget)) / std::abs(thruster_effort_lin[2])));

      }
    }

  }
  //-
  for (auto t : thrusters_) {
    double target = 0;
    std::array<double,3> thruster_effort_lin = t.GetLinearEffort();
    std::array<double,3> thruster_effort_rot = t.GetRotationnalEffort();
    //-
    target += linear_target[0] * thruster_effort_lin[0];
    target += linear_target[1] * thruster_effort_lin[1];
    target += linear_target[2] * thruster_effort_lin[2];
    //-
    //We use lateral thruster for rotating excepted if the lateral distance is 120%% higher than forward.
    if(linear_target[1] < linear_target[0] * 1.2 ){
      target += rotational_target[2] * thruster_effort_rot[1];
    }
    else{
      target += rotational_target[2] * thruster_effort_rot[0];
    }
    target += rotational_target[1] * thruster_effort_rot[2];


    t.Pubish(target);
  }
}