#ifndef __REDHEADDUCK_H__
#define __REDHEADDUCK_H__

#include "IQuackable.h"

class RedheadDuck :public IQuackable
{
public:
	void quack() override;
};

#endif