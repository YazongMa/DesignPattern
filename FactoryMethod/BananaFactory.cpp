#include "BananaFactory.h"
#include "Banana.h"

BananaFactory::BananaFactory()
{
}


BananaFactory::~BananaFactory()
{
}

Fruit * BananaFactory::createProduct()
{
	return new Banana();
}
