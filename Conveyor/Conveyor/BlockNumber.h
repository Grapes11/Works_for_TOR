#ifndef BLOCK_NUMBER_H
#define BLOCK_NUMBER_H

#include "RandomNumber.h"
#include "BlockCreate.h"
#include <cstdlib>
#include <cmath>
class BlockNumber : public BlockCreate
{
public:
	Packet dataAssignment(Packet packet, unsigned int i) override;
	RandomNumber getRandomNumber();
	float insertNumber(RandomNumber number);
};
#endif