#include "SoldState.h"
#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"

void SoldState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}

void SoldState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}

void SoldState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
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
		cout << "�ѷų����һ�ţ�" << endl;
		gumballMachine->setState(new SoldOutState());
	}
}