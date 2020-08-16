#pragma once
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

