#pragma once
class Fruit
{
public:
	Fruit();
	virtual ~Fruit();

public:
	virtual void sayName() = 0;
};

