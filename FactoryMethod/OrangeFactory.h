#pragma once
#include "AbstractFactory.h"
class OrangeFactory :
	public AbstractFactory
{
public:
	OrangeFactory();
	virtual ~OrangeFactory();

public:
	virtual Fruit * createProduct();
};

