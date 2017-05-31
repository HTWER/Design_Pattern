#ifndef __WILDTURKEY_H__
#define __WILDTURKEY_H__

#include <iostream>
#include "Turkey.h"
using namespace std;

class WildTurkey:public Turkey
{
public:
	void gobble()
	{
		cout << "Gobble gobble" << endl;
	}
	void fly()
	{
		cout << "I am flying a short distance" << endl;
	}
};

#endif