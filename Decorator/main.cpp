/*************************************************************************
> File Name: main.cpp
> Author: YazongMa
> Mail: mayazong@126.com
> Created Time: 2017Äê5ÔÂ9ÈÕ 17:00:59
************************************************************************/

#include <iostream>
#include <string>
#include "vld.h"
#include "Decorator.h"


int main()
{
	XML_New db;
	ConcreteDecorator_AddAmount* amount = new ConcreteDecorator_AddAmount(db);
	ConcreteDecorator_AddRss* rss = new ConcreteDecorator_AddRss(*amount);
	ConcreteDecorator_AddPhoto* photo = new ConcreteDecorator_AddPhoto(*rss);

	photo->getNew();

	delete amount;
	delete rss;
	delete photo;

	return 0;
}