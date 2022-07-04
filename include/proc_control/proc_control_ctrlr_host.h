//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.4
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Sat Jul 02 01:31:01 2022
//

#pragma once

#include <controller_interface/controller.h>
#include <controller_interface/multi_interface_controller.h>
#include <hardware_interface/joint_command_interface.h>
#include <realtime_tools/realtime_buffer.h>
#include <realtime_tools/realtime_publisher.h>

// Declare dynamic reconf server and configuration header
#include <dynamic_reconfigure/server.h>
#include <proc_control/ControllerHostConfig.h>
#include <ros/node_handle.h>
#include <ros/time.h>
#include "proc_control.h"
#include "slros_initialize.h"

// Extern declaration for Simulink model input structure
extern ExtU_proc_control_T proc_control_U;
namespace proc_control
{
  class ControllerHost : public controller_interface::MultiInterfaceController<
    hardware_interface::VelocityJointInterface
    >
  {
   public:
    ControllerHost()
    {
    }

    ~ControllerHost()
    {
      proc_control_terminate();
    }

    bool init(hardware_interface::RobotHW* hw, ros::NodeHandle& nh) override;
    void starting(const ros::Time& time) override;
    void update(const ros::Time& time, const ros::Duration& period) override;
    void stopping (const ros::Time& time) override;
   private:
    void reset();

    // Declare the hardware interfaces
    hardware_interface::JointHandle joint_handle0_;

    // Declare a struct to hold dynamic parameters set from dynamic_reconfigure server
    struct DynamicParams
    {
      double Constant_Value_de;
      DynamicParams():
        Constant_Value_de(0)
      {
      }
    };

    friend std::ostream& operator<<(std::ostream& os, const DynamicParams&
      params)
    {
      os << "DynamicParams:\n"
        //
        << "\tConstant_Value_de: " << params.Constant_Value_de << "\n"
        ;
      return os;
    }

    // RT safe buffer for dynamic reconfigure request data
    realtime_tools::RealtimeBuffer<DynamicParams> dynamic_params_;

    // Dynamic Reconfigure server
    typedef dynamic_reconfigure::Server<ControllerHostConfig> ReconfigureServer;
    std::shared_ptr<ReconfigureServer> dyn_reconf_server_;
    boost::recursive_mutex dyn_reconf_server_mutex_;
    void reconfCallback(ControllerHostConfig& config, uint32_t /*level*/
                        );
    void updateDynamicParams();
  };
}                                      // namespace proc_control

//
// File trailer for generated code.
//
// [EOF]
//
