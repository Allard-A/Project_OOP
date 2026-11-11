#include "Map.h"
#include "Entity.h"
#include "Game.h"

int main()
{
    Game* game = Game::GetInstance();
    game->Run();
    return 0;
}