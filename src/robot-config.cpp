#include "main.h"

//global configurations
brain Brain;
vex::controller  Controller = vex::controller();

// Base Motors
motor fl = motor(PORT12, ratio18_1, true);
motor bl = motor(PORT11, ratio18_1, true);
motor fr = motor(PORT18, ratio18_1, true);
motor br = motor(PORT19, ratio18_1, true);

// Intake Motors
motor ri = motor(PORT9, ratio18_1, false);
motor li = motor(PORT1, ratio18_1, true);

// Rollers
motor mr = motor(PORT10, ratio6_1, true);
motor tr = motor(PORT2, ratio6_1, false);

void vexcodeInit(void) {
  // Nothing to initialize
} 
