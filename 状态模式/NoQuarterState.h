#ifndef __NOQUARTERSTATE_H__
#define __NOQUARTERSTATE_H__

#include <iostream>
#include "State.h"
using namespace std;

class NoQuarterState :public State
{
public:
	void insertQuarter(GumballMachine* gumballMachine) override;
	void ejectQuarter(GumballMachine* gumballMachine) override;
	void turnCrank(GumballMachine* gumballMachine) override;
};


#endif