#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "StateMachine.h"

void NoQuarterState::insertQuarter(StateMachine* stateMachine)
{
	cout << "��Ͷ����Ӳ��" << endl;
	stateMachine->changeState(new HasQuarterState());
}

void NoQuarterState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}

void NoQuarterState::turnCrank(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}