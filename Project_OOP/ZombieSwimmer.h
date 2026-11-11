#pragma once
#include "Zombie.h"
class ZombieSwimmer :
    public Zombie
{
    bool Collision(const Map& map, int x, int y);
};

