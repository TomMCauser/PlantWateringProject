// Author:          Tom Causer
// Date:            22/01/2024
// Purpose:         Everything pertaining to the moisture sensor used in the project.
//                  https://www.electrokit.com/en/product/soil-hygrometer-module/
//                  

#include "Arduino.h"
#include "moistureSensor.h"
#include "globals.h"

void moistureSensorInit(){
    pinMode(sensorVCC, OUTPUT);
    digitalWrite(sensorVCC, LOW); // initiated with 0 volts
}

void takeMoistureReading(){
    digitalWrite(sensorVCC, HIGH);
    delay(0.1*secondsConversion);
    *moistureValue = analogRead(moistureSensorPin);
    digitalWrite(sensorVCC, LOW);
}
