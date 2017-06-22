#ifndef __QUACKBEHAVIOR_H__
#define __QUACKBEHAVIOR_H__

class QuackBehavior
{
public:
	QuackBehavior(){};
	~QuackBehavior(){};
	virtual void Quack() = 0;   //纯虚函数
};


#endif


