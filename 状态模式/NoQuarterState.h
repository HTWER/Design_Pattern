#ifndef __NOQUARTERSTATE_H__
#define __NOQUARTERSTATE_H__

#include <iostream>
#include "GumballMachine.h"
#include "State.h"
using namespace std;

class GumballMachine;

class NoQuarterState :public State
{
private:
	GumballMachine* gumballMachine;
public:
	NoQuarterState(GumballMachine* gumballMachine);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
};


#endif