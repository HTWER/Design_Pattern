#ifndef __STATE_H__
#define __STATE_H__

class GumballMachine;

class State
{
public:
	virtual void Enter(GumballMachine* gumballMachine){};
	virtual void Exit(GumballMachine* gumballMachine){};
	virtual void insertQuarter(GumballMachine* gumballMachine) = 0;
	virtual void ejectQuarter(GumballMachine* gumballMachine) = 0;
	virtual void turnCrank(GumballMachine* gumballMachine) = 0;
};

#endif