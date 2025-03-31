# 🤖 DualMotor Library for Arduino

A high-level wrapper for controlling dual motor systems like robotic cars. Built on top of the Motor library.

## 📦 Installation
2. ⬇️ Download the DualMotors.zip in the releases
3. 📂 Extract in your Arduino libraries folder
4. ➕ Include in your sketch: 
```cpp
#include <DualMotor.h>
```

## 🎮 Basic Usage

### Differential Drive Example
```cpp
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
```

## 🏗️ Constructors
| Constructor | Description |
|-------------|-------------|
| `DualMotor()` | Default speed = 127 |
| `DualMotor(speed)` | Set custom default speed |

## ⚙️ Core Methods
| Method | Description |
|--------|-------------|
| `setMotor1(pinL, pinR)` | Configure left motor pins |
| `setMotor2(pinL, pinR)` | Configure right motor pins |
| `forward(speed)` | Both motors forward |
| `forward()` | Forward at default speed |
| `back(speed)` | Both motors backward |
| `back()` | Backward at default speed |
| `left(speed)` | Pivot left (left motor back) |
| `left()` | Pivot left at default speed |
| `right(speed)` | Pivot right (right motor back) |
| `right()` | Pivot right at default speed |
| `stop()` | Stop both motors |
| `custom(left, right)` | Set custom speeds for each motor |

## 🚀 Advanced Features
- **Differential Steering**: Built-in left/right turn methods
- **Speed Control**: Individual motor speed control
- **Custom Mixing**: `custom()` method for advanced maneuvers
- **Memory Management**: Automatically handles motor instances

## 💡 Pro Tips
- 🔄 Call `setMotor1()` and `setMotor2()` before any movement
- ⚖️ Use `custom()` for precise speed adjustments
- 🏎️ Higher default speed = more aggressive turns
- 🛑 Always call `stop()` before changing direction
- 🔋 Add `enable/disable` methods for power saving

Developed with ❤️ for makers and roboticists 🤖✨

