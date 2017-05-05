#pragma once


#include "Strategy.h"

class Context
{
public:
	Context(Strategy* ptr);
	~Context();

	void ContextInterface();

private:
	Strategy*	m_ptr;
};

