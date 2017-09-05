/*************************************************************************
> File Name: main.cpp
> Author: YazongMa
> Mail: mayazong@126.com
> Created Time: 2017Äê5ÔÂ9ÈÕ 17:00:59
************************************************************************/

#include <iostream>
#include <string>
#include <stdio.h>
#include "vld.h"
#include "Decorator.h"
#include "DecoratorTest.h"


void Decorator1()
{
	XML_New xml;

	/*
	Decorator_AddAmount amount(xml);
	Decorator_AddPhoto photo(amount);
	Decorator_AddRss rss(photo);
	Decorator_AddRss rss2(rss);
	Decorator_AddRss rss3(rss2);
	rss3.getNew();
	*/

	Decorator_AddAmount amount;
	amount.setComponent(xml);

	Decorator_AddRss rss;
	rss.setComponent(amount);

	Decorator_AddPhoto photo;
	photo.setComponent(rss);

	Decorator_AddAmount amount2;
	amount2.setComponent(photo);

	Decorator_AddAmount amount3;
	amount3.setComponent(amount2);

	amount3.getNew();
}



void Decorator2()
{
	ComponentProc a;


	DecoratorA da(&a);
	DecoratorA da2(&da);
	da2.show();
}

int main()
{
	//Decorator1();
	Decorator2();

    return 0;
}