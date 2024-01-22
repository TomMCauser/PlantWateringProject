// Author:          Tom Causer
// Date:            22/01/2024
// Purpose:         Store variables used by other files.
// 
// 

const int moistureSensorPin = A0; // select the input pin for the potentiometer
const int sensorVCC = 13; // pin number for digital output pin
const int secondsConversion = 1000;

int moistureValue = 0; // variable to store the value coming from the sensor