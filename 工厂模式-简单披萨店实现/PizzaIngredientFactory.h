#ifndef PIZZAINGREDIENTFACTORY_H__
#define PIZZAINGREDIENTFACTORY_H__
#include "Dough.h"
#include "Sauce.h"

class PizzaIngredientFactory
{
public:
	PizzaIngredientFactory(){};
	~PizzaIngredientFactory(){};

	virtual Dough * createDough() = 0;
	virtual Sauce * createSauce() = 0;
};


#endif