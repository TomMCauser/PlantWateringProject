// Author:          Tom Causer
// Date:            22/01/2024
// Purpose:         Act as the main file for the Arduino to read from.
//                  Arduinos furthermore require the folder name to be the same as
//                  the main .ino file.

#include "Arduino.h"
#include "globals.h"
#include "moistureSensor.h"
#include "pump.h"

void setup()
{
Serial.begin(9600);
pinMode(sensorVCC, OUTPUT);
digitalWrite(sensorVCC, LOW); // initiated with 0 volts
}

void loop()
{
digitalWrite(sensorVCC, HIGH); // power the sensor
delay(0.1*secondsConversion); //make sure the sensor is powered
moistureValue = analogRead(moistureSensorPin); // read the value from the sensor:
digitalWrite(sensorVCC, LOW); //stop power
delay(10*secondsConversion); //wait
Serial.print("sensor = " );
Serial.println(moistureValue);
}