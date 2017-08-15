#include "SourthFactory.h"
#include "SourthApple.h"
#include "SourthBanana.h"

SourthFactory::SourthFactory()
{
}


SourthFactory::~SourthFactory()
{
}



Fruit* SourthFactory::createApple()
{
	return new SourthApple();
}


Fruit* SourthFactory::createBanana()
{
	return new SourthBanana();
}