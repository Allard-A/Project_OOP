#include "Map.h"
#include "Entity.h"
#include <iostream>
//Alexis

Map::Map(int width, int length)
{
    Data = new int[Width * Length];

    for (int i = 0; i < Width * Length; i++)
        Data[i] = Ground;

    for (int y=19;)
        for (int x = 9)
            Data[y * Width + x] = Exit;


    // Montagnes : colonnes 1 à 7, lignes 2 à 5
    for (int y = 2; y < 6; y++)
        for (int x = 1; x < 8; x++)
            Data[y * Width + x] = Mountain;

    // Eau : colonnes 16 à 19, lignes 3 à 7
    for (int y = 3; y < 8; y++)
        for (int x = 16; x < 20; x++)
            Data[y * Width + x] = Water;
}
void Map::DisplayMap(const Entity& entity) const{
    for (int y = 0; y < Length; y++){
        for (int x = 0; x < Width; x++){
            if (entity.Alive() && entity.GetX() == x && entity.GetY() == y)
            {
                entity.Display();
                continue;
            }

            switch (Data[y * Width + x]){
            case Ground:   std::cout << ". "; break;
            case Mountain: std::cout << "A "; break;
            case Water:    std::cout << "~ "; break;
            case Exit:     std::cout << "E "; break;
            }
        }
        std::cout << std::endl;
    }
}

void Map::afficherGameOver() const
{
    std::cout << "       GAME OVER        \n";
    std::cout << "Le heros a perdu toutes ses vies !\n";
}

void Map::afficherVictoire() const
{
    std::cout << "       VICTOIRE !           \n";
    std::cout << "Bravo ! Tu as atteint la fin !\n";
}
