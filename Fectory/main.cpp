/*************************************************************************
> File Name: main.cpp
> Author: YazongMa
> Mail: mayazong@126.com
> Created Time: 2017Äê05ÔÂ04ÈÕ 18:26:57
************************************************************************/

#include "Operation.h"
#include "vld.h"


int main()
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

	return 0;
}