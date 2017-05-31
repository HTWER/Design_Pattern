#ifndef __MILK_H__
#define __MILK_H__

#include "Beverage.h"

class Milk:public Beverage   //核心：继承类型
{
public:
	Milk(Beverage * beverage);
	~Milk();
	
	//核心：保存装饰对象
	Beverage * beverage;

	//实现虚函数，产生装饰效应
	string getDescription();
	float cost();

private:
	Milk();  //锁住默认构造函数，因为一定要有被装饰者
};

#endif


