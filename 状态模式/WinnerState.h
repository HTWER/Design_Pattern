#ifndef __WINNERSTATE_H__
#define __WINNERSTATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <iostream>
using namespace std;

class GumballMachine;

class WinnerState :public State
{
private:
	GumballMachine* gumballMachine;
public:
	WinnerState(GumballMachine* gumballMachine);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
};

#endif