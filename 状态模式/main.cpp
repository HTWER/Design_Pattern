#include "GumballMachine.h"
#include <iostream>

using namespace std;

int main()
{
	GumballMachine gumballMachine(10);

	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();

	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();

	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();

	gumballMachine.insertQuarter();
	gumballMachine.turnCrank();

	char c;
	while (cin.get(c))
	{
		switch (c)
		{
		case 'i':gumballMachine.insertQuarter(); break;
		case 't':gumballMachine.turnCrank(); break;
		case 'e':gumballMachine.ejectQuarter(); break;
		case 'r':gumballMachine.refill(5); break;
		}
	}

	cin.get();

	return 0;
}