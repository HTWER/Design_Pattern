#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "WinnerState.h"
#include "SoldState.h"

HasQuarterState::HasQuarterState()
{
	srand((unsigned)time(NULL));
}

void HasQuarterState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "不要重复投币" << endl;
}

void HasQuarterState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "退还硬币" << endl;
	gumballMachine->setState(new NoQuarterState());
}

void HasQuarterState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "转动把柄..." << endl;
	int winner = rand() % 10;
	if (winner == 0 && gumballMachine->count > 1)
		gumballMachine->setState(new WinnerState());
	else
		gumballMachine->setState(new SoldState());
}