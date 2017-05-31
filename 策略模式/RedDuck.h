#ifndef __REDDUCK_H__
#define __REDDUCK_H__
#include "Duck.h"

class RedDuck:public Duck
{
public:
	RedDuck();
	~RedDuck();

	//实现DUCK的纯虚函数
	void Display();
};

#endif


