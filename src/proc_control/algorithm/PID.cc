//
// Created by jeremie on 9/23/16.
//

#include "PID.h"

double PID::GetValueForError(double error) {
  std::chrono::steady_clock::time_point now_time = std::chrono::steady_clock::now();
  auto diff = now_time - last_time_;

  double deltaTime_s = double(std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count())/(double(1E9));


  double actuation = 0; // Actuation (output of PID block)
  // Prevent dividing by 0
  // 0.0001 s == 1000 HZ so we good :)
  if(deltaTime_s > (0.0001f) )
  {
    // Compute and add the proportional gain term
    actuation = (pid_values_.P * error);

    // Compute and add the derivative gain term
    actuation += pid_values_.D * ((error - last_error_) / (deltaTime_s));

    // Integrate cumulative error
    integration_sum_ += (error * deltaTime_s);
    // Reset I if position crosses target (if error is 0 or changes sign)
    if ((copysign(1.0f, error) != copysign(1.0f, last_error_)) || (error == 0.0)) {
      integration_sum_ = 0;
    } else {
      // Clip I to prevent Integral WindUp
      integration_sum_ = std::min(std::max(integration_sum_, -(pid_values_.I_Limit)),
                                  pid_values_.I_Limit);
      actuation += (pid_values_.I * integration_sum_);
    }

    // Clip Actuation
    actuation = std::min(std::max(actuation, pid_values_.Min_Actuation),
                         pid_values_.Max_Actuation);
  }

  // Persist all the previous values
  last_time_ = now_time;//nowTime;
  last_error_ = error;

  return actuation;
};
