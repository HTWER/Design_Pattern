#include <iostream>
#include "NYPizzaStore.h"
using namespace std;

int main()
{
	NYPizzaStore nyPizzaStore;
	nyPizzaStore.orderPizza("NYPizza1");
	nyPizzaStore.orderPizza("NYPizza2");

	cin.get();
	return 0;
}