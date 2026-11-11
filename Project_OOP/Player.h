#pragma once
#include "Entity.h"
//Alexis

class Player : public Entity
{
public:
	Player(char name, int x, int y);
    void Mouvement(const Map& map);
};