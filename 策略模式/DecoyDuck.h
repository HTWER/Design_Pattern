#ifndef __DECOTDUCK_H__
#define __DECOTDUCK_H__
#include "Duck.h"

class DecoyDuck:public Duck
{
public:
	DecoyDuck();
	~DecoyDuck();

	//实现Duck中的纯虚函数
	void Display();
};

#endif


