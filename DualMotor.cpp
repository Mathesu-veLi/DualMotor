#include <Arduino.h>
#include <DualMotor.h>
#include <utility/Motor.h>

DualMotor::DualMotor()
{
  this->defaultSpeed = 127;
}

DualMotor::DualMotor(int defaultSpeed)
{
  this->defaultSpeed = defaultSpeed;
}

void DualMotor::setMotor1(int pinL, int pinR)
{
  motor1 = new Motor(pinL, pinR, defaultSpeed);
}

void DualMotor::setMotor2(int pinL, int pinR)
{
  motor2 = new Motor(pinL, pinR, defaultSpeed);
}

void DualMotor::forward(int speed)
{
  motor1->forward(speed);
  motor2->forward(speed);
}

void DualMotor::forward()
{
  this->forward(defaultSpeed);
}

void DualMotor::left(int speed)
{
  motor1->back(speed);
  motor2->forward(speed);
}

void DualMotor::left()
{
  this->left(defaultSpeed);
}

void DualMotor::right(int speed)
{
  motor1->forward(speed);
  motor2->back(speed);
}

void DualMotor::right()
{
	this->right(defaultSpeed);
}

void DualMotor::back(int speed)
{
  motor1->back(speed);
  motor2->back(speed);
}

void DualMotor::back()
{
	this->back(defaultSpeed);
}

void DualMotor::stop()
{
  motor1->stop();
  motor2->stop();
}
