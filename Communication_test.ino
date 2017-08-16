#include "EthernetComm.h"
#include "Analog_io.h"
#include "Temperature.h"
#include "Humidity.h"

void setup()
{
	// Open serial comm 
	Serial.begin(9000);
	while (!Serial) {
		; // wait for serial port to connect. Needed for native USB port only
	}

}

void loop()
{
	if (Serial.available() != 0)
	{
		delay(2000);
		ShowAnalogValue(0);
	}
}

void ShowAnalogValue(int port)
{

}
