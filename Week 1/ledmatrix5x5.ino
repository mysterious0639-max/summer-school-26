int rowPins[] = {2, 3, 4, 5, 6};     
int colPins[] = {7, 8, 9, 10, 11};   

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(rowPins[i], OUTPUT);
    pinMode(colPins[i], OUTPUT);
    digitalWrite(rowPins[i], LOW);   
    digitalWrite(colPins[i], HIGH);  
  }
}

void loop() {
  for (int r = 0; r < 5; r++) {
    digitalWrite(rowPins[r], HIGH); 
    for (int c = 0; c < 5; c++) {
      digitalWrite(colPins[c], LOW);   
      delay(10);                       
      digitalWrite(colPins[c], HIGH);  
    }
    digitalWrite(rowPins[r], LOW);  
  }
}


