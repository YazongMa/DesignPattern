#include "EastFactory.h"
#include "EastApple.h"
#include "EastBanana.h"


EastFactory::EastFactory()
{
}


EastFactory::~EastFactory()
{
}

Fruit * EastFactory::createApple()
{
	return new EastApple();
}

Fruit * EastFactory::createBanana()
{
	return new EastBanana();
}
