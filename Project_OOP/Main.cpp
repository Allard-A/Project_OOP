#include <iostream>
#include "Map.h"
#include "HeadlessZombie.h"
int main()
{
	HeadlessZombie zombie;
	int randomValue = zombie.RandomNumber();
	std::cout << "Random Value: " << randomValue << std::endl;
}

