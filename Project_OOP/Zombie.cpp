#include "Zombie.h"

void Zombie::ZombieTargeting(Player& player)
{
    if (GetX() < player.GetX()) { 
        MoveRight();
    }
    else if (GetX() > player.GetX()) {
        MoveLeft();

    }
    else if (GetY() < player.GetY()) {
        MoveDown();
    }
    else if (GetY() > player.GetY()) {
        MoveUp();
    }
}
