#ifndef __TURKEYADAPTER_H__
#define __TURKEYADAPTER_H__

//三种模式的对比：
//装饰者：为了保持不管如何包装都是同一个类型的东西，继承的类 和 包装的类 肯定是相同的，包装的类一般只能有一个
//对象适配器：为了转换接口， 继承的类 和 包装的类 肯定是不同的，包装的类可以有多个
//外观模式：为了简化使用方式，将多个类的功能集成；所以一般不继承别的类，但是有包装的类,包装的类可以随意；(由于外观模式比较简单，没有另开一个项目来写代码)

//还有一种适配器模式叫做类适配器，特点是被适配的类也是被继承下来的而不是包装在内，这个模式要用到多重继承

#include "Duck.h"
#include "Turkey.h"

//外壳是Duck，里面却是Turkey
//利用对象组合的方式实现对象适配器
class TurkeyAdapter :public Duck
{
private:
	Turkey * turkey;
public:
	TurkeyAdapter(Turkey * turkey)
	{
		this->turkey = turkey;
	}
	void quack()
	{
		turkey->gobble();
	}
	void fly()
	{
		for (int i = 0; i < 5;i++)
		{
			turkey->fly();
		}
	}
};

#endif