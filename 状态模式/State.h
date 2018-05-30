#ifndef __STATE_H__
#define __STATE_H__

class GumballMachine;

class State
{
public:
	//virtual void Enter() = 0;		//...	dispense放到这里来调用
	//virtual void Exit() = 0;		//...
	virtual void insertQuarter(GumballMachine* gumballMachine) = 0;
	virtual void ejectQuarter(GumballMachine* gumballMachine) = 0;
	virtual void turnCrank(GumballMachine* gumballMachine) = 0;
	virtual void dispense(GumballMachine* gumballMachine) = 0;
};

#endif