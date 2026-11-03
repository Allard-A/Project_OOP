#pragma once
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
    int*       Data;
    const int        Width =20;
    const int        Length =10;

public:
    Map(int width, int length);

    void DisplayMap();
    int GetWidth() { return Width; }
    int GetLength() { return Length; }
	void release() { delete[] Data; }
    void SetCell(int x, int y, int type);

};