#ifndef __DUCKCALL_H__
#define __DUCKCALL_H__

#include "IQuackable.h"

class QuackObservable;

class DuckCall :public IQuackable
{
private:
	QuackObservable* quackObservable;
public:
	DuckCall();
	~DuckCall();
	void quack() override;
	void registerObserver(IObserver* observer) override;
	void removeObserver(IObserver* observer) override;
	void notifyObserver() override;
};

#endif




