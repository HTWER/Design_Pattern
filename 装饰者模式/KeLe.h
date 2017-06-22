#ifndef __KELE_H__
#define __KELE_H__

#include "Beverage.h"

class KeLe:public Beverage
{
public:
	KeLe();
	~KeLe();

	//实现虚函数
	string getDescription();
	float cost();
};

#endif


