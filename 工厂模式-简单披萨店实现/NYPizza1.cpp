#include "NYPizza1.h"
#include <iostream>
#include <string>
using namespace std;


NYPizza1::NYPizza1(PizzaIngredientFactory * iFac) :Pizza(iFac)
{
	name = "ŦԼ1������";
}

NYPizza1::~NYPizza1()
{
}

void NYPizza1::prepare()
{
	cout << name << "׼��" << endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
}

void NYPizza1::bake()
{
	cout << name << "�決:" << dough->GetName() << " " << sauce->GetName() << endl;
}

void NYPizza1::cut()
{
	cout << name << "�п�" << endl;
}

void NYPizza1::box()
{
	cout << name << "��װ" << endl;
}
