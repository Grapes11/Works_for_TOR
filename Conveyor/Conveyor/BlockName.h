#ifndef BLOCK_NAME_H
#define BLOCK_NAME_H

#include "Packet.h"
#include "NameProduct.h"
#include <string>
class BlockName {
public:
	Packet assignmentName(Packet packet, unsigned int i);
	NameProduct getNameProduct(unsigned int i);
	std::string namingObject(NameProduct name);
};
#endif