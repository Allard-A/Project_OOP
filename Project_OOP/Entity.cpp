#include "Entity.h"
#include<iostream>
#include "Map.h"
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

	Entity::Health() -= Entity::Attack();
}

void Entity::OnUpdate()
{

}
