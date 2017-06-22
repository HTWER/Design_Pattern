#ifndef NYPizzaIngredientFactory_H__
#define NYPizzaIngredientFactory_H__
#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory:public PizzaIngredientFactory
{
public:
	NYPizzaIngredientFactory();
	~NYPizzaIngredientFactory();

	Dough * createDough();
	Sauce * createSauce();
};

#endif


