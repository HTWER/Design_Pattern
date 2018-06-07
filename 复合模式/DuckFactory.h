#ifndef __DUCKFACTORY_H__
#define __DUCKFACTORY_H__

#include "AbstractDuckFactory.h"

class DuckFactory : public AbstractDuckFactory
{
public:
	IQuackable* createMallardDuck() override;
	IQuackable* createRedheadDuck() override;
	IQuackable* createDuckCall() override;
	IQuackable* createRubberDuck() override;
};

#endif

