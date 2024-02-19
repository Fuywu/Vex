#include "main.h"

void setIntake(int power) {
    intake = power;
}


void setIntakeMotor() {

    int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1));
    setIntake(intakePower);
}

    // if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2))
    // intakePower = -127;
    // else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1))
    // intakePower = 127;