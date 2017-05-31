#include <iostream>
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"

#include "NewMenuItem.h"
#include "NewMenu.h"
using namespace std;

int main()
{
	//������ģʽ
	//DinerMenu dinerMenu;
	//PancakeHouseMenu pancakeHouseMenu;

	//Iterator* iter1 = dinerMenu.createIterator();
	//Iterator* iter2 = pancakeHouseMenu.createIterator();

	//MenuItem* temp = NULL;

	//cout << "���diner�˵���" << endl;
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

	//cout << "���pancakeHouse�˵���" << endl;
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


	//���ģʽ
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


	//��ϵ�����ģʽ
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
	cout << "���������˵���" << endl;
	while (iter->hasNext())
	{
		MenuComponent** menuComponent = (MenuComponent**)(iter->next());
		cout << (*menuComponent)->getName() << endl;
	}
	delete iter;

	//ʹ��try/catch�����ȫ������ʳ
	iter = allMenus->createIterator();
	cout << "���е���ʳ��" << endl;
	while (iter->hasNext())
	{
		MenuComponent* menuComponent = (MenuComponent*)(iter->next());
		//���´��벻֪����ôʵ��
// 		try
// 		{
// 			if ((menuComponent)->isVegetarian())
// 				(menuComponent)->print();
// 		}
// 		catch (exception e)
// 		{
// 			//ʲô������������ס���쳣�����ó�����ֹ
// 		}
	}
	delete iter;

	delete allMenus;		//������������͵�����
	
	system("pause");
	return 0;
}