void setup() {
  Serial.begin(9600);
}

void loop() {
  // Sending data from Tx
  Serial.println("Hello from Arduino");
  delay(1000);
  
  // Checking for incoming data on Rx
  if (Serial.available() > 0) {
    String incomingData = Serial.readStringUntil('\n');
    // Process incoming data if needed
  }
}
