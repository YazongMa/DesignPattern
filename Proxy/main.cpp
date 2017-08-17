#include "GiveGift.h"
#include "AutoPtr.h"
#include "vld.h"

#include <iostream>
#include <memory>



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
	AutoPtr<Girl> girl(new Girl());
	girl->setName("JiaoJiao");
	std::cout << girl->getName() << std::endl;

	AutoPtr<Girl> girl2(girl);
	std::cout << girl2->getName() <<std::endl;

	AutoPtr<Girl> girl3 = girl2;
	std::cout << girl3->getName() << std::endl;

	AutoPtr<Girl> girl4;
	girl4 = girl3;
	std::cout << girl4->getName() << std::endl;
}

void proxy4()
{
	std::auto_ptr<Girl> girl(new Girl("LALA"));
	std::cout << girl->getName() << std::endl;

	std::shared_ptr<Girl> girl2(new Girl("DuDu"));
	std::cout << girl2->getName() << std::endl;
}

int main()
{
	proxy2();
	proxy3();
	proxy4();

	return 0;
}
