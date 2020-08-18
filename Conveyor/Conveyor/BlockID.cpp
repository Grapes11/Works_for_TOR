#include "BlockID.h"

Packet BlockID::dataAssignment(Packet packet, unsigned int i) {
	packet.ID = i;
	return packet;
}