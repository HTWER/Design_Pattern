#ifndef __NYPIZZA2_H__
#define __NYPIZZA2_H__

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class NYPizza2 :public Pizza
{
public:
	NYPizza2(PizzaIngredientFactory * iFac);
	~NYPizza2();

	void prepare();
	void bake();
	void cut();
	void box();
};

#endif