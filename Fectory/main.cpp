/*************************************************************************
> File Name: main.cpp
> Author: YazongMa
> Mail: mayazong@126.com
> Created Time: 2017年05月04日 18:26:57
************************************************************************/

#include "Operation.h"
#include "SimpleFactory.h"
#include "vld.h"

void SimpleFactory()
{
	std::string oper;
	double d1, d2;

	std::cout << "input num1: ";
	std::cin >> d1;

	std::cout << "input operator: ";
	std::cin >> oper;


	std::cout << "input num2: ";
	std::cin >> d2;

	OperFactory op;
	Operation* opt = op.CreateOperation(oper);
	opt->SetNumA(d1);
	opt->SetNumB(d2);
	std::cout << opt->GetResult() << std::endl;
}


void FactoryFunctory()
{
	std::string oper;
	double d1, d2;

	std::cout << "input num1: ";
	std::cin >> d1;

	std::cout << "input operator: ";
	std::cin >> oper;


	std::cout << "input num2: ";
	std::cin >> d2;

	Factory* pFactory = new AddFactory();
	Operation* opt = pFactory->CreateOper();
	opt->SetNumA(d1);
	opt->SetNumB(d2);
	std::cout << opt->GetResult() << std::endl;

	delete pFactory;
	delete opt;
}


void AbstractFactory()
{
}


int main()
{
	//简单工厂模式
	SimpleFactory();

	//工厂方法模式
	FactoryFunctory();

	//抽象工厂模式
	AbstractFactory();

	return 0;
}