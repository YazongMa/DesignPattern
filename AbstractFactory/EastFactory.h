#pragma once
#include "AbstractFactory.h"
class EastFactory :
	public AbstractFactory
{
public:
	EastFactory();
	virtual ~EastFactory();

	virtual Fruit* createApple();
	virtual Fruit* createBanana();
};

