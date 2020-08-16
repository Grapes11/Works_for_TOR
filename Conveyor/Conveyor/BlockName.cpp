#include "BlockName.h"

	Packet BlockName::assignmentName(Packet packet, unsigned int i) {
		packet.Name = namingObject(getNameProduct(i));
		return packet;
	}

	NameProduct BlockName::getNameProduct(unsigned int i) {
		switch (i) {
		case 0: return NameProduct::OBJECT_A;
		case 1: return NameProduct::OBJECT_B;
		case 2: return NameProduct::OBJECT_C;
		case 3: return NameProduct::OBJECT_D;
		default: return NameProduct::OBJECT_NULL;
		}
		return NameProduct::OBJECT_NULL;
	}

	std::string BlockName::namingObject(NameProduct name) {
		switch (name) {
		case NameProduct::OBJECT_A: return "Object A";
		case NameProduct::OBJECT_B: return "Object B";
		case NameProduct::OBJECT_C: return "Object C";
		case NameProduct::OBJECT_D: return "Object D";
		default: return "Object null";
		}
		return NULL;
	}