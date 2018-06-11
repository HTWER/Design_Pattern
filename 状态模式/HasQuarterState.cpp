#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "WinnerState.h"
#include "SoldState.h"
#include "StateMachine.h"

HasQuarterState::HasQuarterState()
{
	srand((unsigned)time(NULL));
}

void HasQuarterState::insertQuarter(StateMachine* stateMachine)
{
	cout << "不要重复投币" << endl;
}

void HasQuarterState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "退还硬币" << endl;
	stateMachine->changeState(new NoQuarterState());
}

void HasQuarterState::turnCrank(StateMachine* stateMachine)
{
	GumballMachine* gumballMachine = (GumballMachine*)(stateMachine->object);
	cout << "转动把柄..." << endl;
	int winner = rand() % 10;
	if (winner == 0 && gumballMachine->count > 1)
		stateMachine->changeState(new WinnerState());
	else
		stateMachine->changeState(new SoldState());
}