#ifndef __SOLDSTATE_H__
#define __SOLDSTATE_H__

#include "State.h"
#include <iostream>
using namespace std;

class SoldState :public State
{
public:
	void insertQuarter(GumballMachine* gumballMachine);
	void ejectQuarter(GumballMachine* gumballMachine);
	void turnCrank(GumballMachine* gumballMachine);
	void dispense(GumballMachine* gumballMachine);
};


#endif