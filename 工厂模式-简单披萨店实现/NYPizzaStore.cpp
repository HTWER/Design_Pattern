#include "NYPizzaStore.h"
#include "NYPizza1.h"
#include "NYPizza2.h"
#include "NYPizzaIngredientFactory.h"

NYPizzaStore::NYPizzaStore()
{
}


NYPizzaStore::~NYPizzaStore()
{
}

Pizza * NYPizzaStore::createPizza(string type)
{
	//通过基类来进行通信
	Pizza * pizza = NULL;
	PizzaIngredientFactory * ingredientFactory = new NYPizzaIngredientFactory();

	if (type=="NYPizza1")
	{
		pizza = new NYPizza1(ingredientFactory);
	}
	else if (type=="NYPizza2")
	{
		pizza = new NYPizza2(ingredientFactory);
	}

	return pizza;
}
