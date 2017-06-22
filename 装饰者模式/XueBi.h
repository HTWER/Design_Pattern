#ifndef __XUEBI_H__
#define __XUEBI_H__

#include "Beverage.h"

class XueBi:public Beverage
{
public:
	XueBi();
	~XueBi();

	//实现虚函数
	string getDescription();
	float cost();
};

#endif