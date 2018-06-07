#ifndef __DUCKCALL_H__
#define __DUCKCALL_H__

#include "IQuackable.h"

class DuckCall :public IQuackable
{
public:
	void quack() override;
};

#endif




