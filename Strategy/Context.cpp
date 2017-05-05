#include "Context.h"


Context::Context(Strategy* ptr)
:
m_ptr(ptr)
{
}


Context::~Context()
{
}


void Context::ContextInterface()
{
	if (m_ptr)
	{
		m_ptr->Interface();
	}
}
