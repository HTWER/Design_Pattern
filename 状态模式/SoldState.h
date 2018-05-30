#ifndef __SOLDSTATE_H__
#define __SOLDSTATE_H__

#include "State.h"
#include "GumballMachine.h"
#include <iostream>
using namespace std;

class GumballMachine;

class SoldState :public State
{
private:
	GumballMachine* gumballMachine;		//...删掉，每次调用都传一遍
public:
	SoldState(GumballMachine* gumballMachine);	//... 删掉
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
};


#endif