#ifndef __TEA_H__
#define __TEA_H__

#include "CaffeineBeverage.h"

class Tea:public CaffeineBeverage
{
public:
	void brew() override	//第一次使用override
	{
		cout << "Steeping the tea" << endl;
	}
	void addCondiments() override
	{
		cout << "Adding Lemon" << endl;
	}
};

#endif