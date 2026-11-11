#include "Zombie.h"
Zombie::Zombie(char name, int x, int y) {
	PositionEntity(name, x, y);
	m_health = 1;
}
void Zombie::ZombieTargeting(int playerX, int playerY)
{
	if (GetX() < playerX) {
		MoveRight();
	}
	else if (GetX() > playerX) {
		MoveLeft();
	}
	else if (GetY() < playerY) {
		MoveDown();
	}
	else if (GetY() > playerY) {
		MoveUp();
	}
}
