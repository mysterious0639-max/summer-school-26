void setup() {
  Serial.begin(9600);

  // Digital Pins 2 to 13 as Outputs
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }

  // Analog Pins A0 to A5 as Inputs
  for (int i = A0; i <= A5; i++) {
    pinMode(i, INPUT);
  }
}

void loop() {
  // Reading from an Analog pin
  int analogVal = analogRead(A0);
  
  // Driving a PWM pin (Pin 3) based on input
  analogWrite(3, analogVal / 4);

  // Blinking all digital pins together
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, HIGH);
  }
  delay(500);
  
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, LOW);
  }
  delay(500);
}

