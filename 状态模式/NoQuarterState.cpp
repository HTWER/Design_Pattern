#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "HasQuarterState.h"

void NoQuarterState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "��Ͷ����Ӳ��" << endl;
	gumballMachine->setState(new HasQuarterState());
}

void NoQuarterState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}

void NoQuarterState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}

void NoQuarterState::dispense(GumballMachine* gumballMachine)
{
	cout << "��������" << endl;
}
