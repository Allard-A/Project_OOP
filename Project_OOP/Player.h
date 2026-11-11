#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
    Player() { m_health = 10; }
    void Mouvement(const Map& map);
};