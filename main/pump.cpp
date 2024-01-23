// Author:          Tom Causer
// Date:            22/01/2024
// Purpose:         Everything pertaining to the pump & pump relay used in the project.
//                  Pump: https://www.electrokit.com/en/product/peristaltic-liquid-pump-12v-with-silicone-tubing/
//                  Relay: https://www.electrokit.com/en/product/relay-module-5v/

#include "pump.h"
#include "globals.h"

void pumpInit(){
    pinMode(relayPin, OUTPUT);
}

void pumpState_ON(){
    digitalWrite(relayPin, HIGH);
}

void pumpState_OFF(){
    digitalWrite(relayPin, LOW);
}