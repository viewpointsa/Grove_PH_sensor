/*
  CH_Maker_ED.h - Sample library.
  Created by Dmitry Maslov, February 19, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Grove_PH_Sensor.h"
#define Vref 4.95
Sensor::Sensor(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;
}

float Sensor::take_reading()
{
    for(m=0;m<51;m++)
    {
        sensorValue=analogRead(A0);//Connect the PH Sensor to A0 port
        sensorSum += sensorValue;
    }
    sensorValue =  sensorSum/50;
	ph = 7-1000*(sensorValue-372)*Vref/59.16/1023;
	return ph;
}
