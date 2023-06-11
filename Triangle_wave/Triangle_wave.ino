int ledPin = 3;    // Pin connected to the output signal

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the output pin as an output
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);    // Ramp up the PWM value
    delay(5);
  }

  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);    // Ramp down the PWM value
    delay(5);
  }
}
