#include "Vehicle.h"
#include "GiveGift.h"
#include "AutoPtr.h"
#include "vld.h"

void proxy1()
{
	Car c;
	Bike b;

	VehicleSurrogate vs1(c);
	std::cout << vs1.getName() << std::endl;

	VehicleSurrogate vs2(b);
	std::cout << vs2.getName() << std::endl;
}


void proxy2()
{
	Girl mm("Dilraba");
	Proxy pro(mm);
	pro.GiveChocolate();
	pro.GiveDolls();
	pro.GiveFlowers();
}


void proxy3()
{
	AutoPtr<Girl> girl;
	girl->setName("JiaoJiao");
	girl->getName();

	AutoPtr<Girl> girl2(girl);
	std::cout<<girl2->getName()<<std::endl;
}

int main()
{
	proxy1();
	proxy2();
	proxy3();

	return 0;
}
