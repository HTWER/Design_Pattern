#ifndef __XUEBI_H__
#define __XUEBI_H__

#include "Beverage.h"

class XueBi:public Beverage
{
public:
	XueBi();
	~XueBi();

	//ʵ���麯��
	string getDescription();
	float cost();
};

#endif