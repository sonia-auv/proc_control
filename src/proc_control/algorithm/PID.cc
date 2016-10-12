//
// Created by jeremie on 9/23/16.
//

#include "PID.h"

double ControlAlgorithm_PID::getValueForError(double error) {
    time_t nowTime = time(NULL); // Current timestamps
    double deltaTime = difftime(nowTime, lastTime); // Time since last integration
    double actuation = 0; // Actuation (output of PID block)

    // Compute and add the proportional gain term
    actuation = (p * error);

    // Compute and add the derivative gain term
    actuation += d * ((error - lastError) / (deltaTime));

    // Integrate cumulative error
    integrationSum += (error * deltaTime);
    // Reset I if position crosses target (if error is 0 or changes sign)
    if ((copysign(1.0f, error) != copysign(1.0f, lastError)) || (error == 0.0)) {
        integrationSum = 0;
    } else {
        // Clip I to prevent Integral WindUp
        integrationSum = std::min(std::max(integrationSum, -(iLimit)),
                                  iLimit);
        actuation += (i * integrationSum);
    }

    // Clip Actuation
    actuation = std::min(std::max(actuation, minActuation),
                         maxActuation);

    // Persist all the previous values
    lastTime = nowTime;
    lastError = error;

    return actuation;
};
