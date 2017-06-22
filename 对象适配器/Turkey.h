#ifndef __TURKET_H__
#define __TURKET_H__

class Turkey
{
public:
	virtual ~Turkey(){};			//故意不定义函数看会怎样,不行
	virtual void gobble() = 0;
	virtual void fly() = 0;	
};

#endif