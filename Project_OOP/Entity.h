#pragma once
class Entity
{
	virtual void Movement();

	virtual int Health();

	virtual void Attack();

	virtual void Collision();

	virtual void Display();

	virtual void Alive();

	virtual void ApplyDamage(int);

	virtual void OnUpdate();
};

