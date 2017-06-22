#ifndef __COFFEE_H__
#define __COFFEE_H__

#include "CaffeineBeverage.h"

class Coffee :public CaffeineBeverage
{
public:
	void brew() override
	{
		cout << "Dripping Coffee through filter" << endl;
	}
	void addCondiments() override
	{
		cout << "Adding Sugar and Milk" << endl;
	}
};

#endif