#ifndef __WINNERSTATE_H__
#define __WINNERSTATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <iostream>
using namespace std;

class WinnerState :public State
{
public:
	void insertQuarter(GumballMachine* gumballMachine);
	void ejectQuarter(GumballMachine* gumballMachine);
	void turnCrank(GumballMachine* gumballMachine);
	void dispense(GumballMachine* gumballMachine);
};

#endif