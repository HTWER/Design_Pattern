#ifndef __DUCKSIMULATOR_H__
#define __DUCKSIMULATOR_H__

class IQuackable;
class AbstractDuckFactory;

class DuckSimulator
{
public:
	void simulate(AbstractDuckFactory* duckFactory);
	void simulate(IQuackable* duck);
};

#endif




