#include "WinnerState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "GumballMachine.h"
#include "StateMachine.h"

void WinnerState::Enter(StateMachine* stateMachine)
{
	GumballMachine* gumballMachine = (GumballMachine*)(stateMachine->object);
	cout << "�н�,�������..." << endl;
	if (gumballMachine->count >= 2)
		gumballMachine->count = gumballMachine->count - 2;
	if (gumballMachine->count > 0)
		stateMachine->setState(new NoQuarterState());
	else{
		cout << "�ѷų����һ�ţ�" << endl;
		stateMachine->setState(new SoldOutState());
	}
}

void WinnerState::insertQuarter(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}

void WinnerState::ejectQuarter(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}

void WinnerState::turnCrank(StateMachine* stateMachine)
{
	cout << "��������" << endl;
}