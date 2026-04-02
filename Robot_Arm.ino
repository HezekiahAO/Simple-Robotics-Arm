#include <Servo.h>

// Servo objects
Servo thumb;
Servo indexFinger;
Servo middleFinger;
Servo ringFinger;
Servo pinkyFinger;

// Servo pin assignments
const int THUMB_PIN  = 8;
const int INDEX_PIN  = 9;
const int MIDDLE_PIN = 10;
const int RING_PIN   = 11;
const int PINKY_PIN  = 12;

// Button pin assignments
const int THUMB_BTN_PIN   = 2;  // Arduino Pin that Controls thumb only
const int FINGERS_BTN_PIN = 4;  // Arduino pin that Controls 4 fingers sequentially

// Position constants
const int OPEN_POS        = 0;
const int CLOSED_POS      = 180;
const int MOVE_DELAY      = 3;   // Speed of each servo sweep (ms per degree)
const int FINGER_INTERVAL = 100; // Pause between each finger folding (ms)

// Thumb array
Servo thumb_arr[] = {thumb};

// Four fingers in fold ORDER (pinky → ring → middle → index)
Servo fold_order[]    = {pinkyFinger, ringFinger, middleFinger, indexFinger};
int fold_order_pins[] = {PINKY_PIN, RING_PIN, MIDDLE_PIN, INDEX_PIN};

const int NUM_FINGERS = 4;

// Toggle states
bool thumbClosed   = false;
bool fingersClosed = false;

// Last button states for debouncing
int lastThumbBtnState   = HIGH;
int lastFingersBtnState = HIGH;

// ------------------------------------
// Move a single servo to target pos
// ------------------------------------
void moveSingle(Servo srv, int targetPos) {
  int currentPos = srv.read();
  int step = (targetPos > currentPos) ? 1 : -1;

  while (currentPos != targetPos) {
    currentPos += step;
    srv.write(currentPos);
    delay(MOVE_DELAY);
  }
}

// ------------------------------------
// Fold fingers one by one:
// pinky → ring → middle → index
// ------------------------------------
void foldSequential() {
  Serial.println("Folding: pinky → ring → middle → index");
  for (int i = 0; i < NUM_FINGERS; i++) {
    Serial.print("Folding finger ");
    Serial.println(i + 1);
    moveSingle(fold_order[i], CLOSED_POS);
    delay(FINGER_INTERVAL); // Short pause before next finger
  }
  fingersClosed = true;
}

// ------------------------------------
// Release fingers one by one:
// index → middle → ring → pinky
// ------------------------------------
void releaseSequential() {
  Serial.println("Releasing: index → middle → ring → pinky");
  for (int i = NUM_FINGERS - 1; i >= 0; i--) { // Reverse order
    Serial.print("Releasing finger ");
    Serial.println(NUM_FINGERS - i);
    moveSingle(fold_order[i], OPEN_POS);
    delay(FINGER_INTERVAL); // Short pause before next finger
  }
  fingersClosed = false;
}

// ------------------------------------
// Toggle thumb open/close
// ------------------------------------
void toggleThumb() {
  if (thumbClosed) {
    Serial.println("Thumb opening...");
    moveSingle(thumb_arr[0], OPEN_POS);
    thumbClosed = false;
  } else {
    Serial.println("Thumb folding...");
    moveSingle(thumb_arr[0], CLOSED_POS);
    thumbClosed = true;}}

// ------------------------------------
// Read button with debounce
// ------------------------------------
bool buttonPressed(int pin, int &lastState) {
  int currentState = digitalRead(pin);

  if (lastState == HIGH && currentState == LOW) {
    delay(50); // Debounce
    lastState = currentState;
    return true;}

  lastState = currentState;
  return false;}

void setup() {
  Serial.begin(9600);

  // Attach and open thumb
  thumb_arr[0].attach(THUMB_PIN);
  thumb_arr[0].write(OPEN_POS);

  // Attach and open four fingers
  for (int i = 0; i < NUM_FINGERS; i++) {
    fold_order[i].attach(fold_order_pins[i]);
    fold_order[i].write(OPEN_POS);
  }

  // Button pins with internal pull-up
  pinMode(THUMB_BTN_PIN, INPUT_PULLUP);
  pinMode(FINGERS_BTN_PIN, INPUT_PULLUP);

  Serial.println("Ready! Press buttons to control fingers.");
}

void loop() {
  // Thumb button
  if (buttonPressed(THUMB_BTN_PIN, lastThumbBtnState)) {
    toggleThumb();
  }

  // Fingers button — fold or release sequentially
  if (buttonPressed(FINGERS_BTN_PIN, lastFingersBtnState)) {
    if (fingersClosed) {
      releaseSequential();
    } else {
      foldSequential();
    }
  }
}
