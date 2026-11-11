#include "Entity.h"
#include "Game.h"
#include "HeadlessZombie.h"
#include "Map.h"
#include "Player.h"
#include "Zombie.h"
#include <cstdlib>
#include <iostream>

Map map1(20, 10);
Zombie zombie1('Z', 5, 5);
HeadlessZombie headlessZombie1('H', 10, 10);
Player player1('P', 0, 0);

void Game::GameInstance()
{
	bool gameRunning = true;
	while (gameRunning == true)
	{
		map1.DisplayMap(player1);
		player1.Display();
		zombie1.Display();
		headlessZombie1.Display();

		zombie1.ZombieTargeting(player1.GetX(), player1.GetY());

		if (player1.GetX() == zombie1.GetX() && player1.GetY() == zombie1.GetY()) {
			player1.TakeDamage(1);
		}

	}
}

void Game::Run() {
	GameInstance();
}
