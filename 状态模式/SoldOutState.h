#ifndef __SOLDOUTSTATE_H__
#define __SOLDOUTSTATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <iostream>
using namespace std;

class GumballMachine;

class SoldOutState :public State
{
private:
	GumballMachine* gumballmachine;
public:
	SoldOutState(GumballMachine* gumballmachine);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
};

#endif