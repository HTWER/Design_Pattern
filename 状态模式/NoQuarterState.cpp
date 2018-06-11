#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "StateMachine.h"

void NoQuarterState::insertQuarter(StateMachine* stateMachine)
{
	cout << "ÄãÍ¶ÈëÁËÓ²±Ò" << endl;
	stateMachine->changeState(new HasQuarterState());
}

void NoQuarterState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "²Ù×÷´íÎó" << endl;
}

void NoQuarterState::turnCrank(StateMachine* stateMachine)
{
	cout << "²Ù×÷´íÎó" << endl;
}