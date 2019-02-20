/*
  CH_Maker_ED.h - Sample library.
  Created by Dmitry Maslov, February 19, 2019.
  Released into the public domain.
*/
#ifndef Grove_PH_Sensor_h
#define Grove_PH_Sensor_h

#include "Arduino.h"
class Sensor
{
  public:
    Sensor(int pin);
    float take_reading();
  private:
    int _pin;
	int sensorValue;
    int m;
    long sensorSum;
	float ph;
};

#endif