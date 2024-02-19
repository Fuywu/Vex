#include "main.h"

void setCatapult(int power) {
    catapult = power;
}

void setCatapultMotor() {
    catapult = 127 * controller.get_digital(pros::E_CONTROLLER_DIGITAL_UP) ? 127 : 0;
}