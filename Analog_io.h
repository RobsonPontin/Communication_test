// Analog_io.h

/* define here all the logic responsible for selecting which
* analog io is related to a specific module
*/

#ifndef _ANALOG_IO_h
#define _ANALOG_IO_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

#define MAX_ANALOG_INPUTS 8
#define MAX_ANALOG_OUTPUTS 2
#define DEFAULT_ANALOG_INPUT_SCAN 50 // ms sample rate for inputs

int SetUpAnalogPort(int port);