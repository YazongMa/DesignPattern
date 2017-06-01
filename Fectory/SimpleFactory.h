#pragma once

#include "Operation.h"
class Factory
{
public:
	Factory();
	virtual ~Factory();

	virtual Operation* CreateOper() = 0;
};


class AddFactory : public Factory
{
public:
	AddFactory(){};
	virtual ~AddFactory(){};

	virtual Operation* CreateOper();
};


class SubFactory : public Factory
{
public:
	SubFactory(){};
	virtual ~SubFactory(){};

	virtual Operation* CreateOper();
};


class MulFactory : public Factory
{
public:
	MulFactory(){};
	virtual ~MulFactory(){};

	virtual Operation* CreateOper();
};


class DivFactory : public Factory
{
public:
	DivFactory(){};
	virtual ~DivFactory(){};

	virtual Operation* CreateOper();
};

