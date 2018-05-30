#include "WinnerState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "GumballMachine.h"
#include "StateMachine.h"

void WinnerState::Enter(StateMachine* stateMachine)
{
	GumballMachine* gumballMachine = (GumballMachine*)(stateMachine->object);
	cout << "中奖,获得两颗..." << endl;
	if (gumballMachine->count >= 2)
		gumballMachine->count = gumballMachine->count - 2;
	if (gumballMachine->count > 0)
		stateMachine->setState(new NoQuarterState());
	else{
		cout << "已放出最后一颗！" << endl;
		stateMachine->setState(new SoldOutState());
	}
}

void WinnerState::insertQuarter(StateMachine* stateMachine)
{
	cout << "操作错误" << endl;
}

void WinnerState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "操作错误" << endl;
}

void WinnerState::turnCrank(StateMachine* stateMachine)
{
	cout << "操作错误" << endl;
}