#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

class NoQuarterState;
class HasQuarterState;
class SoldOutState;
class SoldSate;
class WinnerState;

#include "State.h"
#include <iostream>
using namespace std;

class GumballMachine		//²ð¿ª
{
public:
	//... É¾µô
	State* soldOutState;
	State* noQuarterState;
	State* hasQuarterState;
	State* soldState;
	State* winnerState;
	/////////////////////////////////

	State* state;
	int count = 0;

	GumballMachine(int numberGumballs);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void setState(State* state);
	void releaseBall();
	void refill(int count);
};

#endif