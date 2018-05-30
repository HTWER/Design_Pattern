#include "WinnerState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"

void WinnerState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "操作错误" << endl;
}

void WinnerState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "操作错误" << endl;
}

void WinnerState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "操作错误" << endl;
}

void WinnerState::dispense(GumballMachine* gumballMachine)
{
	cout << "中奖" << endl;
	gumballMachine->releaseBall();
	gumballMachine->releaseBall();
	if (gumballMachine->count > 0)
		gumballMachine->setState(new NoQuarterState());
	else{
		cout << "已放出最后一颗！" << endl;
		gumballMachine->setState(new SoldOutState());
	}
		
}