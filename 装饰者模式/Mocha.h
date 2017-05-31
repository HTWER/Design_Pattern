#ifndef __MOCHA_H__
#define __MOCHA_H__

#include "Beverage.h"

class Mocha:public Beverage
{
public:
	Mocha(Beverage * beverage);
	~Mocha();

	//核心：保存装饰对象
	Beverage * beverage;

	//实现虚函数，产生装饰效应
	string getDescription();
	float cost();

private:
	Mocha();  //锁住默认构造函数，因为一定要有被装饰者
};

#endif


