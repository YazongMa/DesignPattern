#pragma once
class Strategy
{
public:
	Strategy();
	virtual ~Strategy();

	virtual void Interface() = 0;
};


class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();

	virtual void Interface()
	{

	}
};



class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();

	virtual void Interface()
	{

	}
};



class ConcreteStrategyC : public Strategy
{
public:
	ConcreteStrategyC();
	virtual ~ConcreteStrategyC();

	virtual void Interface()
	{

	}
};