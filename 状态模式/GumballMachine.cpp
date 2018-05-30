#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "SoldOutState.h"
#include "WinnerState.h"
#include "StateMachine.h"

GumballMachine::GumballMachine(int numberGumballs)
{
	this->count = numberGumballs;
	this->stateMachine = new StateMachine(this);
	if (numberGumballs > 0)
		this->stateMachine->state = new NoQuarterState();
	else
		this->stateMachine->state = new SoldOutState();
}

void GumballMachine::insertQuarter()
{
	stateMachine->state->insertQuarter(this->stateMachine);
}

void GumballMachine::ejectQuarter()
{
	this->stateMachine->state->ejectQuarter(this->stateMachine);
}

void GumballMachine::turnCrank()
{
	this->stateMachine->state->turnCrank(this->stateMachine);
}

void GumballMachine::refill(int count)
{
	this->count = count;
	this->stateMachine->state = new NoQuarterState();
}