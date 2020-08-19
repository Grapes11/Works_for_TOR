#include "Initialization.h"

void Initialization::initializationBlockName(NameProduct name)
{
	switch (name) {
	case NameProduct::OBJECT_A: blockName = new NameProductA(); break;
	case NameProduct::OBJECT_B: blockName = new NameProductB(); break;
	case NameProduct::OBJECT_C: blockName = new NameProductC(); break;
	default: blockName = new NameProductA();
	}
}

void Initialization::initializationBlockNumber(RandomNumber name) {
	switch (name) {
	case RandomNumber::RAND: blockNumber = new RandomNumberRAND(); break;
	case RandomNumber::RAND_COS: blockNumber = new RandomNumberCOS(); break;
	case RandomNumber::RAND_SIN: blockNumber = new RandomNumberSIN(); break;
	default: blockNumber = new RandomNumberRAND();
	}
}
