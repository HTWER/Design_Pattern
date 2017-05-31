#include <iostream>
#include "Beverage.h"
#include "KeLe.h"
#include "XueBi.h"
#include "Milk.h"
#include "Mocha.h"

using namespace std;

int main()
{
	Beverage * beverage = new Milk(new Mocha(new Milk(new XueBi())));

	cout << beverage->getDescription() << endl;
	cout << beverage->cost() << endl;

	cin.get();
	return 0;
}