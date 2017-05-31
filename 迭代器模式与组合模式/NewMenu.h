#ifndef __NEWMENU_H__
#define __NEWMENU_H__

#include <vector>
#include <string>
#include "MenuComponent.h"
#include "VectorIterator.h"
#include "CompositeIterator.h"

using namespace std;

//��������ָ�룬ָ�������߲��������ٶȣ������ܹ�ʵ�ֶ�̬������Ҫע���ڴ����

class NewMenu :public MenuComponent
{
public:
	vector<MenuComponent*> menuComponents;		//ָ�붼����������й��ˣ������������������ʱ��Ҫ�ͷ����������ָ��
	string name;
	string description;

	NewMenu(string name,string description)
	{
		this->name = name;
		this->description = description;
	}

	Iterator* createIterator() override
	{
		//���ﲻ��ֱ����һ���ۺ��������������������Ǿۺϵĵ�����������һ��������
		//���þۺϵĵ������������������ɲ�����ʵ��
		return new CompositeIterator(new VectorIterator<MenuComponent*>(&menuComponents));		//���죬�õ�������ʼ��������
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

		//���´�����ʵû�кܴ�ı�Ҫ����ȫ������һ���򵥵�for����ɣ���������дֻ��Ϊ�˳���һ��ʹ��vector�ĵ�����
		vector<MenuComponent*>::iterator iter = menuComponents.begin();
		while (iter!=menuComponents.end())
		{
			(*iter)->print();		//vector�ĵ�������������һ��ָ�룬Ҫչ�����ܵõ�vector���Ǵ��������
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