#include "SoldState.h"
#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "StateMachine.h"

void SoldState::Enter(StateMachine* stateMachine)
{
	GumballMachine* gumballMachine = (GumballMachine*)(stateMachine->object);
	cout << "获得一颗..." << endl;
	if (gumballMachine->count > 0)
		gumballMachine->count--;
	if (gumballMachine->count > 0)
		stateMachine->changeState(new NoQuarterState());
	else
	{
		cout << "已放出最后一颗！" << endl;
		stateMachine->changeState(new SoldOutState());
	}
}

void SoldState::insertQuarter(StateMachine* stateMachine)
{
	cout << "操作错误" << endl;
}

void SoldState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "操作错误" << endl;
}

void SoldState::turnCrank(StateMachine* stateMachine)
{
	cout << "操作错误" << endl;
}