#pragma once
#include "AbstractFactory.h"
class AppleFactory :
	public AbstractFactory
{
public:
	AppleFactory();
	virtual ~AppleFactory();

public:
	virtual Fruit * createProduct();
};

