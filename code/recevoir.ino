#define LED 13
void setup() {
  pinMode (LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   if (Serial.available()>0){
    if(Serial.read() == 'Coucou')
      digitalWrite(LED, 1);
    else
      digitalWrite(LED, 0);
}
}
