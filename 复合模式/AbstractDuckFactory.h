#ifndef __ABSTRACTDUCKFACTORY_H__
#define __ABSTRACTDUCKFACTORY_H__

class IQuackable;

class AbstractDuckFactory
{
public:
	virtual ~AbstractDuckFactory(){};
	virtual IQuackable* createMallardDuck()=0;
	virtual IQuackable* createRedheadDuck()=0;
	virtual IQuackable* createDuckCall() = 0;
	virtual IQuackable* createRubberDuck() = 0;
};


#endif
