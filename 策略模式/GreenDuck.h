#ifndef __GREENDUCK_H__
#define __GREENDUCK_H__
#include "Duck.h"

class GreenDuck:public Duck
{
public:
	GreenDuck();
	~GreenDuck();

	//ʵ��Duck���еĴ��麯��
	void Display();
};

#endif


