#include "NYPizza2.h"
#include <iostream>
#include <string>
using namespace std;


NYPizza2::NYPizza2(PizzaIngredientFactory * iFac) :Pizza(iFac)
{
	name = "纽约2号披萨";
}

NYPizza2::~NYPizza2()
{
}

void NYPizza2::prepare()
{
	cout << name << "准备" << endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
}

void NYPizza2::bake()
{
	cout << name << "烘焙:" << dough->GetName() << " " << sauce->GetName() << endl;
}

void NYPizza2::cut()
{
	cout << name << "切块" << endl;
}

void NYPizza2::box()
{
	cout << name << "包装" << endl;
}
