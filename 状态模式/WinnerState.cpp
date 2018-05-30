#include "WinnerState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"

void WinnerState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}

void WinnerState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}

void WinnerState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}

void WinnerState::dispense(GumballMachine* gumballMachine)
{
	cout << "�н�" << endl;
	gumballMachine->releaseBall();
	gumballMachine->releaseBall();
	if (gumballMachine->count > 0)
		gumballMachine->setState(new NoQuarterState());
	else{
		cout << "�ѷų����һ�ţ�" << endl;
		gumballMachine->setState(new SoldOutState());
	}
		
}