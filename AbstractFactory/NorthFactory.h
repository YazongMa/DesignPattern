#pragma once
#include "AbstractFactory.h"
class NorthFactory :
	public AbstractFactory
{
public:
	NorthFactory();
	virtual ~NorthFactory();

	virtual Fruit* createApple();
	virtual Fruit* createBanana();
};

