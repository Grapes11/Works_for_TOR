#ifndef BLOCK_NUMBER_H
#define BLOCK_NUMBER_H

#include "Packet.h"
#include "RandomNumber.h"
#include <cstdlib>
#include <cmath>
class BlockNumber
{
public:
	Packet assignmentNumber(Packet packet);
	RandomNumber getRandomNumber();
	float insertNumber(RandomNumber number);
};
#endif