#ifndef __BEVERAGE__H_
#define __BEVERAGE__H_

#include <string>
using namespace std;

//������
class Beverage
{
public:
	Beverage();
	~Beverage();

	//д�ɴ��麯���麯��
	virtual string getDescription() = 0;
	virtual float cost() = 0;

	//��������
	string description;
};

#endif



