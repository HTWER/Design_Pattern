#ifndef __FLYNOWAY_H__
#define __FLYNOWAY_H__
#include "FlyBehavior.h"

class FlyNoWay:public FlyBehavior
{
public:
	FlyNoWay();
	~FlyNoWay();

	//实现接口类的纯虚函数
	void Fly();
};

#endif


