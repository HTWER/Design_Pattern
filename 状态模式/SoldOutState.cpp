#include "SoldOutState.h"

SoldOutState::SoldOutState(GumballMachine* gumballmachine)
{
	this->gumballmachine = gumballmachine;
}

void SoldOutState::insertQuarter()
{
	cout << "������" << endl;
}

void SoldOutState::ejectQuarter()
{
	cout << "��������" << endl;
}

void SoldOutState::turnCrank()
{
	cout << "��������" << endl;
}

void SoldOutState::dispense()
{
	cout << "��������" << endl;
}