#pragma once
#include "Fruit.h"
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual Fruit* createApple() = 0;
	virtual Fruit* createBanana() = 0;
};

