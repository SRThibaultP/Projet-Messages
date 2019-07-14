#define LED 13
#include<SoftwareSerial.h>
SoftwareSerial mySerial(10,11);

void setup(){
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode (LED, OUTPUT);
}

void loop(){
  if(Serial.available()>0)
  {
     mySerial.read();
    if(Serial.read() == 'a');
      digitalWrite(LED, 1);
  }    else
      digitalWrite(LED, 0);
  }
