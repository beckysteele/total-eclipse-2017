#include <DallasTemperature.h> //Download this library at: https://github.com/milesburton/Arduino-Temperature-Control-Library
#include <OneWire.h> //Download this library at: https://github.com/PaulStoffregen/OneWire

#define ONE_WIRE_BUS 12 // Used digital pin 12

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors (&oneWire);

float Celsius = 0;
float Fahrenheit = 0;

void setup() {

  sensors.begin();
  Serial.begin(9600);

}

void loop() {

  sensors.requestTemperatures();
  Celsius = sensors.getTempCByIndex(0); // Get temp in Celsius
  Fahrenheit = sensors.toFahrenheit(Celsius); // Convert to Fahrenheit

  // And... this is why the data need mapped/split :(

  Serial.print(Celsius);
  Serial.print(" Degrees C: ");
  Serial.print(Fahrenheit);
  Serial.println(" Degrees F: ");
  delay(1000); // Data reported once per 1000 milliseconds (1 second)
  
}
