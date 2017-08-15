#pragma once
#include "AbstractFactory.h"
class BananaFactory :
	public AbstractFactory
{
public:
	BananaFactory();
	virtual ~BananaFactory();

public:
	virtual Fruit * createProduct();
};

