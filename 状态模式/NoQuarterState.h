#ifndef __NOQUARTERSTATE_H__
#define __NOQUARTERSTATE_H__

#include <iostream>
#include "State.h"
using namespace std;

class NoQuarterState :public State
{
public:
	void insertQuarter(StateMachine* stateMachine) override;
	void ejectQuarter(StateMachine* stateMachine) override;
	void turnCrank(StateMachine* stateMachine) override;
};


#endif