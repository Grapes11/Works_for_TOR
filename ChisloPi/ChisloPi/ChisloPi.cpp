// ChisloPi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#define Nmax 1e7
#define R 1

int main()
{
	double x, y, Pi;
	double Ncirc = 0;
	double i = 0;
	int k = 0;
	Ncirc = 0; i = 0; Pi = 0; x = 0; y = 0;
	while (i < Nmax) {
		x = (rand() % 10000) / 10000.0;
		y = (rand() % 10000) / 10000.0;
		if ((y * y + x * x) <= (R * R)) {
			Ncirc++;
		}
		i++;
	}
	Pi = (Ncirc / Nmax) * 4;
	std::cout << Pi;
}