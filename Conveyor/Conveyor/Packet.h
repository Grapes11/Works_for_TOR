#ifndef PACKET_H
#define PACKET_H

#include <string>
class Packet
{

public:
	unsigned int ID;
	std::string Name;
	float Number;

	Packet() {
		ID = 0;
		Name = "Object NULL";
		Number = 0;
	}
};
#endif

