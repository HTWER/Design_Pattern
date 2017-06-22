#ifndef __DUCK_H__
#define __DUCK_H__

//抽象类
class Duck
{
public:
	virtual ~Duck(){}			//基类的析构函数最好写成虚函数
	virtual void quack() = 0;
	virtual void fly() = 0;
};

#endif