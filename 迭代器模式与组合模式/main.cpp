#include <iostream>
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"

#include "NewMenuItem.h"
#include "NewMenu.h"
using namespace std;

int main()
{
	//迭代器模式
	//DinerMenu dinerMenu;
	//PancakeHouseMenu pancakeHouseMenu;

	//Iterator* iter1 = dinerMenu.createIterator();
	//Iterator* iter2 = pancakeHouseMenu.createIterator();

	//MenuItem* temp = NULL;

	//cout << "输出diner菜单：" << endl;
	//while (iter1->hasNext())
	//{
	//	temp = (MenuItem*)iter1->next();
	//	cout << temp->getName();
	//	if(temp->isVegetarian())
	//		cout << "(V)";
	//	cout << "," << temp->getPrice() << endl;
	//	cout << "	--" << temp->getDescription() << endl;
	//	cout << endl;
	//}

	//cout << "输出pancakeHouse菜单：" << endl;
	//while (iter2->hasNext())
	//{
	//	temp = (MenuItem*)iter2->next();
	//	cout << temp->getName();
	//	if (temp->isVegetarian())
	//		cout << "(V)";
	//	cout << "," << temp->getPrice() << endl;
	//	cout << "	--" << temp->getDescription() << endl;
	//	cout << endl;
	//}

	//delete iter1;
	//delete iter2;


	//组合模式
// 	MenuComponent* pancakeHouseMenu = new NewMenu("PANCAKE HOUSE MENU", "Breakfast");
// 	MenuComponent* dinerMenu = new NewMenu("DINER MENU", "Lunch");
// 	MenuComponent* cafeMenu = new NewMenu("CAFE MENU", "Dinner");
// 	MenuComponent* dessertMenu = new NewMenu("DESSERT MENU", "Dessert of course!");
// 
// 	MenuComponent* allMenus = new NewMenu("ALL MENU", "All menu combined");
// 	allMenus->add(pancakeHouseMenu);
// 	allMenus->add(dinerMenu);
// 	allMenus->add(cafeMenu);
// 
// 	pancakeHouseMenu->add(new NewMenuItem("cake", "good", true, 5));
// 	dinerMenu->add(new NewMenuItem("rice", "very good", true, 0.9));
// 	dinerMenu->add(dessertMenu);
// 	cafeMenu->add(new NewMenuItem("kabuqino", "taste good", true, 2));
// 	dessertMenu->add(new NewMenuItem("Apple Pie", "sweet", true, 1.3));
// 
// 	allMenus->print();


	//组合迭代器模式
	MenuComponent* pancakeHouseMenu = new NewMenu("PANCAKE HOUSE MENU", "Breakfast");
	MenuComponent* dinerMenu = new NewMenu("DINER MENU", "Lunch");
	MenuComponent* cafeMenu = new NewMenu("CAFE MENU", "Dinner");
	MenuComponent* dessertMenu = new NewMenu("DESSERT MENU", "Dessert of course!");
	
	MenuComponent* allMenus = new NewMenu("ALL MENU", "All menu combined");
	allMenus->add(pancakeHouseMenu);
	allMenus->add(dinerMenu);
	allMenus->add(cafeMenu);
	
	pancakeHouseMenu->add(new NewMenuItem("cake", "good", true, 5));
	dinerMenu->add(new NewMenuItem("rice", "very good", true, 0.9));
	dinerMenu->add(dessertMenu);
	cafeMenu->add(new NewMenuItem("kabuqino", "taste good", true, 2));
	dessertMenu->add(new NewMenuItem("Apple Pie", "sweet", true, 1.3));
	
	Iterator* iter = allMenus->createIterator();
	cout << "遍历整个菜单：" << endl;
	while (iter->hasNext())
	{
		MenuComponent** menuComponent = (MenuComponent**)(iter->next());
		cout << (*menuComponent)->getName() << endl;
	}
	delete iter;

	//使用try/catch来输出全部的素食
	iter = allMenus->createIterator();
	cout << "所有的素食：" << endl;
	while (iter->hasNext())
	{
		MenuComponent* menuComponent = (MenuComponent*)(iter->next());
		//以下代码不知道怎么实现
// 		try
// 		{
// 			if ((menuComponent)->isVegetarian())
// 				(menuComponent)->print();
// 		}
// 		catch (exception e)
// 		{
// 			//什么都不做，仅接住了异常，不让程序终止
// 		}
	}
	delete iter;

	delete allMenus;		//深度优先搜索型的析构
	
	system("pause");
	return 0;
}