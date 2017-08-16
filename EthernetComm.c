#include "EthernetComm.h"

#include <UIPUdp.h>
#include <UIPServer.h>
#include <UIPClient.h>
#include <ethernet_comp.h>
#include <Dns.h>
#include <Dhcp.h>
#include<UIPEthernet.h>

// Unique MAC
byte mac[] = { 0x00, 0xAA, 0xBB, 0xCC, 0xDE, 0x02 };
// Declare a default address and therefore connect static if dhcp doesn't work
IPAddress ip(192, 168, 1, 177);
IPAddress myDns(192, 168, 1, 1);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 0, 0);

// telnet defaults to port 23
EthernetServer server(23);

// whether or not you got a message from the client yet
boolean gotAMessage = false;

int Connect(void)
{
	return -1;
}

int SetUpDHCP()
{
	Serial.println("Trying to stabilish a connection");

	// It starts a dhcp communication
	if (Ethernet.begin(mac) == 0)
	{
		Serial.println("Connection attempt failed");
		return -1;
	}

	return 0;
}

int PrintIPAddress()
{
	// Print current IP Address
	Serial.println("My IP address: ");

	ip = Ethernet.localIP();
	for (byte thisByte = 0; thisByte < 4; thisByte++)
	{
		// print the value of each byte of IP address
		Serial.print(ip[thisByte], DEC);
		Serial.print(".");
	}
	Serial.println();

	return 0;
}

int StartServer()
{
	server.begin();

	return 0;
}

/*
// wait for a new client:
EthernetClient client = server.available();

// when the client sends the first byte, say hello:
if (client) {
if (!gotAMessage) {
Serial.println("We have a new client");

gotAMessage = true;
}

// read the bytes incoming from the client:
char thisChar = client.read();
// echo the bytes back to the client:
server.write(thisChar);
// echo the bytes to the server as well:
Serial.print(thisChar);
Ethernet.maintain();

}


*/