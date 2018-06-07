#ifndef __QUACKDECORATOR_H__
#define __QUACKDECORATOR_H__

#include "IQuackable.h"

class DuckDecorator : public IQuackable
{
private:
	IQuackable* duck;
	DuckDecorator();
public:
	DuckDecorator(IQuackable* duck);
	~DuckDecorator();
	static int numberOfQuacks;
	static int getQuacks();
	void quack() override;
};


#endif