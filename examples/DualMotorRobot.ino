/*
 * DualMotor Basic Movements Example
 * Demonstrates core functionality:
 * - Forward/backward movement
 * - Left/right pivoting
 * - Custom speed control
 * 
 * Connections:
 * - Motor1: Pins 5 (L) and 6 (R)
 * - Motor2: Pins 9 (L) and 10 (R)
 * - Power to appropriate motor driver
 */

#include <DualMotor.h>

DualMotor robot;

void setup() {
  // Initialize motors (pinL, pinR for each motor)
  robot.setMotor1(5, 6);   // Left motor
  robot.setMotor2(9, 10);  // Right motor
  
  Serial.begin(9600);
}

void loop() {
  robot.forward(150);  // Move forward
  delay(2000);
  
  robot.left();        // Turn left (default speed)
  delay(1000);
  
  robot.right(200);    // Turn right (faster)
  delay(1000);
  
  robot.stop();
  delay(500);
  
  robot.custom(180, 90);  // Custom motor speeds
  delay(1500);
}
