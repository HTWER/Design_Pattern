#include "WinnerState.h"

WinnerState::WinnerState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void WinnerState::insertQuarter()
{
	cout << "操作错误" << endl;
}

void WinnerState::ejectQuarter()
{
	cout << "操作错误" << endl;
}

void WinnerState::turnCrank()
{
	cout << "操作错误" << endl;
}

void WinnerState::dispense()
{
	cout << "中奖" << endl;
	gumballMachine->releaseBall();
	gumballMachine->releaseBall();
	if (gumballMachine->count > 0)
		gumballMachine->setState(gumballMachine->noQuarterState);
	else{
		cout << "已放出最后一颗！" << endl;
		gumballMachine->setState(gumballMachine->soldOutState);
	}
		
}