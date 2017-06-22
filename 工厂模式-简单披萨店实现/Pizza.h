#ifndef __PIZZA_H__
#define __PIZZA_H__

#include <string>
#include "PizzaIngredientFactory.h"
#include "Dough.h"
#include "Sauce.h"
using namespace std;

class Pizza
{
public:
	Pizza(PizzaIngredientFactory * iFac)
	{
		ingredientFactory = iFac;
	};
	~Pizza(){};

	string name;
	PizzaIngredientFactory * ingredientFactory;
	Dough * dough;
	Sauce * sauce;

	virtual void prepare() = 0;
	virtual void bake() = 0;
	virtual void cut() = 0;
	virtual void box() = 0;
};

#endif


