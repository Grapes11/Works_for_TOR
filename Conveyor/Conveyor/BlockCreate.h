#ifndef BLOCK_CREATE_H
#define BLOCK_CREATE_H

#include "Packet.h"
class BlockCreate
{
protected:
	virtual Packet dataAssignment(Packet packet, unsigned int i);
};
#endif