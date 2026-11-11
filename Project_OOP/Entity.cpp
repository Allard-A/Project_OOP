#include "Entity.h"
#include "Map.h"
#include <iostream>
#include <conio.h>   

void Entity::PositionEntity(char name, int x, int y)
{
    Name = name;
    posX = x;
    posY = y;
}

void Entity::MoveLeft()
{    posX -= 1;}

void Entity::MoveRight()
{    posX += 1;}

void Entity::MoveUp()
{    posY -= 1;}

void Entity::MoveDown()
{    posY += 1;}

bool Entity::Collision(const Map& map, int x, int y)
{
    if (x < 0 || x >= map.GetWidth() || y < 0 || y >= map.GetLength())
        return true;

    int block = map.GetData()[y * map.GetWidth() + x];

    return block == Map::Mountain || block == Map::Water;
}

void Entity::Display() const
{
    std::cout << Name << " ";
}


void Entity::TakeDamage(int amount)
{
    m_health -= amount;
    if (m_health < 0)
        m_health = 0;
}