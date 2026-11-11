#include "ZombieSwimmer.h"
bool Collision(const Map& map, int x, int y) override {
    if (x < 0 || x >= map.GetWidth() || y < 0 || y >= map.GetLength())
        return true;

    int block = map.GetData()[y * map.GetWidth() + x];

    return block == Map::Mountain;
}