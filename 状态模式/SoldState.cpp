#include "SoldState.h"
#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"

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

void SoldState::dispense(GumballMachine* gumballMachine)
{
	gumballMachine->releaseBall();
	if (gumballMachine->count > 0)
	{
		gumballMachine->setState(new NoQuarterState());
	}
	else
	{
		cout << "已放出最后一颗！" << endl;
		gumballMachine->setState(new SoldOutState());
	}
}