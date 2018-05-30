#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

#include <iostream>
using namespace std;

class State;

class GumballMachine		//²ð¿ª
{
public:
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