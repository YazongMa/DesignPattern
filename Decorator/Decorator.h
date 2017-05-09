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
		cout << "�����ݿ�ȡ������" << endl;
	}
};


class XML_New : public Component
{
public:
	void getNew()
	{
		cout << "��XMLȡ������" << endl;
	}
};


class Decorator :public Component
{
public:
	Decorator(){}
	Decorator(Component& componentnew)
	{
		m_ptr = &componentnew;
	}
	void getNew()
	{
		if (m_ptr)
		{
			m_ptr->getNew();
		}
	}
	void setComponent(Component& componentnew)
	{
		m_ptr = &componentnew;
	}
private:
	Component*	m_ptr;
};


class Decorator_AddAmount :public Decorator
{
public:
	Decorator_AddAmount(){}
	Decorator_AddAmount(Component& componentnew)
		:Decorator(componentnew)
	{
		//              Decorator::Decorator(&componentnew);
	}

	void AddAmount()
	{
		cout << "���������Ѿ���һ" << endl;
	}

	void getNew()
	{
		AddAmount();
		Decorator::getNew();
	}
};


class Decorator_AddRss :public Decorator
{
public:
	Decorator_AddRss(){}
	Decorator_AddRss(Component& componentnew)
		:Decorator(componentnew)
	{}

	void AddRss()
	{
		cout << "���ű����Ѿ����뵽RSS��" << endl;
	}

	void getNew()
	{
		AddRss();
		Decorator::getNew();
	}
};


class Decorator_AddPhoto: public Decorator
{
public:
	Decorator_AddPhoto(){}
	Decorator_AddPhoto(Component& componentnew)
		:Decorator(componentnew)
	{}

	void AddPhoto()
	{
		cout << "��ͼ������: ͼƬ�Ѿ����뵽RSS��" << endl;
	}

	void getNew()
	{
		AddPhoto();
		Decorator::getNew();
	}
};
