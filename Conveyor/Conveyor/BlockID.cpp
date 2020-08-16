#include "BlockID.h"

Packet BlockID::assignmentID(Packet packet, unsigned int i) {
	packet.ID = i;
	return packet;
}