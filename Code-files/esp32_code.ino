#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT11
#define MQ135_PIN 34
#define LDR_PIN 35

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  float hum  = dht.readHumidity();
  int air = analogRead(MQ135_PIN);
  int light = analogRead(LDR_PIN);

  Serial.print(temp);
  Serial.print(",");
  Serial.print(hum);
  Serial.print(",");
  Serial.print(air);
  Serial.print(",");
  Serial.println(light);

  delay(2000);
}
