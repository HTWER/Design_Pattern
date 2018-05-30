#include "WinnerState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "GumballMachine.h"

void WinnerState::Enter(GumballMachine* gumballMachine)
{
	cout << "�н�,�������..." << endl;
	if (gumballMachine->count >= 2)
		gumballMachine->count = gumballMachine->count - 2;
	if (gumballMachine->count > 0)
		gumballMachine->setState(new NoQuarterState());
	else{
		cout << "�ѷų����һ�ţ�" << endl;
		gumballMachine->setState(new SoldOutState());
	}
}

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