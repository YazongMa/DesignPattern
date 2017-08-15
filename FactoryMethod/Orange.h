#pragma once
#include "Fruit.h"
class Orange :
	public Fruit
{
public:
	Orange();
	virtual ~Orange();

public:
	virtual void sayName();
};

