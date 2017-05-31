#ifndef _QUACKNOWAY_H__
#define _QUACKNOWAY_H__
#include "QuackBehavior.h"

class QuackNoWay:public QuackBehavior
{
public:
	QuackNoWay();
	~QuackNoWay();

	//实现接口类中的纯虚函数
	void Quack();
};

#endif


