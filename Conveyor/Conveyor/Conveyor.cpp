// Conveyor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "BlockNumber.h"
#include "BlockID.h"
#include "BlockName.h"

int main()
{
    BlockNumber blockNumber;
    BlockID blockID;
    BlockName blockName = initializationBlockName(NameProduct::OBJECT_A);
    for (int i = 0; i < 4; i++) {
        Packet packet;
        packet = blockID.dataAssignment(packet, i);
        packet = blockName.dataAssignment(packet, i);
        packet = blockNumber.dataAssignment(packet, i);
        std::cout << "ID:" << packet.ID << " Name:" << packet.Name << " Number:" << packet.Number << "\n";
    }
    return 0;
}
