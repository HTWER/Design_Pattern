#include "NoQuarterState.h"

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter()
{
	cout << "ÄãÍ¶ÈëÁËÓ²±Ò" << endl;
	gumballMachine->setState(gumballMachine->hasQuarterState);
}

void NoQuarterState::ejectQuarter()
{
	cout << "²Ù×÷´íÎó" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "²Ù×÷´íÎó" << endl;
}

void NoQuarterState::dispense()
{
	cout << "²Ù×÷´íÎó" << endl;
}
