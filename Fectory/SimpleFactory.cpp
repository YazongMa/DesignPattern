#include "SimpleFactory.h"

Factory::Factory()
{
}


Factory::~Factory()
{
}


Operation* AddFactory::CreateOper()
{
	return new OperAdd();
}


Operation* SubFactory::CreateOper()
{
	return new OperSub();
}


Operation* MulFactory::CreateOper()
{
	return new OperMul();
}


Operation* DivFactory::CreateOper()
{
	return new OperDiv();
}