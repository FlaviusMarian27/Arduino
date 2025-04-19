#include <Arduino.h>

const int redPin = 6;
const int greenPin = 12;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);  
}

void loop() {
  digitalWrite(redPin,HIGH);
  delay(300);
  digitalWrite(redPin,LOW);
  delay(300);

  digitalWrite(greenPin,HIGH);
  delay(300);
  digitalWrite(greenPin,LOW);
  delay(300);
}
