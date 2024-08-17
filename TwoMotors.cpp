#include <Arduino.h>
#include <TwoMotors.h>
#include <Motor.h>

TwoMotors::TwoMotors()
{
  this->defaultSpeed = 127;
}

TwoMotors::TwoMotors(int defaultSpeed)
{
  this->defaultSpeed = defaultSpeed;
}

TwoMotors::setMotor1(int pinL, int pinR)
{
  motor1 = new Motor(pinL, pinR, defaultSpeed);
}

TwoMotors::setMotor2(int pinL, int pinR)
{
  motor2 = new Motor(pinL, pinR, defaultSpeed);
}

TwoMotors::forward()
{
  motor1->forward();
  motor2->forward();
}

TwoMotors::forward(int speed)
{
  motor1->forward(speed);
  motor2->forward(speed);
}

TwoMotors::left()
{
  motor1->back();
  motor2->forward();
}

TwoMotors::left(int speed)
{
  motor1->back(speed);
  motor2->forward(speed);
}

TwoMotors::right()
{
  motor1->forward();
  motor2->back();
}

TwoMotors::right(int speed)
{
  motor1->forward(speed);
  motor2->back(speed);
}

TwoMotors::back()
{
  motor1->back();
  motor2->back();
}

TwoMotors::back(int speed)
{
  motor1->back(speed);
  motor2->back(speed);
}

TwoMotors::stop() {
  motor1->stop();
  motor2->stop();
}