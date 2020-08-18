#ifndef BLOCK_ID_H
#define BLOCK_ID_H

#include "BlockCreate.h"
class BlockID : public BlockCreate
{
public:
	Packet dataAssignment(Packet packet, unsigned int i) override;
};
#endif
