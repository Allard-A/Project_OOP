#include "Player.h"
#include <conio.h>
#include <cstdlib>




void Player::PositionEntity(char name, int x, int y)
{
    Entity::PositionEntity('P', 1, 3);
}
void Player::MovePlayer()
{
    Player p;
    p.PositionEntity('P', 1, 3);

    system("cls");
    char touche = _getch();
    int pos_x = 0;
    int pos_y = 0;

    //Déterminer la nouvelle position
    if (touche == 'z') {
        pos_y--;
    }
    else if (touche == 's') {
        pos_y++;
    }
    else if (touche == 'q') {
        pos_x--;
    }
    else if (touche == 'd') {
        pos_x++;
    }
    else {
        return;
    }

}