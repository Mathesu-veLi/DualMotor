#ifndef TWOMOTORS_H_INCLUDED
#define TWOMOTORS_H_INCLUDED

class TwoMotors
{
private:
  Motor *motor1;
  Motor *motor2;
  int defaultSpeed;

public:
  TwoMotors();
  TwoMotors(int defaultSpeed);

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
