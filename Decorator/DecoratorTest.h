#pragma once


class ComponentTest
{
public:
	ComponentTest();
	~ComponentTest();

	virtual void show() = 0;
};



class ComponentProc : public ComponentTest
{
public:
	ComponentProc();
	~ComponentProc();

	virtual void show();
};


class DecoratorTest : public ComponentTest
{
public:
	explicit DecoratorTest(ComponentTest* test);
	~DecoratorTest();

	virtual void show();


private:
	ComponentTest*		m_ptr;
};



class DecoratorA : public DecoratorTest
{
public:
	explicit DecoratorA(ComponentTest* test);
	~DecoratorA();

	virtual void show();
};


class DecoratorB : public DecoratorTest
{
public:
	explicit DecoratorB(ComponentTest* test);
	~DecoratorB();

	virtual void show();
};


class DecoratorC : public DecoratorTest
{
public:
	explicit DecoratorC(ComponentTest* test);
	~DecoratorC();

	virtual void show();
};