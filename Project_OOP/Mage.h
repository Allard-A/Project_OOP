#pragma once
#include "Player.h"
//Alexis

class Mage :
    public Player
{
public:
	Mage(char name, int x, int y);
	void DistantAttack();
};

