#pragma once
class Entity
{
protected:
	virtual void Movement();
private:
	int m_health = 100;
protected:
	virtual int& Health() { return m_health; };

	virtual int Attack( int attack = 1);


	virtual void Collision();

	virtual void Display();

	bool Alive();

	virtual void ApplyDamage();


	virtual void OnUpdate();

};

