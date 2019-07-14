#include<SoftwareSerial.h>
SoftwareSerial mySerial(10,11);

void setup(){
  Serial.begin(9600);
  mySerial.begin(9600);
  mySerial.println("Ecrivez un mot");
}

void loop(){
  Serial.print('a');
}

