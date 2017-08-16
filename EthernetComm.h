// EthernetComm.h

#ifndef _ETHERNETCOMM_h
#define _ETHERNETCOMM_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

int Connect(void);
int PrintIPAddress(void);
int SetUpDHCP(void);
