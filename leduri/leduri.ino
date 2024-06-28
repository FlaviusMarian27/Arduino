const int redPin = 6;
const int greenPin = 12;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);

}

void loop() {
  digitalWrite(redPin,HIGH);
  delay(500);
  digitalWrite(redPin,LOW);
  delay(500);

  digitalWrite(greenPin,HIGH);
  delay(500);
  digitalWrite(greenPin,LOW);
  delay(500);
}
