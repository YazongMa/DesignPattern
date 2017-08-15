#pragma once
#include "Fruit.h"
class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

public:
	virtual Fruit * createProduct() = 0;
};

