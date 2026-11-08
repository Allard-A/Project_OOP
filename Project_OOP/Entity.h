#pragma once
class Entity

{

private:

    char Name;
    int m_health = 1;
    int posX;
    int posY;

public:
    virtual void PositionEntity(char name, int x, int y);

    int GetX() const { return posX; };
    int GetY() const { return posY; };
    const char GetName() const { return Name; };
    virtual ~Entity() = default;

protected:

    virtual int& Health() { return m_health; };

    void MoveLeft();

	void MoveRight();

	void MoveUp();
 
	void MoveDown();

    int attack = 1;


    virtual void Collision();

    virtual void Display();

    bool Alive();

    virtual void ApplyDamage();


    virtual void OnUpdate();
};