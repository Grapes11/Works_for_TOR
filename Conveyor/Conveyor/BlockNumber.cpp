#include "BlockNumber.h"

Packet BlockNumber::dataAssignment(Packet packet, unsigned int i) {
	packet.Number = 0;
	return packet;
}

Packet RandomNumberRAND::dataAssignment(Packet packet, unsigned int i) {
	packet.Number = float(rand() % 100);
	return packet;
}

Packet RandomNumberCOS::dataAssignment(Packet packet, unsigned int i) {
	packet.Number = float(cos((rand() % 360) * 3.14 / 180));
	return packet;
}

Packet RandomNumberSIN::dataAssignment(Packet packet, unsigned int i) {
	packet.Number = float(sin((rand() % 360) * 3.14 / 180));
	return packet;
}