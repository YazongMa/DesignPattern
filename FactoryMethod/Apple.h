#pragma once
#include "Fruit.h"
class Apple :
	public Fruit
{
public:
	Apple();
	virtual ~Apple();

public:
	virtual void sayName();
};

