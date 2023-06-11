int ledPin = 2;    // Pin connected to the output signal

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the output pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Set the pin to HIGH
  delay(500);                    // Wait for 500ms
  digitalWrite(ledPin, LOW);    // Set the pin to LOW
  delay(500);                    // Wait for 500ms
}
