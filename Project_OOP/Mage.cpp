#include "Entity.h"
#include "Enemy.h"
#include "Mage.h"
#include "Zombie.h"
//Alexis


Mage::Mage(char name, int x, int y)
{
	PositionEntity(name, x, y);
}

void Mage::DistantAttack()
{
	Enemy enemy; 
	int enemyX = enemy.GetX();
	int enemyY = enemy.GetY();
	if ((enemyX == GetX() + 1 || enemyY == GetY() + 1) ||
		(enemyY == GetY() + 1 || (enemyY == GetY() - 1)))
		enemy.TakeDamage(GetAttack());
}

