#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "GumballMachine.h"
#include "WinnerState.h"
#include "SoldState.h"

HasQuarterState::HasQuarterState()
{
	srand((unsigned)time(NULL));
}

void HasQuarterState::insertQuarter(GumballMachine* gumballMachine)
{
	cout << "��Ҫ�ظ�Ͷ��" << endl;
}

void HasQuarterState::ejectQuarter(GumballMachine* gumballMachine)
{
	cout << "�˻�Ӳ��" << endl;
	gumballMachine->setState(new NoQuarterState());
}

void HasQuarterState::turnCrank(GumballMachine* gumballMachine)
{
	cout << "ת���ѱ�..." << endl;
	int winner = rand() % 10;
	if (winner == 0 && gumballMachine->count > 1)
		gumballMachine->setState(new WinnerState());
	else
		gumballMachine->setState(new SoldState());
}