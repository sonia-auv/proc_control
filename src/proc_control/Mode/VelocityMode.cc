#include "VelocityMode.h"

namespace proc_control
{

    VelocityMode::VelocityMode(std::shared_ptr<RobotState> &robotState, std::unique_ptr<ControllerIF> &controlAUV):
        robotState_{robotState},
        controlAUV_{std::move(controlAUV)},
        actualTwist_{Eigen::VectorXd::Zero(control::CARTESIAN_SPACE)},
        desiredTwist_{Eigen::VectorXd::Zero(control::CARTESIAN_SPACE)}
    {
    }

    void VelocityMode::Process()
    {
    }

    void VelocityMode::SetTarget(bool isGlobal, Eigen::VectorXd &targetPose)
    {
    }

    void VelocityMode::SetDecoupledTarget(bool isGlobal, const std::vector<bool> &keepTarget, Eigen::VectorXd &targetPose)
    {
    }
}