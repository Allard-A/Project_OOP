#include "Zombie.h"

void Zombie::ZombieTargeting(int playerX, int playerY)
{
    if (GetX() < playerX) { 
        MoveRight();
    }
    else if (GetX() > playerX) {
        MoveLeft();

    }
    else if (GetY() < playerY) {
        MoveDown();
    }
    else if (GetY() > playerY) {
        MoveUp();
    }
}
