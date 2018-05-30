#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "SoldOutState.h"
#include "WinnerState.h"

GumballMachine::GumballMachine(int numberGumballs)
{
	this->count = numberGumballs;
	if (numberGumballs > 0)
		state = new NoQuarterState();
	else
		state = new SoldOutState();
}

//...  ����ȥ
void GumballMachine::insertQuarter()
{
	state->insertQuarter(this);
}

void GumballMachine::ejectQuarter()
{
	state->ejectQuarter(this);
}

void GumballMachine::turnCrank()
{
	state->turnCrank(this);
	state->dispense(this);		//...
}

void GumballMachine::setState(State* state)		//�Ž�State��������...
{
	this->state = state;
}

void GumballMachine::releaseBall()		//�Ž�����State��...
{
	cout << "���һ��..." << endl;
	if (count != 0)		//...
		count--;
}

void GumballMachine::refill(int count)
{
	this->count = count;
	state = new NoQuarterState();
}
////////////////////////