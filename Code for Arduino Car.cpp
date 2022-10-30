#include <AFMotor.h>
AF_DCMotor motor1(1);   //Left Motor
AF_DCMotor motor2(2);   //Right Motor

void setup() {}

void loop(){
 //stop
  motor1.setSpeed(0);
  motor1.run(RELEASE);// you need 2 commands to stop
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  delay(1000);
  //FORWARD
  motor1.setSpeed(255); // speed (0 -255 )
  motor1.run(FORWARD); //motor move clockwise
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  delay(3000);
  //stop
  motor1.setSpeed(0);
  motor1.run(RELEASE);// you need 2 commands to stop
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  delay(1000);
//RIGHT
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  delay(3000);
   //stop
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  delay(1000);
  //BACKWARD
  motor1.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  delay(3000);
  //stop
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  delay(1000);
  //LEFT
  motor1.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  delay(3000);
}