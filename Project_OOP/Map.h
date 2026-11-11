#pragma once
#include "Entity.h"
//Alexis

class Map
{
public:
    enum Obstacle { Ground, 
                    Mountain, 
                    Water, 
                    Exit };
    const int* GetData() const { return Data; }

private:
    int*            Data;
    const int       Width = 20;
    const int       Length = 10;

public:
    Map(int width, int length);

    void DisplayMap(const Entity& entity) const;
    int GetWidth() const { return Width; }
    int GetLength() const { return Length; }
    void Release() { delete[] Data; }
	void DisplayGameOver() const;
	void DisplayVictory() const;
};