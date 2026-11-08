#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
    void PositionEntity(char name, int x, int y) override;
    void StartPlayer();
    void MovePlayer();
    void indentityPlayer();
    void setName(char);
};