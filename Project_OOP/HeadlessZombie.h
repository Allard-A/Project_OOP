#pragma once
#include "Enemy.h"
#include <random>

class HeadlessZombie : public Enemy
{
    void Movement();
public:
	HeadlessZombie(char name, int x, int y);
    int RandomNumber();
};

