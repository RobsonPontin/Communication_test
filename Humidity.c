/*
*
*/

#include "Humidity.h"

#define HUMIDTY_SENSOR_PORT 0

int humidity_setpoint = 0;

int getHumidity()
{
	return calculateHumidty();
}

// it must return humidity based on analog value (0-1023)
int calculateHumidty()
{
	int analogValue = analogRead(HUMIDTY_SENSOR_PORT);

	return analogValue;
}

int setHumidity()
{
	if (getHumidity == 0)
		return 0;

	return humidity_setpoint = getHumidity;
}