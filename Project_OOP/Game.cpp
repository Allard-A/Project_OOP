#include <iostream>
#include <cstdlib>
#include "Map.h"
#include "Player.h"

int main()
{
    Map map(20, 10);
    Player player;
    player.PositionEntity('P', 0, 0);

    while (player.Alive())
    {
        system("cls");
        map.DisplayMap(player);

        player.Mouvement(map); 
    }

    map.Release();
    return 0;
}