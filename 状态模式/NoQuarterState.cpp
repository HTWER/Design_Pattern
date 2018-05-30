#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "HasQuarterState.h"

void NoQuarterState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "ÄãÍ¶ÈëÁËÓ²±Ò" << endl;
	gumballMachine->setState(new HasQuarterState());
}

void NoQuarterState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "²Ù×÷´íÎó" << endl;
}

void NoQuarterState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "²Ù×÷´íÎó" << endl;
}

void NoQuarterState::dispense(GumballMachine* gumballMachine)
{
	cout << "²Ù×÷´íÎó" << endl;
}
