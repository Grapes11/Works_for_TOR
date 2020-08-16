#include "BlockNumber.h"

Packet BlockNumber::assignmentNumber(Packet packet) {
	packet.Number = insertNumber(getRandomNumber());
	return packet;
}

RandomNumber BlockNumber::getRandomNumber() {
	int mas[3] = { 1,2,3 };
	int number = rand() % (sizeof(mas) / sizeof(mas[0]));
	switch (number) {
	case 0: return RandomNumber::RAND;
	case 1: return RandomNumber::RAND_SIN;
	case 2: return RandomNumber::RAND_COS;
	default: return RandomNumber::RAND;
	}
	return RandomNumber::RAND;
}

float BlockNumber::insertNumber(RandomNumber number) {
	if (number == RandomNumber::RAND) {
		return float(rand() % 100);
	}
	else if (number == RandomNumber::RAND_COS) {
		return float(cos((rand() % 360) * 3.14 / 180));
	}
	else {
		return float(sin((rand() % 360) * 3.14 / 180));
	}
	return NULL;
}
