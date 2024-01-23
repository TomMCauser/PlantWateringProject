// Author:          Tom Causer
// Date:            22/01/2024
// Purpose:         Store variables used by other files.
// 
// 

const int moistureSensorPin = A0; // input pin for the potentiometer
const int relayPin = 10; // input pin for the relay
const int sensorVCC = 13; // pin number for digital output pin
const int secondsConversion = 1000;
const int delayPeriod = 10; // period in seconds between moisture sensor readings

int *moistureValue = nullptr; // variable to store the value coming from the sensor