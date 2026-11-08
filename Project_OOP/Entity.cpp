#include "Entity.h"
#include<iostream>
#include "Map.h"
#include "Player.h"


void Entity::PositionEntity(char name, int x, int y)
{
    Name = name;
    posX = x;
    posY = y;
}
void Entity::Movement()
{

}



void Entity::Collision()
{

}

void Entity::Display()
{


}

bool Entity::Alive() {
    return Entity::Health() > 0;
}

void Entity::ApplyDamage() {

    Entity::Health() -= Entity::attack;
}

void Entity::OnUpdate()
{

}