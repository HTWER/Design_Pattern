#include "SoldState.h"
#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "StateMachine.h"

void SoldState::Enter(StateMachine* stateMachine)
{
	GumballMachine* gumballMachine = (GumballMachine*)(stateMachine->object);
	cout << "���һ��..." << endl;
	if (gumballMachine->count > 0)
		gumballMachine->count--;
	if (gumballMachine->count > 0)
		stateMachine->changeState(new NoQuarterState());
	else
	{
		cout << "�ѷų����һ�ţ�" << endl;
		stateMachine->changeState(new SoldOutState());
	}
}

void SoldState::insertQuarter(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}

void SoldState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}

void SoldState::turnCrank(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}