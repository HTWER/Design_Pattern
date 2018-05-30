#include "SoldState.h"
#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"

void SoldState::Enter(GumballMachine* gumballMachine)
{
	cout << "获得一颗..." << endl;
	if (gumballMachine->count > 0)
		gumballMachine->count--;
	if (gumballMachine->count > 0)
		gumballMachine->setState(new NoQuarterState());
	else
	{
		cout << "已放出最后一颗！" << endl;
		gumballMachine->setState(new SoldOutState());
	}
}

void SoldState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "操作错误" << endl;
}

void SoldState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "操作错误" << endl;
}

void SoldState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "操作错误" << endl;
}