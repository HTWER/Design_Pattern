#include "SoldState.h"
#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"

void SoldState::Enter(GumballMachine* gumballMachine)
{
	cout << "���һ��..." << endl;
	if (gumballMachine->count > 0)
		gumballMachine->count--;
	if (gumballMachine->count > 0)
		gumballMachine->setState(new NoQuarterState());
	else
	{
		cout << "�ѷų����һ�ţ�" << endl;
		gumballMachine->setState(new SoldOutState());
	}
}

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