#ifndef __MALLARDDUCK_H__
#define __MALLARDDUCK_H__

#include <iostream>
#include "Duck.h"
using namespace std;

class MallardDuck:public Duck
{
public:
	void quack()
	{
		cout << "Quack" << endl;
	}
	void fly()
	{
		cout << "I am flying" << endl;
	}

};

#endif