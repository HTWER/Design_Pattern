#ifndef __TURKET_H__
#define __TURKET_H__

class Turkey
{
public:
	virtual ~Turkey(){};			//���ⲻ���庯����������,����
	virtual void gobble() = 0;
	virtual void fly() = 0;	
};

#endif