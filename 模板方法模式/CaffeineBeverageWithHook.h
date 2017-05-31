#ifndef __CAFFEINEBEVERAGEIWTHHOOK_H__
#define __CAFFEINEBEVERAGEIWTHHOOK_H__

//这个设计模式跟之前的设计模式最大的不同在于：不再使用对象组合，而是使用继承来实现新功能
//这个模式最大的用处在与设计框架

#include <iostream>
using namespace std;

class CaffeineBeverageWithHook
{
public:
	virtual ~CaffeineBeverageWithHook(){}

	//这个函数是模板函数，里面设置好了其它方法的调用方式
	//此函数应该禁止重写，但是编译器似乎不支持
	//下面加上了一个钩子函数
	//这个函数里面的虚函数不一定要是这个类里面声明的，也可以是外部类的虚函数，只要认识那个外部类就行。
	//认识的意思是，我知道外部类一定有这个虚函数函数，这样，当子对象传进来的时候就可以直接调用这个函数
	void prepareRecipe()
	{
		boilWater();
		brew();
		pourInCup();
		if(customerWantsCondiments())	//钩子函数，需要的时候重写就可以获得额外的功能
			addCondiments();
	}


	//纯虚函数，交给子类实现
	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	//钩子虚函数，这个虚函数是否需要重写交给子类来决定；
	//就算不重写，模板函数也能正常运行
	//如果重写，可能给模板函数提供新的功能
	virtual bool customerWantsCondiments()
	{
		return true;
	}

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