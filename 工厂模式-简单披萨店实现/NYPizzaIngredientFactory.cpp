#include "NYPizzaIngredientFactory.h"
#include "Dough_1.h"
#include "Sauce_1.h"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{

}

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{

}

Dough * NYPizzaIngredientFactory::createDough()
{
	return new Dough_1();
}

Sauce * NYPizzaIngredientFactory::createSauce()
{
	return new Sauce_1();
}
