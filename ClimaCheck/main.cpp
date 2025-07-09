#include <DHT.h>

#define DHTPIN 2         // Pin digital unde e conectat senzorul DHT11
#define DHTTYPE DHT11    // Tipul senzorului

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Eroare la citirea senzorului DHT11!");
  } else {
    Serial.print("Temperatura: ");
    Serial.print(temp);
    Serial.print(" °C, Umiditate: ");
    Serial.print(hum);
    Serial.println(" %");
  }

  delay(2000); // citire la fiecare 2 secunde
}