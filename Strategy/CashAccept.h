#pragma once
class CashSuper
{
public:
	CashSuper();
	virtual ~CashSuper();

public:
	virtual double acceptCash(double money) = 0;
};


class CashNormal : public CashSuper
{
public:
	CashNormal();
	~CashNormal();

protected:
	virtual double acceptCash(double money);
};


class CashRebate : public CashSuper
{
public:
	CashRebate(double rebate);
	~CashRebate();

protected:
	virtual double acceptCash(double money);

private:
	double			m_dRebate;
};


class CashReturn : public CashSuper
{
public:
	CashReturn(double money_cond, double money_ret);
	~CashReturn();

protected:
	virtual double acceptCash(double money);

private:
	double			m_dCondition;
	double			m_dReturn;
};


class Context
{
public:
	Context(int nType, double d1 = 0, double d2 = 0);
	~Context();

	double acceptCash(double money);
private:
	CashSuper*			m_ptr;
	int					m_nType;
	double				m_dD1;
	double				m_dD2;
};