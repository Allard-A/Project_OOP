#pragma once
#include "Enemy.h"

class Zombie : public Enemy
{
public:

	Zombie(char name, int x, int y);
    void ZombieTargeting(int playerX, int playerY);

};