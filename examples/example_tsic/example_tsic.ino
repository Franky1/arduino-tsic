/**
 *  test arduino-tsic library by reading the temperature every second
 *  and output the measured data to the serial port
 */

#include "TSIC.h"       // include the library

// instantiate the library, representing the sensor
TSIC Sensor1(3);  // data pin 3
// TSIC Sensor2(6);  // data pin 6 (second tsic sensor)

uint16_t temperature = 0;
float Temperatur_C = 0;

void setup() {
    Serial.begin(9600); // set up the serial port
}

void loop() {
  
  if (Sensor1.getTemperture(&temperature) == 0) // if no error during read
  {
    Serial.print("uint_16: ");
    Serial.print(temperature);
    Temperatur_C = Sensor1.calc_CelsiusTsic506(&temperature);
    Serial.print(", Temperature: ");
    Serial.print(Temperatur_C);
    Serial.println(" C");
  }
  
  delay(1000);    // wait 1 seconds
}
