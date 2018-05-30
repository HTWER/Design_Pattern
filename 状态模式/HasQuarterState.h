#ifndef __HASQUARTERSTATE_H__
#define __HASQUARTERSTATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class GumballMachine;

class HasQuarterState:public State
{
private:
	GumballMachine* gumballMachine;
public:
	HasQuarterState(GumballMachine* gumballMachine);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
};

#endif