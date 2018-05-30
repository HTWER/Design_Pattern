#ifndef __WINNERSTATE_H__
#define __WINNERSTATE_H__

#include "State.h"
#include <iostream>
using namespace std;

class WinnerState :public State
{
public:
	void Enter(StateMachine* stateMachine) override;
	void insertQuarter(StateMachine* stateMachine) override;
	void ejectQuarter(StateMachine* stateMachine) override;
	void turnCrank(StateMachine* stateMachine) override;
};

#endif