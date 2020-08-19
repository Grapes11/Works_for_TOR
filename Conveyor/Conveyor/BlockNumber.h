#ifndef BLOCK_NUMBER_H
#define BLOCK_NUMBER_H

#include "BlockCreate.h"
#include <cstdlib>
#include <cmath>

class BlockNumber : public BlockCreate
{
public:
	 virtual Packet dataAssignment(Packet packet, unsigned int i) override;
};

enum class RandomNumber
{
	RAND,
	RAND_COS,
	RAND_SIN,
};

class RandomNumberRAND : public BlockNumber
{
	Packet dataAssignment(Packet packet, unsigned int i) override;
};

class RandomNumberCOS : public BlockNumber
{
	Packet dataAssignment(Packet packet, unsigned int i) override;
};

class RandomNumberSIN : public BlockNumber
{
	Packet dataAssignment(Packet packet, unsigned int i) override;
};

#endif