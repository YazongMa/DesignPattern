#include "AbstractFactory.h"
#include "AppleFactory.h"
#include "BananaFactory.h"
#include "OrangeFactory.h"
#include <iostream>


void FactoryMethod()
{
	//banana factory create banana
	AbstractFactory* factory = new BananaFactory();
	Fruit* fruit = factory->createProduct();
	fruit->sayName();

	delete fruit;
	delete factory;


	//apple factory create apple
	factory = new AppleFactory();
	fruit = factory->createProduct();
	fruit->sayName();

	delete fruit;
	delete factory;


	//orange factory create orange
	factory = new OrangeFactory();
	fruit = factory->createProduct();
	fruit->sayName();

	delete fruit;
	delete factory;


	fruit = NULL;
	factory = NULL;
}


int main()
{
	FactoryMethod();
	return 0;
}