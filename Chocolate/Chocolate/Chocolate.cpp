// Chocolate.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "BreakChocolate.h"

int main()
{
    unsigned int n;
    unsigned int m;
    std::cout << "Enter two numbers in sequence to represent the size of the chocolate\n";
    std::cout << "Enter first number:\n";
    std::cin >> n;
    std::cout << "Enter second number:\n";
    std::cin >> m;
    unsigned int k = breakChocolate(n, m);
    std::cout << "Number of breaks required = " << k;
}