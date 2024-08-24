#ifndef DUALMOTOR_H
#define DUALMOTOR_H

#include <Arduino.h>
#include <utility/Motor.h>

class DualMotor
{
private:
  Motor* motor1;
  Motor* motor2;
  int defaultSpeed;

public:
  DualMotor();
  DualMotor(int defaultSpeed);

  void setMotor1(int pinL, int pinR);
  void setMotor2(int pinL, int pinR);

  void forward(int speed);
  void forward();

  void left(int speed);
  void left();

  void right(int speed);
  void right();

  void back(int speed);
  void back();

  void stop();
  
  void custom(int motorLeftSpeed, int motorRightSpeed);
};

#endif
