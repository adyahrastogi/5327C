#include "main.h"
// #include "include/vex.h"


void baseControl(void) {
  while(true) {
    int frontLeftMotorSpeed = (-(Controller.Axis3.value())*1.1 - (Controller.Axis4.value())*1.1 - (Controller.Axis1.value())*.6);
  }
}
