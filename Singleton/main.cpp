#include <iostream>


//¶öººÊ½
class Singleton1
{
public:
	static Singleton1* getInstance()
	{
		return s;
	}

	void say()
	{
		std::cout << "I'm Singleton1" << std::endl;
	}

private:
	static Singleton1* s;
};
Singleton1* Singleton1::s = new Singleton1();



//ÀÁººÊ½
class Singleton2
{
public:
	static Singleton2* getInstance()
	{
		if (s == NULL)
		{
			s = new Singleton2();
		}
		return s;
	}

	void say()
	{
		std::cout << "I'm Singleton2" << std::endl;
	}

private:
	static Singleton2* s;
};
Singleton2* Singleton2::s = NULL;


void SingletonTest()
{
	Singleton1::getInstance()->say();
	Singleton2::getInstance()->say();
}

int main()
{
	SingletonTest();
	return 0;
}