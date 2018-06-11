#ifndef __QUACKABLE_H__
#define __QUACKABLE_H__

#include "IObservable.h"

class IQuackable :public IObservable
{
public:
	virtual ~IQuackable(){};
	virtual void quack() = 0;
};


#endif