#pragma once
#include "BlockName.h"
#include "BlockNumber.h"

class Initialization
{
public:	
	BlockName* blockName;
	BlockNumber* blockNumber;
	void initializationBlockName(NameProduct name);
	void initializationBlockNumber(RandomNumber name);
};

