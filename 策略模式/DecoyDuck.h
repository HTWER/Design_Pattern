#ifndef __DECOTDUCK_H__
#define __DECOTDUCK_H__
#include "Duck.h"

class DecoyDuck:public Duck
{
public:
	DecoyDuck();
	~DecoyDuck();

	//ʵ��Duck�еĴ��麯��
	void Display();
};

#endif


