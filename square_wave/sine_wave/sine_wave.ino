const int lookupTableSize = 100;  // Size of the lookup table
int lookupTable[lookupTableSize]; // Lookup table for heart shape

int xPin = 3;  // X-axis pin connected to the oscilloscope
int yPin = 5;  // Y-axis pin connected to the oscilloscope

void setup() {
  pinMode(xPin, OUTPUT); // Set the X-axis pin as an output
  pinMode(yPin, OUTPUT); // Set the Y-axis pin as an output

  // Precompute the values for the heart shape lookup table
  for (int i = 0; i < lookupTableSize; i++) {
    float t = i * 2 * PI / lookupTableSize;
    lookupTable[i] = round(30 * (16 * pow(sin(t), 3)));
  }
}

void loop() {
  // Display the heart shape by outputting the lookup table values to the oscilloscope
  for (int i = 0; i < lookupTableSize; i++) {
    int x = lookupTable[i] * cos(i * 2 * PI / lookupTableSize) + 512;
    int y = lookupTable[i] * sin(i * 2 * PI / lookupTableSize) + 512;

    analogWrite(xPin, x >> 2); // Output the X-axis value (shifted to 8 bits)
    analogWrite(yPin, y >> 2); // Output the Y-axis value (shifted to 8 bits)
    delay(10);
  }
}
