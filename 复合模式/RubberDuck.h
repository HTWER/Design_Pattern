#ifndef __RUBBERDUCK_H__
#define __RUBBERDUCK_H__

#include "IQuackable.h"

class RubberDuck : public IQuackable
{
public:
	void quack() override;
};

#endif




