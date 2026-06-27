const int LDR_PIN = A0;
const int STREET_LIGHT_PIN = 13;
const int THRESHOLD = 500;

void setup() {
  pinMode(STREET_LIGHT_PIN, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);

  if (ldrValue < THRESHOLD) {
    digitalWrite(STREET_LIGHT_PIN, HIGH);
  } else {
    digitalWrite(STREET_LIGHT_PIN, LOW);
  }
  delay(100);
}

