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
    XML_New xml;

    /*
    Decorator_AddAmount amount(xml);
    Decorator_AddPhoto photo(amount);
    Decorator_AddRss rss(photo);
    rss.getNew();
    */

    Decorator_AddAmount amount;
    amount.setComponent(xml);

    Decorator_AddPhoto photo;
    photo.setComponent(amount);

    Decorator_AddRss rss;
    rss.setComponent(photo);
    rss.getNew();

    return 0;
}