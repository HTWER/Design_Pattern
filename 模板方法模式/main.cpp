#include "Tea.h"
#include "Coffee.h"
#include "CoffeeWithHook.h"

int main()
{
	//²»´ø¹³×Ó
// 	Tea * tea = new Tea();
// 	Coffee * coffee = new Coffee();
// 
// 	tea->prepareRecipe();
// 	coffee->prepareRecipe();

	CoffeeWithHook * test = new CoffeeWithHook();
	test->prepareRecipe();

	system("pause");
	return 0;
}