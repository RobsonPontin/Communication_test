// Temperature.h

#ifndef _TEMPERATURE_h
#define _TEMPERATURE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

int getTemperature(void);
int setTemperature(void);

