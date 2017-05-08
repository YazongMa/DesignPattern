#pragma once


#include <iostream>
#include <string>

class Operation
{
public:
	Operation();
	virtual ~Operation();

	void SetNumA(double dA);
	void SetNumB(double dB);

	virtual double GetResult() = 0;

protected:
	double		m_dNumA;
	double		m_dNumB;
};



class OperAdd : public Operation
{
public:
	OperAdd(){};
	virtual ~OperAdd(){};

	virtual double GetResult();
};


class OperSub : public Operation
{
public:
	OperSub(){};
	virtual ~OperSub(){};

	virtual double GetResult();
};


class OperMul : public Operation
{
public:
	OperMul(){};
	virtual ~OperMul(){};

	virtual double GetResult();
};


class OperDiv : public Operation
{
public:
	OperDiv(){};
	virtual ~OperDiv(){};

	virtual double GetResult();
};



class OperFactory
{
public:
	OperFactory() : m_ptr(NULL){}
	OperFactory(std::string oper)
	{
		CreateOperation(oper);
	}

	~OperFactory()
	{ 
		if (m_ptr)
		{ 
			delete m_ptr; 
			m_ptr = NULL; 
		} 
	}


	Operation* CreateOperation(std::string oper)
	{
		switch (oper[0])
		{
		case '+':
			m_ptr = new OperAdd();
			break;

		case '-':
			m_ptr = new OperSub();
			break;

		case '*':
			m_ptr = new OperMul();
			break;

		case '/':
			m_ptr = new OperDiv();
			break;
		}

		return m_ptr;
	}

	double Calculation(double dA, double dB)
	{
		m_ptr->SetNumA(dA);
		m_ptr->SetNumB(dB);


		return m_ptr->GetResult();
	}


private:
	Operation*		m_ptr;
};