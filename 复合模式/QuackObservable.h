#ifndef __QUACKOBSERVABLE_H__
#define __QUACKOBSERVABLE_H__

#include "IObservable.h"

class IObserver;

class QuackObservable :public IObservable
{
private:
	IObservable* duck;
public:
	QuackObservable(IObservable* duck);
	void notifyObserver() override;
};

#endif