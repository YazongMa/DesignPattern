#pragma once
#include "Fruit.h"
class Apple :
	public Fruit
{
public:
	Apple();
	virtual ~Apple();

	virtual void sayName() = 0;
};

