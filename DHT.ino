
//DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library

#include "DHT.h"

//connect Vcc to 5V
//connect GND to GND
//connect DATA to D4
DHT dht(4, DHT11); //Initialize DHT sensor

void setup() {
  delay(500);
  //start the serial monitor
  Serial.begin(9600);
  Serial.println(F("START!!!"));
  dht.begin();
}

void loop() {
  //add delay for startup
  delay(2000);
  // Check if the sensor falied to read 
  if (isnan(dht.readHumidity()) || isnan(dht.readTemperature())) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  //print the sensor data to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(dht.readTemperature());
  Serial.print("°C    ");
  Serial.print("Humidity: ");
  Serial.print(dht.readHumidity());
  Serial.print("%");
  Serial.println("  ");

}
