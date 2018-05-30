#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "SoldOutState.h"
#include "WinnerState.h"

GumballMachine::GumballMachine(int numberGumballs)
{
	noQuarterState = new NoQuarterState(this);
	hasQuarterState = new HasQuarterState(this);
	soldState = new SoldState(this);
	soldOutState = new SoldOutState(this);
	winnerState = new WinnerState(this);

	this->count = numberGumballs;
	if (numberGumballs > 0)
		state = noQuarterState;
	else
		state = soldOutState;
}

//...  调出去
void GumballMachine::insertQuarter()
{
	state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	state->turnCrank();
	state->dispense();		//...
}

void GumballMachine::setState(State* state)		//放进State抽象类中...
{
	this->state = state;
}

void GumballMachine::releaseBall()		//放进具体State中...
{
	cout << "获得一颗..." << endl;
	if (count != 0)		//...
		count--;
}

void GumballMachine::refill(int count)
{
	this->count = count;
	state = noQuarterState;
}
////////////////////////