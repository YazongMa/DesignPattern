#pragma once
class Fruit
{
public:
	Fruit();
	virtual ~Fruit();

	virtual void sayName() = 0;
};

