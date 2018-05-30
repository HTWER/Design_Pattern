#include "HasQuarterState.h"

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
	srand((unsigned)time(NULL));
}

void HasQuarterState::insertQuarter()
{
	cout << "不要重复投币" << endl;
}

void HasQuarterState::ejectQuarter()
{
	cout << "退还硬币" << endl;
	gumballMachine->setState(gumballMachine->noQuarterState);
}

void HasQuarterState::turnCrank()
{
	cout << "转动把柄..." << endl;
	int winner = rand() % 10;
	if (winner == 0 && gumballMachine->count > 1)
		gumballMachine->setState(gumballMachine->winnerState);
	else
		gumballMachine->setState(gumballMachine->soldState);
}

void HasQuarterState::dispense()
{
	cout << "操作错误" << endl;
}