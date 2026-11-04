#include "HeadlessZombie.h"

int HeadlessZombie::RandomNumber()
{

	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> distrib(0, 3);

	int aleatoire = distrib(gen);
	return aleatoire;
}
