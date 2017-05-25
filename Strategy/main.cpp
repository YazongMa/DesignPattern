/*************************************************************************
> File Name: main.cpp
> Author: YazongMa
> Mail: mayazong@126.com
> Created Time: 2017Äê5ÔÂ8ÈÕ 10:03:26
************************************************************************/

#include <iostream>
#include <string>
#include "CashAccept.h"
#include "vld.h"


int main()
{
	while (1)
	{
		int strategy;
		double money, d1, d2;
		std::cout << "please input money: ";
		std::cin >> money;

		std::cout << "please input strategy: ";
		std::cin >> strategy;

		if (strategy == 1)
		{
			Context ctx(1);
			std::cout << ctx.acceptCash(money) << std::endl;
		}

		else if (strategy == 2)
		{
			std::cout << "please input rebate: ";
			std::cin >> d1;

			Context ctx(2, d1);
			std::cout << ctx.acceptCash(money) << std::endl;
		}
		else if (strategy == 3)
		{
			std::cout << "please input return condition: ";
			std::cin >> d1;
			std::cout << "please input return money: ";
			std::cin >> d2;
			Context ctx(3, d1, d2);
			std::cout << ctx.acceptCash(money) << std::endl;
		}

		std::string exit;
		std::cout << "input 'Y' to exit" << std::endl;
		std::cin >> exit;

		if (exit.compare("Y") == 0)
			break;
	}
	return 0;
}