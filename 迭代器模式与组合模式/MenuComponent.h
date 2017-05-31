#ifndef __MENUCOMPONENT_H__
#define __MENUCOMPONENT_H__

#include <iostream>
#include <cstdlib>
#include "Iterator.h"
using namespace std;

//组合模式：可以将元素组织成树型结构，所有的节点都是同一个接口；节点一般分为两类，内节点可以创建迭代器，叶节点不可以创建迭代器；

//这个类其实是树结构中的节点
//所有的函数都提供默认实现，即抛出异常；
//没有重写过某些函数的子类，在调用这些函数的时候就会抛出异常,不知道怎么给c++抛出异常；
//如果子类是菜单的话，子类就要加上一个容器
//这个类已经破坏了单一责任原则，换来的是透明性
//类里面包括了两套责任

class MenuComponent
{
public:
	//菜单用
	virtual void add(MenuComponent* menuComponent)
	{
		cout << "add fali";
		abort();
	}
	virtual void remove(MenuComponent* menuComponent)
	{
		cout << "remove fail";
		abort();
	}
	virtual MenuComponent* getChild(int i)
	{
		cout << "getChild fail";
		abort();
	}
	//========================


	//菜单项用
	virtual double getPrice()
	{
		cout << "getPrice fail";
		abort();
	}
	virtual bool isVegetarian()
	{
		cout << "isVegetarian";
		abort();
	}
	//========================


	//两者共用
	virtual string getName()
	{
		cout << "getName fail";
		abort();
	}
	virtual string getDescription()
	{
		cout << "getDescription fail";
		abort();
	}
	virtual void print()
	{
		cout << "print fail";
		abort();
	}
	virtual Iterator* createIterator()
	{
		cout << "createIterator fail";
		abort();
	}
	//========================


	virtual ~MenuComponent(){};

protected:
	MenuComponent(){};	//不让这个类实例化
};

#endif