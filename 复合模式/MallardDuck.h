#ifndef __MALLARKDUCK_H__
#define __MALLARKDUCK_H__

#include "IQuackable.h"

class MallardDuck :public IQuackable
{
public:
	void quack() override;
};

#endif