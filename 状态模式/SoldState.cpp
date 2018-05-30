#include "SoldState.h"

SoldState::SoldState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter()
{
	cout << "操作错误" << endl;
}

void SoldState::ejectQuarter()
{
	cout << "操作错误" << endl;
}

void SoldState::turnCrank()
{
	cout << "操作错误" << endl;
}

void SoldState::dispense()
{
	gumballMachine->releaseBall();
	if (gumballMachine->count > 0)
	{
		gumballMachine->setState(gumballMachine->noQuarterState);	//...
	}
	else
	{
		cout << "已放出最后一颗！" << endl;
		gumballMachine->setState(gumballMachine->soldOutState);		//...
	}
}