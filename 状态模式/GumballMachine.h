#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

class StateMachine;

class GumballMachine
{
public:
	StateMachine* stateMachine;
	int count = 0;
	GumballMachine(int numberGumballs);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void refill(int count);
};

#endif