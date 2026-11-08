#pragma once
#include "Entity.h"
class Map
{
public:
    enum Obstacle {
        Ground,
        Mountain,
        Water,
        Exit
    };

private:
    int* Data;
    const int        Width = 20;
    const int        Length = 10;


public:
    Map(int width, int length);

    void DisplayMap(const Entity& entity);
    int GetWidth() { return Width; }
    int GetLength() { return Length; }
    void Release() { delete[] Data; }
    void SetCell(int x, int y, int type);

};