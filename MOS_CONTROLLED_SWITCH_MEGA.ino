#define MOTOR_PIN 7     // Connected to MOSFET Gate
#define SWITCH_PIN 6    // Connected to one side of SW1

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(SWITCH_PIN, INPUT_PULLUP); // Use internal pull-up resistor

  digitalWrite(MOTOR_PIN, LOW); // Ensure motor is off initially
}

void loop() {
  bool switchState = digitalRead(SWITCH_PIN);

  if (switchState == LOW) {
    // Switch is pressed → Turn ON motor
    digitalWrite(MOTOR_PIN, HIGH);
  } else {
    // Switch is not pressed → Turn OFF motor
    digitalWrite(MOTOR_PIN, LOW);
  }
}
