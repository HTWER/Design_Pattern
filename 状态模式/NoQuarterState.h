#ifndef __NOQUARTERSTATE_H__
#define __NOQUARTERSTATE_H__

#include <iostream>
#include "State.h"
using namespace std;

class NoQuarterState :public State
{
public:
	void insertQuarter(GumballMachine* gumballMachine);
	void ejectQuarter(GumballMachine* gumballMachine);
	void turnCrank(GumballMachine* gumballMachine);
	void dispense(GumballMachine* gumballMachine);
};


#endif