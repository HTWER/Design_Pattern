#ifndef __RUBBERDUCK_H__
#define __RUBBERDUCK_H__

#include "IQuackable.h"

class QuackObservable;

class RubberDuck : public IQuackable
{
private:
	QuackObservable* quackObservable;
public:
	RubberDuck();
	~RubberDuck();
	void quack() override;
	void registerObserver(IObserver* observer) override;
	void removeObserver(IObserver* observer) override;
	void notifyObserver() override;
};

#endif




