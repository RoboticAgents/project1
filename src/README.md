# Source Code

This directory contains the Arduino code for your robot.

## Files

- `robot_control.ino` - Main Arduino program

## Pin Configuration

**IMPORTANT:** Before uploading code, verify your pin connections match the code!

### Motor Driver Connections

If using **TB6612FNG**:
- Motor A (Right): AIN1, AIN2, PWMA
- Motor B (Left): BIN1, BIN2, PWMB
- VM: Battery positive (6-9V)
- VCC: Arduino 5V
- GND: Common ground

If using **L298N**:
- Motor A (Right): IN1, IN2, ENA
- Motor B (Left): IN3, IN4, ENB
- 12V: Battery positive
- GND: Common ground
- 5V jumper: Remove if battery > 12V

## Uploading Code

1. Connect Arduino to computer via USB
2. Open `robot_control.ino` in Arduino IDE
3. Select correct board: Tools > Board > Arduino Uno
4. Select correct port: Tools > Port > (your Arduino)
5. Click Upload button
6. Disconnect USB and power with battery

## Testing Procedure

### Test 1: Individual Motor Control
Modify `loop()` to test each motor:
```cpp
void loop() {
  // Test right motor
  moveForward(150);
  delay(2000);
  stopMotors();
  delay(1000);
}
```

### Test 2: Direction Control
Test all four directions:
```cpp
void loop() {
  moveForward(150);
  delay(2000);
  stopMotors();
  delay(1000);
  
  moveBackward(150);
  delay(2000);
  stopMotors();
  delay(1000);
  
  turnLeft(150);
  delay(1000);
  stopMotors();
  delay(1000);
  
  turnRight(150);
  delay(1000);
  stopMotors();
  delay(1000);
}
```

### Test 3: Autonomous Behavior
Once basic movements work, test your autonomous routine.

## Troubleshooting

### Motor doesn't spin
- Check wiring connections
- Verify pin numbers in code match hardware
- Check battery voltage
- Test motor directly with battery (briefly!)

### Motor spins wrong direction
- Swap IN1 and IN2 connections (or change code)
- OR swap motor wires

### Robot turns instead of going straight
- Motors may have different speeds
- Adjust PWM values for each motor
- Check wheel alignment

### Robot is too fast/slow
- Adjust `DEFAULT_SPEED` and `TURN_SPEED` constants
- PWM range: 0 (stopped) to 255 (full speed)

## Code Style Guidelines

- Use descriptive variable names
- Comment your code
- Group related functions together
- Keep functions short and focused
- Test incrementally

## Version Control

Remember to commit your code regularly:
```bash
git add src/robot_control.ino
git commit -m "Add basic motor control functions"
git push
```
