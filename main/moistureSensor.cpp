// Author:          Tom Causer
// Date:            22/01/2024
// Purpose:         Everything pertaining to the moisture sensor used in the project.
//                  https://www.electrokit.com/en/product/soil-hygrometer-module/
//                  

#include "moistureSensor.h"
#include "globals.h"

void moistureSensorInit(){
    pinMode(sensorVCC, OUTPUT);
    digitalWrite(sensorVCC, LOW); // initiated with 0 volts
}