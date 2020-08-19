// Conveyor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "BlockNumber.h"
#include "BlockID.h"
#include "BlockName.h"
#include "Initialization.h"

int main()
{

    BlockID* blockID = new BlockID();
    Initialization* initial = new Initialization();
    NameProduct name = NameProduct::OBJECT_B;
    RandomNumber number = RandomNumber::RAND;
    initial->initializationBlockName(name);
    initial->initializationBlockNumber(number);
    

    for (int i = 0; i < 4; i++) {
        Packet packet;
        packet = blockID->dataAssignment(packet, i);
        packet = initial->blockName->dataAssignment(packet, i);
        packet = initial->blockNumber->dataAssignment(packet, i);
        std::cout << "ID:" << packet.ID << " Name:" << packet.Name << " Number:" << packet.Number << "\n";
    }

    delete blockID;
    delete initial;

    return 0;
}
