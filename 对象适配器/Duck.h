#ifndef __DUCK_H__
#define __DUCK_H__

//������
class Duck
{
public:
	virtual ~Duck(){}			//����������������д���麯��
	virtual void quack() = 0;
	virtual void fly() = 0;
};

#endif