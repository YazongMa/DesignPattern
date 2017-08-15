#include "AppleFactory.h"
#include "Apple.h"

AppleFactory::AppleFactory()
{
}


AppleFactory::~AppleFactory()
{
}


Fruit * AppleFactory::createProduct()
{
	return new Apple();
}