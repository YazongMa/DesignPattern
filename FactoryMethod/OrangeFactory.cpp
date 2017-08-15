#include "OrangeFactory.h"
#include "Orange.h"

OrangeFactory::OrangeFactory()
{
}


OrangeFactory::~OrangeFactory()
{
}

Fruit * OrangeFactory::createProduct()
{
	return new Orange();
}
