#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Component
{
public:
	Component();
	virtual ~Component();

public:
	virtual void getNew() = 0;
};


class DB_New :public Component
{
public:
	void getNew()
	{
		cout << "从数据库取得数据" << endl;
	}
};


class XML_New : public Component
{
public:
	void getNew()
	{
		cout << "从XML取得数据" << endl;
	}
};


class Decorator_New :public Component
{
public:
	Decorator_New(Component& componentnew)
	{
		_Component_New = &componentnew;
	}
	void getNew()
	{
		_Component_New->getNew();
	}
private:
	Component* _Component_New;
};


class ConcreteDecorator_AddAmount :public Decorator_New
{
public:
	ConcreteDecorator_AddAmount(Component& componentnew)
		:Decorator_New(componentnew)
	{
		//              Decorator_New::Decorator_New(&componentnew);
	}

	void AddAmount()
	{
		cout << "新闻人气已经加一" << endl;
	}

	void getNew()
	{
		AddAmount();
		Decorator_New::getNew();
	}
};


class ConcreteDecorator_AddRss :public Decorator_New
{
public:
	ConcreteDecorator_AddRss(Component& componentnew)
		:Decorator_New(componentnew)
	{}

	void AddRss()
	{
		cout << "新闻标题已经加入到RSS中" << endl;
	}

	void getNew()
	{
		AddRss();
		Decorator_New::getNew();
	}
};


class ConcreteDecorator_AddPhoto: public Decorator_New
{
public:
	ConcreteDecorator_AddPhoto(Component& componentnew)
		:Decorator_New(componentnew)
	{}

	void AddCss()
	{
		cout << "有图有真相: 图片已经加入到RSS中" << endl;
	}

	void getNew()
	{
		AddCss();
		Decorator_New::getNew();
	}
};
