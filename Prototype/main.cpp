#include <iostream>


class Prototype
{
public:
	virtual Prototype* clone() = 0;
	virtual void say() = 0;
};


class PrototypeEmp : public Prototype
{
public:
	PrototypeEmp() : m_age(0), m_tag(0){}
	PrototypeEmp(std::string name, int age, char* tag)
	{
		m_name = name;
		m_age = age;

		int len = strlen(tag) + 1;
		m_tag = new char[len];
		memset(m_tag, 0, len);

		memcpy(m_tag, tag, len - 1);
	}
	virtual Prototype* clone()
	{
		PrototypeEmp* emp = new PrototypeEmp();
		*emp = *this;

		int len = strlen(m_tag) + 1;
		emp->m_tag = new char[len];
		memset(emp->m_tag, 0, len);
		memcpy(emp->m_tag, m_tag, len - 1);

		return emp;
	}


	virtual void say()
	{
		std::cout << "m_name: " << m_name.c_str() << '\t';
		std::cout << "m_age: " << m_age << '\t';
		std::cout << "m_tag: " << m_tag << std::endl;
	}



private:
	std::string			m_name;
	int					m_age;
	char*				m_tag;
};


void PrototypeTest()
{
	Prototype* proto = new PrototypeEmp("张飞", 25, "刘备关羽的兄弟");
	proto->say();

	Prototype* proto2 = proto->clone();
	proto2->say();

	delete proto;
	delete proto2;
}


int main()
{
	PrototypeTest();
	return 0;
}