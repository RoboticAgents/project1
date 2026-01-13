/*
 * Robot Control - Main Program
 * 
 * Project 1: Engineering a Wheeled Robot
 * Team Name: [Your Team Name]
 * Team Members: [Names]
 * 
 * Description:
 * This program controls a differential drive robot with two motors.
 * It demonstrates basic locomotion (forward, backward, turning) and
 * at least one autonomous behavior.
 * 
 * Hardware:
 * - Arduino Uno
 * - Motor Driver: [TB6612FNG or L298N]
 * - 2x DC Gear Motors (6V)
 * - Battery Pack: [Voltage]
 * 
 * Pin Configuration:
 * Motor A (Right):
 *   - IN1: Pin ?
 *   - IN2: Pin ?
 *   - PWM: Pin ?
 * 
 * Motor B (Left):
 *   - IN1: Pin ?
 *   - IN2: Pin ?
 *   - PWM: Pin ?
 */

// ============================================
// Pin Definitions
// ============================================

// Motor A (Right Motor)
const int MOTOR_A_IN1 = 7;
const int MOTOR_A_IN2 = 8;
const int MOTOR_A_PWM = 9;   // Must be PWM-capable pin

// Motor B (Left Motor)
const int MOTOR_B_IN1 = 4;
const int MOTOR_B_IN2 = 5;
const int MOTOR_B_PWM = 6;   // Must be PWM-capable pin

// Optional: LED for debugging
const int LED_PIN = 13;

// ============================================
// Constants
// ============================================

const int MAX_SPEED = 255;        // Maximum PWM value
const int DEFAULT_SPEED = 180;    // Default driving speed (adjust as needed)
const int TURN_SPEED = 150;       // Speed for turning

// ============================================
// Setup Function
// ============================================

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  Serial.println("Robot Control Starting...");
  
  // Configure motor control pins as outputs
  pinMode(MOTOR_A_IN1, OUTPUT);
  pinMode(MOTOR_A_IN2, OUTPUT);
  pinMode(MOTOR_A_PWM, OUTPUT);
  
  pinMode(MOTOR_B_IN1, OUTPUT);
  pinMode(MOTOR_B_IN2, OUTPUT);
  pinMode(MOTOR_B_PWM, OUTPUT);
  
  // Configure LED pin
  pinMode(LED_PIN, OUTPUT);
  
  // Initial state: motors stopped
  stopMotors();
  
  // Blink LED to indicate setup complete
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  }
  
  Serial.println("Setup Complete!");
  delay(2000);  // Wait 2 seconds before starting
}

// ============================================
// Main Loop
// ============================================

void loop() {
  // TODO: Implement your autonomous behavior here
  // Example: Drive in a square pattern
  
  // Add your code here
  
  // Stop and wait
  stopMotors();
  delay(3000);
}

// ============================================
// Motor Control Functions
// ============================================

/**
 * Move both motors forward
 * @param speed: PWM value (0-255)
 */
void moveForward(int speed) {
  Serial.println("Moving Forward");
  
  // Right motor forward
  digitalWrite(MOTOR_A_IN1, HIGH);
  digitalWrite(MOTOR_A_IN2, LOW);
  analogWrite(MOTOR_A_PWM, speed);
  
  // Left motor forward
  digitalWrite(MOTOR_B_IN1, HIGH);
  digitalWrite(MOTOR_B_IN2, LOW);
  analogWrite(MOTOR_B_PWM, speed);
}

/**
 * Turn left (left motor slower or stopped, right motor forward)
 * @param speed: PWM value (0-255)
 */
void turnLeft(int speed) {
  Serial.println("Turning Left");
  
  // Right motor forward
  digitalWrite(MOTOR_A_IN1, HIGH);
  digitalWrite(MOTOR_A_IN2, LOW);
  analogWrite(MOTOR_A_PWM, speed);
  
  // Left motor stopped or backward for sharper turn
  digitalWrite(MOTOR_B_IN1, LOW);
  digitalWrite(MOTOR_B_IN2, LOW);
  analogWrite(MOTOR_B_PWM, 0);
  
  // For pivot turn (left motor backward), uncomment:
  // digitalWrite(MOTOR_B_IN1, LOW);
  // digitalWrite(MOTOR_B_IN2, HIGH);
  // analogWrite(MOTOR_B_PWM, speed);
}

// ============================================
// Additional Functions (Add Your Own)
// ============================================

// TODO: Add your custom behaviors and functions here
