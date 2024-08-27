#include <servo.h>
servo pwm;
void setup() {
pwm.attach(11);
}


void loop() {
  for(int i=0;i<180;i++)
  {
    pwm.write(i);
    delay(50);
  }
 for(int j=0;j>0;j--)
  {
    pwm.write(j);
    delay(50);
  }
}
