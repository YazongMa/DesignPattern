#include <iostream>
#include <string>
#include <vector>
#include "vld.h"

using namespace std;

#if 0
class Vehicle
{
public:

	Vehicle(){}
	virtual string getName() = 0;
	virtual Vehicle* copy() const = 0;
	virtual ~Vehicle(){}
private:


};

class Car :public Vehicle
{
public:
	Car()
	{
		std::cout << "Car Constructor" << std::endl;
	}
	virtual string getName() { return "car"; }
	virtual Vehicle* copy() const { return new Car; }
	virtual ~Car()
	{
		std::cout << "Car Destructor" << std::endl;
	}


};

class Bike : public Vehicle
{
public:
	Bike(){}
	virtual string getName(){ return "bike"; }
	virtual Vehicle* copy()const { return new Bike; }
	virtual ~Bike(){}
};

class VehicleSurrogate
{
public:
	VehicleSurrogate() :p(0){}
	VehicleSurrogate(const Vehicle& v) :p(v.copy()){}
	VehicleSurrogate(const  VehicleSurrogate &vs) :p(vs.p ? vs.p->copy() : 0){}
	VehicleSurrogate & operator=(const VehicleSurrogate &vs);
	string getName(){ return p->getName(); }
	~VehicleSurrogate(){ delete p; }
private:
	Vehicle *p;
};

VehicleSurrogate & VehicleSurrogate::operator=(const VehicleSurrogate&vs)
{
	if (this != &vs) //在删除p之前一定得记得判断vs和this是不是同一个,否则会有问题
	{
		delete p;
		p = vs.p->copy();
	}
	return *this;
}


int main()
{
	Car c;
	Bike b;

	VehicleSurrogate vs1(c);
	std::cout << vs1.getName() << std::endl;

	VehicleSurrogate vs2(b);
	std::cout << vs2.getName() << std::endl;

	return 0;

}



#else

class Girl{
public:
	Girl(char* name = "") :mName(name){}
	char* getName()
	{
		return mName;
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
		cout << "送" << mGirl.getName() << "玩具！" << endl;
	}

	virtual void GiveFlowers()
	{
		cout << "送" << mGirl.getName() << "鲜花！" << endl;
	}

	virtual void GiveChocolate()
	{
		cout << "送" << mGirl.getName() << "巧克力！" << endl;
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


int main()
{
	Girl mm("宝宝");
	Proxy pro(mm);
	pro.GiveChocolate();
	pro.GiveDolls();
	pro.GiveFlowers();

	return 0;
}
#endif
