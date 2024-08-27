#include <servo.h>
servo pwm;
void setup() {
pwm.attach(11);
}

void loop() {
pwm.write(0);
delay(500);
pwm.write(180);
delay(500);
pwm.write(0);
delay(500);
}
