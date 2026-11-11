#pragma once

class Map;   // déclaration anticipée (pas de #include "Map.h" ici)

class Entity
{
private:
    char Name = 'H';
    int posX = 0;
    int posY = 0;

protected:
    int m_health = 1;
    int attack = 1;

public:

    virtual void PositionEntity(char name, int x, int y);
    int  GetX() const { return posX; }
    int  GetY() const { return posY; }
    char GetName() const { return Name; }


    void MoveLeft();
    void MoveRight();
    void MoveUp();
    void MoveDown();

    virtual bool Collision(const Map& map, int x, int y);
    virtual void Display() const;

    int  GetHealth() const { return m_health; }
    int  GetAttack() const { return attack; }
    void SetHealth(int h) { m_health = h; }
    bool Alive() const { return m_health > 0; }
    virtual void TakeDamage(int amount);

protected:
};