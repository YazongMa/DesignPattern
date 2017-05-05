#include "Operation.h"


Operation::Operation()
	:
m_dNumA(0.0f),
m_dNumB(0.0f)
{
}


Operation::~Operation()
{
}


void Operation::SetNumA(double dA)
{
	m_dNumA = dA;
}


void Operation::SetNumB(double dB)
{
	m_dNumB = dB;
}


double OperAdd::GetResult()
{
	return m_dNumA + m_dNumB;
}


double OperSub::GetResult()
{
	return m_dNumA - m_dNumB;
}


double OperMul::GetResult()
{
	return m_dNumA * m_dNumB;
}


double OperDiv::GetResult()
{
	return m_dNumA / m_dNumB;
}