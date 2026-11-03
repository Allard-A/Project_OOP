#include "Map.h"
#include <iostream>



Map::Map(int width, int length)
{
    Data = new int[width * length];

    // Tout mettre en Ground
    for (int i = 0; i < width * length; i++)
    {
        Data[i] = Ground;
    }

    // Placer les montagnes
    for (int x = 2; x < 6; x++)
    {
        for (int y = 1; y < 8; y++)
        {
            Data[x * width + y] = Mountain;
		}
    }

    // Placer l'eau
    for (int x = 3; x < 8; x++)
    {
        for (int y = 16; y < 20; y++)
        {
            Data[x * width + y] = Water;
        }
    }
}

void Map::DisplayMap(){
    for (int i = 0; i < GetLength(); i++)
    {
        for (int j = 0; j < GetWidth(); j++)
        {
            int index = i * GetWidth() + j;
            switch (Data[index])
            {
            case Ground:
                std::cout << ". ";
                break;
            case Mountain:
                std::cout << "A ";
                break;
            case Water:
                std::cout << "~ ";
                break;
            case Exit:
                std::cout << "E ";
                break;
            }
        }
        std::cout << std::endl;
    }
}

