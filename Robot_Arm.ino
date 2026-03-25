#include <Servo.h>

// Servo objects
Servo thumb;
Servo indexFinger;
Servo middleFinger;
Servo ringFinger;
Servo pinkyFinger;

// Pin assignments
const int THUMB_PIN  = 8;
const int INDEX_PIN  = 9;
const int MIDDLE_PIN = 10;
const int RING_PIN   = 11;
const int PINKY_PIN  = 12;

// Position constants
const int OPEN_POS   = 0;
const int CLOSED_POS = 180;
const int MOVE_DELAY = 5;
const int HOLD_DELAY = 500;

// Array for easy looping
Servo fingers[]       = {thumb, indexFinger, middleFinger, ringFinger, pinkyFinger};
int pins[]            = {THUMB_PIN, INDEX_PIN, MIDDLE_PIN, RING_PIN, PINKY_PIN};
const int NUM_FINGERS = 5;

void moveFingers(int targetPos) {
  int currentPos = fingers[0].read();
  int step = (targetPos > currentPos) ? 1 : -1;

  while (currentPos != targetPos) {
    currentPos += step;
    for (int i = 0; i < NUM_FINGERS; i++) {
      fingers[i].write(currentPos);
    }
    delay(MOVE_DELAY);
  }
}

void openHand() {
  Serial.println("Opening...");
  moveFingers(OPEN_POS);
}

void squeezeHand() {
  Serial.println("Squeezing...");
  moveFingers(CLOSED_POS);
}

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < NUM_FINGERS; i++) {
    fingers[i].attach(pins[i]);
    fingers[i].write(OPEN_POS); // Start open
  }

  Serial.println("Ready!");
  delay(1000);
}

void loop() {
  squeezeHand();
  delay(HOLD_DELAY);

  openHand();
  delay(HOLD_DELAY);
}
