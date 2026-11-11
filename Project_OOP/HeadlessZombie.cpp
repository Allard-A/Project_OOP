#include "HeadlessZombie.h"

int HeadlessZombie::RandomNumber()
{

	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> distrib(0, 3);

	int aleatoire = distrib(gen);
	return aleatoire;

}

void HeadlessZombie::Movement()
{
    int random = RandomNumber();
    if (random == 0) {
        MoveLeft();
    }
    else if (random == 1) {
        MoveRight();
    }
    else if (random == 2) {
        MoveUp();
    }
    else if (random == 3) {
        MoveDown();
    }
}

