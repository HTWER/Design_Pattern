#include "SoldOutState.h"

SoldOutState::SoldOutState(GumballMachine* gumballmachine)
{
	this->gumballmachine = gumballmachine;
}

void SoldOutState::insertQuarter()
{
	cout << "ÒÑÊÛóÀ" << endl;
}

void SoldOutState::ejectQuarter()
{
	cout << "²Ù×÷´íÎó" << endl;
}

void SoldOutState::turnCrank()
{
	cout << "²Ù×÷´íÎó" << endl;
}

void SoldOutState::dispense()
{
	cout << "²Ù×÷´íÎó" << endl;
}