#include "NYPizza2.h"
#include <iostream>
#include <string>
using namespace std;


NYPizza2::NYPizza2(PizzaIngredientFactory * iFac) :Pizza(iFac)
{
	name = "ŦԼ2������";
}

NYPizza2::~NYPizza2()
{
}

void NYPizza2::prepare()
{
	cout << name << "׼��" << endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
}

void NYPizza2::bake()
{
	cout << name << "�決:" << dough->GetName() << " " << sauce->GetName() << endl;
}

void NYPizza2::cut()
{
	cout << name << "�п�" << endl;
}

void NYPizza2::box()
{
	cout << name << "��װ" << endl;
}
