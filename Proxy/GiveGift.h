#pragma once

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Girl
{
public:
	Girl(char* name = "") :mName(name){}
	char* getName()
	{
		return mName;
	}
	void setName(char* name)
	{
		mName = name;
	}
private:
	char* mName;
};


class GiveGift
{
public:
	virtual void GiveDolls() = 0;
	virtual void GiveFlowers() = 0;
	virtual void GiveChocolate() = 0;
};


class Puisuit : public GiveGift
{
public:
	Puisuit(Girl mm) :mGirl(mm){}

	virtual void GiveDolls()
	{
		cout << "��" << mGirl.getName() << "��ߣ�" << endl;
	}

	virtual void GiveFlowers()
	{
		cout << "��" << mGirl.getName() << "�ʻ���" << endl;
	}

	virtual void GiveChocolate()
	{
		cout << "��" << mGirl.getName() << "�ɿ�����" << endl;
	}
private:
	Girl mGirl;

};


class Proxy : public GiveGift
{
public:
	Proxy(Girl mm)
	{
		mPuisuit = new Puisuit(mm);
	}
	~Proxy()
	{
		delete mPuisuit;
	}

	virtual void GiveDolls()
	{
		mPuisuit->GiveDolls();
	}

	virtual void GiveFlowers()
	{
		mPuisuit->GiveFlowers();
	}

	virtual void GiveChocolate()
	{
		mPuisuit->GiveChocolate();
	}
private:
	Puisuit* mPuisuit;

};