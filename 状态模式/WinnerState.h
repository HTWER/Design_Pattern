#ifndef __WINNERSTATE_H__
#define __WINNERSTATE_H__

#include "State.h"
#include <iostream>
using namespace std;

class WinnerState :public State
{
public:
	void Enter(GumballMachine* gumballMachine) override;
	void insertQuarter(GumballMachine* gumballMachine) override;
	void ejectQuarter(GumballMachine* gumballMachine) override;
	void turnCrank(GumballMachine* gumballMachine) override;
};

#endif