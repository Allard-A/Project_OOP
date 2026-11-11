#include <iostream>
#include <conio.h>
#include "Map.h"
#include "Player.h"

int main()
{
    Map map(20, 10);
    Player player;

    player.PositionEntity('P', 0, 0);

    while (true)
    {
        system("cls");

        map.DisplayMap(player);

        player.OnUpdate(map);

        if (!player.Alive())
            break;
    }

    return 0;
}