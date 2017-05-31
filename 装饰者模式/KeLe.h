#ifndef __KELE_H__
#define __KELE_H__

#include "Beverage.h"

class KeLe:public Beverage
{
public:
	KeLe();
	~KeLe();

	//ÊµÏÖÐéº¯Êý
	string getDescription();
	float cost();
};

#endif


