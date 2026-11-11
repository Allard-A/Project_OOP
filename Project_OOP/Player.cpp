#include "Player.h"
#include "Map.h"
#include "Entity.h"
#include <conio.h>
#include <iostream>
//Alexis

Player::Player(char name, int x, int y) {
	PositionEntity(name, x, y);
}

void Player::Mouvement(const Map& map) {
	char touche = _getch();
	if (touche == 'z')
		MoveUp();
	else if (touche == 's')
		MoveDown();
	else if (touche == 'q')
		MoveLeft();
	else if (touche == 'd')
		MoveRight();
}
