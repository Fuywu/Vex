#include "main.h"


void on_center_button() {
}


void initialize() {
}


void disabled() {
	
}


void competition_initialize() {

}

void autonomous() {

}


void opcontrol() {
    
while ( true ) {
    setDriveMotors();
    setIntakeMotor();
    setCatapultMotor();
    setClimbMotor();


    pros::delay(10);
}

}
