#include <Arduino.h>
#include <DualMotor.h>
#include <Motor/Motor.h>

DualMotor::DualMotor()
{
  this->defaultSpeed = 127;
}

DualMotor::DualMotor(int defaultSpeed)
{
  this->defaultSpeed = defaultSpeed;
}

DualMotor::setMotor1(int pinL, int pinR)
{
  motor1 = new Motor(pinL, pinR, defaultSpeed);
}

DualMotor::setMotor2(int pinL, int pinR)
{
  motor2 = new Motor(pinL, pinR, defaultSpeed);
}

DualMotor::forward()
{
  motor1->forward();
  motor2->forward();
}

DualMotor::forward(int speed)
{
  motor1->forward(speed);
  motor2->forward(speed);
}

DualMotor::left()
{
  motor1->back();
  motor2->forward();
}

DualMotor::left(int speed)
{
  motor1->back(speed);
  motor2->forward(speed);
}

DualMotor::right()
{
  motor1->forward();
  motor2->back();
}

DualMotor::right(int speed)
{
  motor1->forward(speed);
  motor2->back(speed);
}

DualMotor::back()
{
  motor1->back();
  motor2->back();
}

DualMotor::back(int speed)
{
  motor1->back(speed);
  motor2->back(speed);
}

DualMotor::stop()
{
  motor1->stop();
  motor2->stop();
}