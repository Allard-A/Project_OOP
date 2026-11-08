#include "Map.h"
#include "Entity.h"

int main()
{
    Map map(20, 10);
    Entity entity;
    entity.PositionEntity('P', 10, 0);
    map.DisplayMap(entity);
    map.Release();
   
}