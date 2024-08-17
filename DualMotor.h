#ifndef DUALMOTOR_H_INCLUDED
#define DUALMOTOR_H_INCLUDED

#include <Arduino.h>
#include <Motor/Motor.h>

class DualMotor
{
private:
  Motor *motor1;
  Motor *motor2;
  int defaultSpeed;

public:
  DualMotor();
  DualMotor(int defaultSpeed);

  void setMotor1(int pinL, int pinR);
  void setMotor2(int pinL, int pinR);

  void forward();
  void forward(int speed);

  void left();
  void left(int speed);

  void right();
  void right(int speed);

  void back();
  void back(int speed);

  void stop();
};
