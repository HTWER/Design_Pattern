#include "WinnerState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "GumballMachine.h"

void WinnerState::Enter(GumballMachine* gumballMachine)
{
	cout << "中奖,获得两颗..." << endl;
	if (gumballMachine->count >= 2)
		gumballMachine->count = gumballMachine->count - 2;
	if (gumballMachine->count > 0)
		gumballMachine->setState(new NoQuarterState());
	else{
		cout << "已放出最后一颗！" << endl;
		gumballMachine->setState(new SoldOutState());
	}
}

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