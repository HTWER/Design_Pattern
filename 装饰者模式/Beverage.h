#ifndef __BEVERAGE__H_
#define __BEVERAGE__H_

#include <string>
using namespace std;

//抽象类
class Beverage
{
public:
	Beverage();
	~Beverage();

	//写成纯虚函数
	virtual string getDescription() = 0;
	virtual float cost() = 0;

	//饮料名字
	string description;
};

#endif



