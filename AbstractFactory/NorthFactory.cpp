#include "NorthFactory.h"
#include "NorthApple.h"
#include "NorthBanana.h"

NorthFactory::NorthFactory()
{
}


NorthFactory::~NorthFactory()
{
}


Fruit* NorthFactory::createApple()
{
	return new NorthApple();
}


Fruit* NorthFactory::createBanana()
{
	return new NorthBanana();
}