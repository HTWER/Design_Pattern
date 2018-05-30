#include "HasQuarterState.h"

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
	srand((unsigned)time(NULL));
}

void HasQuarterState::insertQuarter()
{
	cout << "��Ҫ�ظ�Ͷ��" << endl;
}

void HasQuarterState::ejectQuarter()
{
	cout << "�˻�Ӳ��" << endl;
	gumballMachine->setState(gumballMachine->noQuarterState);
}

void HasQuarterState::turnCrank()
{
	cout << "ת���ѱ�..." << endl;
	int winner = rand() % 10;
	if (winner == 0 && gumballMachine->count > 1)
		gumballMachine->setState(gumballMachine->winnerState);
	else
		gumballMachine->setState(gumballMachine->soldState);
}

void HasQuarterState::dispense()
{
	cout << "��������" << endl;
}