/*vex-vision-config:begin*/
#include "vex.h"
vex::vision::signature REDBALL = vex::vision::signature (1, 5903, 8809, 7356, -1479, 123, -678, 1.3, 0);
vex::vision::signature GREENTOWER = vex::vision::signature (2, -4631, -3635, -4133, -4129, -3009, -3569, 1.8, 0);
vex::vision::signature BLUEBALL = vex::vision::signature (3, -3715, -1667, -2691, 5683, 11539, 8611, 2.2, 0);
vex::vision::signature SIG_4 = vex::vision::signature (4, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_5 = vex::vision::signature (5, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_6 = vex::vision::signature (6, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_7 = vex::vision::signature (7, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision Vision = vex::vision (vex::PORT1, 89, REDBALL, GREENTOWER, BLUEBALL, SIG_4, SIG_5, SIG_6, SIG_7);
/*vex-vision-config:end*/