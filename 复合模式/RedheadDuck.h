#ifndef __REDHEADDUCK_H__
#define __REDHEADDUCK_H__

#include "IQuackable.h"

class QuackObservable;

class RedheadDuck :public IQuackable
{
private:
	QuackObservable* quackObservable;
public:
	RedheadDuck();
	~RedheadDuck();
	void quack() override;
	void registerObserver(IObserver* observer) override;
	void removeObserver(IObserver* observer) override;
	void notifyObserver() override;
};

#endif