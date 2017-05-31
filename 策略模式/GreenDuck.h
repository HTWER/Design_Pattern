#ifndef __GREENDUCK_H__
#define __GREENDUCK_H__
#include "Duck.h"

class GreenDuck:public Duck
{
public:
	GreenDuck();
	~GreenDuck();

	//实现Duck类中的纯虚函数
	void Display();
};

#endif


