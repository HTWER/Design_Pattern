#ifndef __NYPIZZA1_H__
#define __NYPIZZA1_H__

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class NYPizza1:public Pizza
{
public:
	NYPizza1(PizzaIngredientFactory * iFac);
	~NYPizza1();

	void prepare();
	void bake();
	void cut();
	void box();
};

#endif


