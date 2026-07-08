#include <Servo.h>

const uint8_t RC_CHANNEL1_PIN = 2;
const uint8_t RC_CHANNEL2_PIN = 3;

const uint8_t LEFT_MOTOR_OUTPUT_PIN = 5;
const uint8_t RIGHT_MOTOR_OUTPUT_PIN = 6;

const int RC_MIN = 1000;
const int RC_MID = 1500;
const int RC_MAX = 2000;
const int RC_DEADBAND = 30;
const unsigned long RC_TIMEOUT = 25000;

Servo leftMotorOutput;
Servo rightMotorOutput;

int rcPulseToSignedCommand(uint8_t pin) {
  unsigned long pulseWidth = pulseIn(pin, HIGH, RC_TIMEOUT);

  if (pulseWidth == 0) {
    return 0;
  }

  pulseWidth = constrain(pulseWidth, RC_MIN, RC_MAX);

  if (abs((int)pulseWidth - RC_MID) < RC_DEADBAND) {
    return 0;
  }

  return map(pulseWidth, RC_MIN, RC_MAX, -500, 500);
}


void setup() {
  pinMode(RC_CHANNEL1_PIN, INPUT);
  pinMode(RC_CHANNEL2_PIN, INPUT);

  leftMotorOutput.attach(LEFT_MOTOR_OUTPUT_PIN);
  rightMotorOutput.attach(RIGHT_MOTOR_OUTPUT_PIN);

  leftMotorOutput.writeMicroseconds(RC_MID);
  rightMotorOutput.writeMicroseconds(RC_MID);
}

void loop() {
  int throttle = rcPulseToSignedCommand(RC_CHANNEL1_PIN);
  int steering = rcPulseToSignedCommand(RC_CHANNEL2_PIN);

  int leftMotor = throttle + steering;
  int rightMotor = throttle - steering;

  leftMotor = constrain(leftMotor, -500, 500);
  rightMotor = constrain(rightMotor, -500, 500);

  int leftCommand = leftMotor + 1500;
  int rightCommand = rightMotor + 1500;

  leftMotorOutput.writeMicroseconds(leftCommand);
  rightMotorOutput.writeMicroseconds(rightCommand);

  delay(20);
}




