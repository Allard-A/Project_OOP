#include "Game.h"

int main()
{
    Game* game = Game::GameInstance();
    game->Run();
    return 0;
}