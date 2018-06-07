#ifndef __DECORATINGDUCKFACTORY_H__
#define __DECORATINGDUCKFACTORY_H__

#include "AbstractDuckFactory.h"

class DecoratingDuckFactory : public AbstractDuckFactory
{
public:
	IQuackable* createMallardDuck() override;
	IQuackable* createRedheadDuck() override;
	IQuackable* createDuckCall() override;
	IQuackable* createRubberDuck() override;
};


#endif
