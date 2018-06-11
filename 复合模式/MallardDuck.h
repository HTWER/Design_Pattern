#ifndef __MALLARKDUCK_H__
#define __MALLARKDUCK_H__

#include "IQuackable.h"

class QuackObservable;

class MallardDuck :public IQuackable
{
private:
	QuackObservable* quackObservable;
public:
	MallardDuck();
	~MallardDuck();
	void quack() override;
	void registerObserver(IObserver* observer) override;
	void removeObserver(IObserver* observer) override;
	void notifyObserver() override;
};

#endif