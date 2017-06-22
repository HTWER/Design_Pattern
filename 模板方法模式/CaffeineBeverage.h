#ifndef __CAFFEINEBEVERAGE_H__
#define __CAFFEINEBEVERAGE_H__

//模板方法就是一个 控制其它方法调用顺序 的函数，通常这个方法由超类实现，且由超类保护，不允许子类重写;
//这个函数中的其它方法可以是虚方法，具体实现交给子类;

#include <iostream>
using namespace std;

class CaffeineBeverage
{
public:
	virtual ~CaffeineBeverage(){}

	//这个函数是模板函数，里面设置好了其它方法的调用方式
	//此函数应该禁止重写，但是编译器似乎不支持
	void prepareRecipe()
	{
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}

	//纯虚函数，交给子类实现
	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	//实函数，在超类统一实现，所有的子类都用到的同样操作
	void boilWater()
	{
		cout << "Boiling water" << endl;
	}

	void pourInCup()
	{
		cout << "Pouring into cup" << endl;
	}
};

#endif