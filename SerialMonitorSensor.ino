#include "DHT.h"
#define DHTTYPE D11

DHT dht(5,DHTTYPE);
void setup() {
  Serial.begin(115200);
  Serial.println("Humidity and Temperature")
  delay(500)
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("current humidity = ");
  Serial.print(h);
  Serial.print("% ")
  Serial.print("Current Temparature = ");
  Serial.print(t);
  Serial.println("Celcius")
 delay(500)
}
