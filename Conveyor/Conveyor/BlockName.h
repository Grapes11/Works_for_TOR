#ifndef BLOCK_NAME_H
#define BLOCK_NAME_H

#include "BlockCreate.h"
#include <string>

class BlockName : public BlockCreate {
public:
	virtual Packet dataAssignment(Packet packet, unsigned int i) override;
};

enum class NameProduct
{
	OBJECT_A,
	OBJECT_B,
	OBJECT_C,	
};

class NameProductA : public BlockName
{
	Packet dataAssignment(Packet packet, unsigned int i) override;
};

class NameProductB : public BlockName
{
	Packet dataAssignment(Packet packet, unsigned int i) override;
};

class NameProductC : public BlockName
{
	Packet dataAssignment(Packet packet, unsigned int i) override;
};

BlockName initializationBlockName(NameProduct name);

#endif