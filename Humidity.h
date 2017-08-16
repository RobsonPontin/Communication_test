// Humidity.h

#ifndef _HUMIDITY_h
#define _HUMIDITY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

int getHumidity(void);
int setHumidity(void);