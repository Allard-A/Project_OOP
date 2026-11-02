#pragma once
class Entity
{
	virtual void movement();

	virtual int health();

	virtual void attack();

	virtual void collision();

	virtual void display();

	virtual void alive();

	virtual void applyDamage(int);
};

