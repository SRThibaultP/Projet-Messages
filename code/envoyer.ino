#include <SoftwareSerial.h>

#define rxpin 00
#define txpin 1

SoftwareSerial myserial = new SoftwareSerial (rxpin,pxpin);
void setup() {
  Serial.begin(4800);
  pinMode(rxpin, intpout)
  pinMode(txpin, intpout)
}

void loop() {
  if (mySerial.available >0)
  Serial.println("non");
  delay(200);
  Serial.println("Coucou");
  delay(200);
}
