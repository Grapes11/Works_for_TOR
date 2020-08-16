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
    BlockName blockName;
    for (int i = 0; i < 4; i++) {
        Packet packet;
        packet = blockID.assignmentID(packet, i);
        packet = blockName.assignmentName(packet, i);
        packet = blockNumber.assignmentNumber(packet);
        std::cout << "ID:" << packet.ID << " Name:" << packet.Name << " Number:" << packet.Number << "\n";
    }
    return 0;
}
