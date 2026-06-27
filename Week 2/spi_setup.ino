#include <SPI.h>

void setup() {
  pinMode(SS, OUTPUT);
  digitalWrite(SS, HIGH);
  
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV16);
  SPI.setDataMode(SPI_MODE0);
  SPI.setBitOrder(MSBFIRST);
}

void loop() {
  digitalWrite(SS, LOW);
  SPI.transfer(0x41);
  digitalWrite(SS, HIGH);
  delay(1000);
}
