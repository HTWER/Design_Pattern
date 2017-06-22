#ifndef __FLYBEHAVIOR_H__
#define __FLYBEHAVIOR_H__

//抽象类

class FlyBehavior
{
public:
	FlyBehavior(){};
	~FlyBehavior(){};
	virtual void Fly() = 0;   //纯虚函数
};

#endif


