// Author:          Tom Causer
// Date:            22/01/2024
// Purpose:         Act as the main file for the Arduino to read from.
//                  Arduinos furthermore require the folder name to be the same as
//                  the main .ino file.

#include "Arduino.h"
#include "globals.h"
#include "moistureSensor.h"
#include "pump.h"

void setup(){
    Serial.begin(9600);
    pumpInit();
    moistureSensorInit();
}

void loop(){
    takeMoistureReading();
    delay(delayPeriod*secondsConversion);

    pumpState_ON();
    delay(1000);
    pumpState_OFF();
    delay(1000);
}