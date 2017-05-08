#include "CashAccept.h"
#include <iostream>

CashSuper::CashSuper()
{
}


CashSuper::~CashSuper()
{
}


CashNormal::CashNormal()
{
}


CashNormal::~CashNormal()
{
}


double CashNormal::acceptCash(double money)
{
	return money;
}


CashRebate::CashRebate(double rebate)
:
m_dRebate(rebate)
{
}


CashRebate::~CashRebate()
{
}


double CashRebate::acceptCash(double money)
{
	if (m_dRebate > 1 || m_dRebate < 0)
		m_dRebate = 0;
	return money * m_dRebate;
}


CashReturn::CashReturn(double money_cond, double money_ret)
:
m_dCondition(money_cond),
m_dReturn(money_ret)
{
}


CashReturn::~CashReturn()
{
}


double CashReturn::acceptCash(double money)
{
	if (money < m_dCondition)
		return money;
	return money - (money / m_dCondition) * m_dReturn;
}


Context::Context(int nType, double d1, double d2)
:
m_ptr(NULL),
m_nType(nType),
m_dD1(d1),
m_dD2(d2)
{
}


Context::~Context()
{
	if (m_ptr)
	{
		delete m_ptr;
		m_ptr = NULL;
	}
}


double Context::acceptCash(double money)
{
	if (m_nType == 1)
		m_ptr = new CashNormal();
	else if (m_nType == 2)
		m_ptr = new CashRebate(m_dD1);
	else if (m_nType == 3)
		m_ptr = new CashReturn(m_dD1, m_dD2);

	return m_ptr->acceptCash(money);
}