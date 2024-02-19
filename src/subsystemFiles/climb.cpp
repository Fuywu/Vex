#include "main.h"

void setClimb(int power) {
    climb1 = power;
    climb2 = power;
}

void setClimbMotor() {
    int climbPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1));
    setClimb(climbPower);
}