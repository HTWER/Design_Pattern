#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "WinnerState.h"
#include "SoldState.h"
#include "StateMachine.h"

HasQuarterState::HasQuarterState()
{
	srand((unsigned)time(NULL));
}

void HasQuarterState::insertQuarter(StateMachine* stateMachine)
{
	cout << "��Ҫ�ظ�Ͷ��" << endl;
}

void HasQuarterState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "�˻�Ӳ��" << endl;
	stateMachine->changeState(new NoQuarterState());
}

void HasQuarterState::turnCrank(StateMachine* stateMachine)
{
	GumballMachine* gumballMachine = (GumballMachine*)(stateMachine->object);
	cout << "ת���ѱ�..." << endl;
	int winner = rand() % 10;
	if (winner == 0 && gumballMachine->count > 1)
		stateMachine->changeState(new WinnerState());
	else
		stateMachine->changeState(new SoldState());
}