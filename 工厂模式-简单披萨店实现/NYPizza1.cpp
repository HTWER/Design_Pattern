#include "NYPizza1.h"
#include <iostream>
#include <string>
using namespace std;


NYPizza1::NYPizza1(PizzaIngredientFactory * iFac) :Pizza(iFac)
{
	name = "纽约1号披萨";
}

NYPizza1::~NYPizza1()
{
}

void NYPizza1::prepare()
{
	cout << name << "准备" << endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
}

void NYPizza1::bake()
{
	cout << name << "烘焙:" << dough->GetName() << " " << sauce->GetName() << endl;
}

void NYPizza1::cut()
{
	cout << name << "切块" << endl;
}

void NYPizza1::box()
{
	cout << name << "包装" << endl;
}
