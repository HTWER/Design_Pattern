#include "NoQuarterState.h"

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter()
{
	cout << "��Ͷ����Ӳ��" << endl;
	gumballMachine->setState(gumballMachine->hasQuarterState);
}

void NoQuarterState::ejectQuarter()
{
	cout << "��������" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "��������" << endl;
}

void NoQuarterState::dispense()
{
	cout << "��������" << endl;
}
