#include "DuckSimulator.h"
#include "DecoratingDuckFactory.h"
#include <iostream>
using namespace std;

int main()
{
	DecoratingDuckFactory* decoratingDuckFactory = new DecoratingDuckFactory();

	DuckSimulator duckSimulator;
	duckSimulator.simulate(decoratingDuckFactory);

	cin.get();
	return 0;
}