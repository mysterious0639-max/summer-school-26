const int ledPins[] = {2, 3, 4};
const int buttonPin = 5;
int currentLed = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  
  digitalWrite(ledPins[currentLed], HIGH);
  delay(200);

  if (digitalRead(buttonPin) == LOW) {
    if (currentLed == 1) {
      Serial.println("You Win!");
    } else {
      Serial.println("Game Over!");
    }
    delay(1000);
  }

  currentLed = (currentLed + 1) % 3;
}

