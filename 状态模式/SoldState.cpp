#include "SoldState.h"

SoldState::SoldState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter()
{
	cout << "��������" << endl;
}

void SoldState::ejectQuarter()
{
	cout << "��������" << endl;
}

void SoldState::turnCrank()
{
	cout << "��������" << endl;
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
		cout << "�ѷų����һ�ţ�" << endl;
		gumballMachine->setState(gumballMachine->soldOutState);		//...
	}
}