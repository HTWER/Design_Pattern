#ifndef __STATE_H__
#define __STATE_H__

class State
{
public:
	//virtual void Enter() = 0;		//...	dispense放到这里来调用
	//virtual void Exit() = 0;		//...
	virtual void insertQuarter() = 0;
	virtual void ejectQuarter() = 0;
	virtual void turnCrank() = 0;
	virtual void dispense() = 0;
};

#endif