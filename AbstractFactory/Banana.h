#pragma once
#include "Fruit.h"
class Banana :
	public Fruit
{
public:
	Banana();
	virtual ~Banana();

	virtual void sayName() = 0;
};

