#ifndef __FLYWITHWINGS_H__
#define __FLYWITHWINGS_H__

//接口类的具体类

#include "FlyBehavior.h"

class FlyWithWings:public FlyBehavior
{
public:
	FlyWithWings();
	~FlyWithWings();

	//实现接口类中的纯虚函数
	void Fly();
};

#endif

