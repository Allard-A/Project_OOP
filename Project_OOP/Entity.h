#pragma once
class Entity
{
protected:
	virtual void Movement();
	virtual int& Health() { return m_health; };

	int attack = 1;


	virtual void Collision();

	virtual void Display();

	bool Alive();

	virtual void ApplyDamage();


	virtual void OnUpdate();

private:
	int m_health = 1;


};

