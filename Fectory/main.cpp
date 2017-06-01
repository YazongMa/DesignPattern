/*************************************************************************
> File Name: main.cpp
> Author: YazongMa
> Mail: mayazong@126.com
> Created Time: 2017��05��04�� 18:26:57
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
	//�򵥹���ģʽ
	SimpleFactory();

	//��������ģʽ
	FactoryFunctory();

	//���󹤳�ģʽ
	AbstractFactory();

	return 0;
}