#include "WinnerState.h"

WinnerState::WinnerState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void WinnerState::insertQuarter()
{
	cout << "��������" << endl;
}

void WinnerState::ejectQuarter()
{
	cout << "��������" << endl;
}

void WinnerState::turnCrank()
{
	cout << "��������" << endl;
}

void WinnerState::dispense()
{
	cout << "�н�" << endl;
	gumballMachine->releaseBall();
	gumballMachine->releaseBall();
	if (gumballMachine->count > 0)
		gumballMachine->setState(gumballMachine->noQuarterState);
	else{
		cout << "�ѷų����һ�ţ�" << endl;
		gumballMachine->setState(gumballMachine->soldOutState);
	}
		
}