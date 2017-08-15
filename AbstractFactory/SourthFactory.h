#pragma once
#include "AbstractFactory.h"
class SourthFactory :
	public AbstractFactory
{
public:
	SourthFactory();
	virtual ~SourthFactory();

	virtual Fruit* createApple();
	virtual Fruit* createBanana();
};

