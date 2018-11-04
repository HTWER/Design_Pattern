#ifndef __DUCK_H__
#define __DUCK_H__

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	//接口;接口必须是指针或者引用;可以热插拔
	//接口是运行架构在这里搭建好，继承下来的类就可以直接使用
	FlyBehavior * m_flyBehavior;
	QuackBehavior * m_quackBahavior;

	//实函数
	void swin();            //所有的鸭子都会游泳,且游泳的方式都相同
	void SetFlyBehavior(FlyBehavior * flyBehavior);			//为接口FlyBehavior连接芯片的链接函数
	void SetQuackBehavior(QuackBehavior * quackBahavior);	//为接口QuackBehavior连接芯片的链接函数
	void PerformFly();      //调用接口的函数
	void PerformQuack();    //调用接口的函数

	//纯虚函数
	virtual void Display() = 0; //每个鸭子的样子都不同，用接口来实现更好

	Duck();
	~Duck();
};


#endif

