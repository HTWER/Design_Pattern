#ifndef __KELE_H__
#define __KELE_H__

#include "Beverage.h"

class KeLe:public Beverage
{
public:
	KeLe();
	~KeLe();

	//ʵ���麯��
	string getDescription();
	float cost();
};

#endif


