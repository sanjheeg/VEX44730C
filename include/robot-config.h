using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor rightBack;
extern motor rightFront;
extern motor leftFront;
extern motor leftBack;
extern motor bottomIntake;
extern motor topIntake;
extern motor rightIntake;
extern motor leftIntake;
extern controller Controller1;
extern limit LimitA;
extern bumper Bumper;
extern limit LimitB;
extern sonar Ultrasonic;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );