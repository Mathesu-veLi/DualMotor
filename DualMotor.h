#ifndef DUALMOTOR_H
#define DUALMOTOR_H

#include <Arduino.h>
#include <utility/Motor.h>

class DualMotor
{
private:
  Motor* motorL;
  Motor* motorR;
  int defaultSpeed;

public:
  DualMotor();
  DualMotor(int defaultSpeed);

  void setMotorL(int pinL, int pinR);
  void setMotorR(int pinL, int pinR);

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
