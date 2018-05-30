#ifndef __SOLDOUTSTATE_H__
#define __SOLDOUTSTATE_H__

#include "State.h"
#include <iostream>
using namespace std;

class GumballMachine;

class SoldOutState :public State
{
public:
	void insertQuarter(GumballMachine* gumballMachine) override;
	void ejectQuarter(GumballMachine* gumballMachine) override;
	void turnCrank(GumballMachine* gumballMachine) override;
};

#endif