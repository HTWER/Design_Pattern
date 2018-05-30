#ifndef __SOLDOUTSTATE_H__
#define __SOLDOUTSTATE_H__

#include "State.h"
#include <iostream>
using namespace std;

class GumballMachine;

class SoldOutState :public State
{
public:
	void insertQuarter(StateMachine* stateMachine) override;
	void ejectQuarter(StateMachine* stateMachine) override;
	void turnCrank(StateMachine* stateMachine) override;
};

#endif