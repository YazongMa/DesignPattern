#include <iostream>
#include "AbstractFactory.h"
#include "SourthFactory.h"
#include "NorthFactory.h"
#include "Fruit.h"
#include "vld.h"

void AbstractFactoryTest()
{
	AbstractFactory* abstractFactory = NULL;
	Fruit* fruit = NULL;

	abstractFactory = new SourthFactory();
	fruit = abstractFactory->createApple();
	fruit->sayName();
	delete fruit;

	fruit = abstractFactory->createBanana();
	fruit->sayName();
	delete fruit;
	delete abstractFactory;


	abstractFactory = new NorthFactory();
	fruit = abstractFactory->createApple();
	fruit->sayName();
	delete fruit;

	fruit = abstractFactory->createBanana();
	fruit->sayName();
	delete fruit;
	delete abstractFactory;




	abstractFactory = NULL;
	fruit = NULL;
}

int main()
{
	AbstractFactoryTest();
}