#ifndef __QUACKABLE_H__
#define __QUACKABLE_H__

#include "IObservable.h"

class IQuackable:public IObservable		//使得IQuackable可以被观察
{
public:
	virtual ~IQuackable(){};
	virtual void quack() = 0;
};


#endif