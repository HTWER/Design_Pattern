#ifndef __PIZZASTORE_H__
#define __PIZZASTORE_H__

/*
准确来说，这个是抽象工厂模式；
工厂模式只有一个工厂方法，因此只能创建一类产品；
抽象工厂拥有多个工厂方法，抽象工厂可以将不同类型的产品分开写到多个工厂方法中，通常每个工厂方法创建出来产品之间是有关联的，而且每一个工厂方法可以根据传入的字符串来判断具体创建哪一个产品；
工厂方法一般都写成虚函数，子类继承之后可以重写，从而可以将一类产品按照某种属性进一步划分；一个子类代表其中的划分出来的其中一部分；
抽象工厂模式只是工厂模式的升级版；
工厂也可以被其他对象保存在抽象接口中，需要的时候在拿来使用；
抽象工厂的重点是通过抽象接口来通信；
*/

#include <iostream>
#include "Pizza.h"
using namespace std;

class PizzaStore
{
public:
	PizzaStore(){};
	~PizzaStore(){};

	Pizza * orderPizza(string type)
	{
		//工厂模式关键的地方在这里，通过一个基类来接收工厂生产出来的东西；
		//这个基类中有着许多虚方法；调用虚函数的时候会调用到子类的最新重写虚函数实现
		Pizza * pizza = createPizza(type);

		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();

		return pizza;
	}

	virtual Pizza * createPizza(string type) = 0;
};

#endif



