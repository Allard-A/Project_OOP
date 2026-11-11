#include "Warrior.h"
#include "Entity.h"
//Alexis

Warrior::Warrior(char name, int x, int y)
{
	PositionEntity(name, x, y);
	m_health = 5;
}
