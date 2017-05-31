#ifndef __COFFEEWITHHOOK_H__
#define __COFFEEWITHHOOK_H__

#include <iostream>
#include "CaffeineBeverageWithHook.h"

using namespace std;

class CoffeeWithHook :public CaffeineBeverageWithHook
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

	bool customerWantsCondiments()
	{
		cout << "Would you like some Sugar and Milk? ";
		char result;
		cin >> result;

		if (result == 'Y' || result == 'y')
			return true;
		else
			return false;
	}
};

#endif