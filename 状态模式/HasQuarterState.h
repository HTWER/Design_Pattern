#ifndef __HASQUARTERSTATE_H__
#define __HASQUARTERSTATE_H__

#include "State.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class HasQuarterState:public State
{
public:
	HasQuarterState();
	void insertQuarter(GumballMachine* gumballMachine);
	void ejectQuarter(GumballMachine* gumballMachine);
	void turnCrank(GumballMachine* gumballMachine);
	void dispense(GumballMachine* gumballMachine);
};

#endif