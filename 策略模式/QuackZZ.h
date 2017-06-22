#ifndef __QUACK_H__
#define __QUACK_H__
#include "QuackBehavior.h"

class QuackZZ:public QuackBehavior
{
public:
	QuackZZ();
	~QuackZZ();

	//实现接口类中的虚函数
	void Quack();
};

#endif


