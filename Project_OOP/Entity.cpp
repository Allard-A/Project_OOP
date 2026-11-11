#include "Entity.h"
#include "Map.h"
#include <iostream>

void Entity::PositionEntity(char name, int x, int y)
{
    Name = name;
    posX = x;
    posY = y;
}

void Entity::Movement(const Map& map)
{
    // Par défaut : l'entité ne bouge pas
}

bool Entity::Collision(const Map& map, int x, int y)
{
    if (x < 0 || x >= map.GetWidth() || y < 0 || y >= map.GetLength())
        return true;

    int block = map.GetData()[y * map.GetWidth() + x];

    return block == Map::Mountain || block == Map::Water;
}

bool Entity::TryMove(const Map& map, int x, int y) {

    int NewX = posX + x;
    int NewY = posY + y;

    if (Collision(map, NewX, NewY))
        return false;

    posX = NewX;
    posY = NewY;
    return true;
}

void Entity::Display() const
{
    std::cout << Name << " ";
}

void Entity::OnUpdate(const Map& map)
{
    Movement(map);
}

void Entity::TakeDamage(int amount)
{
    m_health -= amount;
    if (m_health < 0)
        m_health = 0;
}