#ifndef __QUACKGG_H__
#define __QUACKGG_H__
#include "QuackBehavior.h"

class QuackGG:public QuackBehavior
{
public:
	QuackGG();
	~QuackGG();

	//实现接口类中的纯虚函数
	void Quack();
};


#endif

