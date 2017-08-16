// 
// 
// 

#include "Temperature.h"

#define TEMPERATURE_SENSOR_PORT 1

int temperature_setpoint = 0;

int getTemperature()
{
	return CalculatedTemperature();
}

int CalculatedTemperature()
{
	int analogValue = analogRead(TEMPERATURE_SENSOR_PORT);
	int temperature = analogValue * 2;
	return temperature;
}

int setTemperature()
{
	if (getTemperature() == 0)
		return 0;

	return temperature_setpoint = getTemperature();
}