#ifndef __SOLDOUTSTATE_H__
#define __SOLDOUTSTATE_H__

#include "State.h"
#include <iostream>
using namespace std;

class GumballMachine;

class SoldOutState :public State
{
public:
	void insertQuarter(GumballMachine* gumballMachine);
	void ejectQuarter(GumballMachine* gumballMachine);
	void turnCrank(GumballMachine* gumballMachine);
	void dispense(GumballMachine* gumballMachine);
};

#endif