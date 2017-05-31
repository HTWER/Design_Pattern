#ifndef __XUEBI_H__
#define __XUEBI_H__

#include "Beverage.h"

class XueBi:public Beverage
{
public:
	XueBi();
	~XueBi();

	//ÊµÏÖÐéº¯Êý
	string getDescription();
	float cost();
};

#endif