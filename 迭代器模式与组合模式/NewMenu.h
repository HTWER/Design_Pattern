#ifndef __NEWMENU_H__
#define __NEWMENU_H__

#include <vector>
#include <string>
#include "MenuComponent.h"
#include "VectorIterator.h"
#include "CompositeIterator.h"

using namespace std;

//尽量都用指针，指针可以提高参数传输速度，而且能够实现多态，但是要注意内存管理

class NewMenu :public MenuComponent
{
public:
	vector<MenuComponent*> menuComponents;		//指针都由这里进行托管了，所以这个类在析构的时候要释放这里的所有指针
	string name;
	string description;

	NewMenu(string name,string description)
	{
		this->name = name;
		this->description = description;
	}

	Iterator* createIterator() override
	{
		//这里不是直接拿一个聚合来创建迭代器，而是那聚合的迭代器来创建一个迭代器
		//不用聚合的迭代器来创建迭代器可不可以实现
		return new CompositeIterator(new VectorIterator<MenuComponent*>(&menuComponents));		//诡异，用迭代器初始化迭代器
	}

	void add(MenuComponent* menuComponent) override
	{
		menuComponents.push_back(menuComponent);
	}

	void remove(MenuComponent* menuComponent) override
	{
		for (int i = 0; i < menuComponents.size();i++)
		{
			if (menuComponents[i]->getName() == menuComponent->getName()&&
				menuComponents[i]->getDescription() == menuComponent->getDescription()&&
				abs(menuComponents[i]->getPrice() - menuComponent->getPrice()) < 0.000000001&&
				menuComponents[i]->isVegetarian() == menuComponent->isVegetarian())
			{
				delete menuComponents[i];
				menuComponents.erase(menuComponents.begin() + i);
			}
		}
	}

	MenuComponent* getChild(int i) override
	{
		return menuComponents[i];
	}

	string getName() override
	{
		return name;
	}

	string getDescription() override
	{
		return description;
	}

	void print() override
	{
		cout << endl << getName() << ", " << getDescription() << endl;
		cout << "--------------------------" << endl;

		//以下代码其实没有很大的必要，完全可以用一个简单的for来完成，这里这样写只是为了尝试一下使用vector的迭代器
		vector<MenuComponent*>::iterator iter = menuComponents.begin();
		while (iter!=menuComponents.end())
		{
			(*iter)->print();		//vector的迭代器本来就是一个指针，要展开才能得到vector真是储存的内容
			iter++;
		}
	}

	~NewMenu()
	{
		for (int i = 0; i < menuComponents.size();i++)
		{
			delete menuComponents[i];
		}
	}
};

#endif