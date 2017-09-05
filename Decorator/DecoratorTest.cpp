#include "DecoratorTest.h"
#include <iostream>

ComponentTest::ComponentTest()
{
}

ComponentTest::~ComponentTest()
{
}


ComponentProc::ComponentProc()
{
}

ComponentProc::~ComponentProc()
{
}


void ComponentProc::show()
{
	std::cout << " ComponentA show" << std::endl;
}


DecoratorTest::DecoratorTest(ComponentTest* test)
:
m_ptr(test)
{
}

DecoratorTest::~DecoratorTest()
{
}


void DecoratorTest::show()
{
	if (m_ptr == NULL)
	{
		std::cout << " DecoratorTest show: m_ptr is empty " << std::endl;
		return;
	}
	m_ptr->show();
}



DecoratorA::DecoratorA(ComponentTest* test)
:
DecoratorTest(test)
{
}


DecoratorA::~DecoratorA()
{
}


void DecoratorA::show()
{
	std::cout << " DecoratorA show" << std::endl;
	DecoratorTest::show();
}



DecoratorB::DecoratorB(ComponentTest* test)
:
DecoratorTest(test)
{
}

DecoratorB::~DecoratorB()
{
}


void DecoratorB::show()
{
	std::cout << " DecoratorB show" << std::endl;
	DecoratorTest::show();
}


DecoratorC::DecoratorC(ComponentTest* test)
:
DecoratorTest(test)
{
}

DecoratorC::~DecoratorC()
{
}


void DecoratorC::show()
{
	std::cout << " DecoratorC show" << std::endl;
	DecoratorTest::show();
}