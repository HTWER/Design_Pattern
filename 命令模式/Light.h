#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <iostream>
using namespace std;

class Light
{
public:
	void on()
	{
		cout << "开灯！" << endl;
	}
	void off()
	{
		cout << "关灯！" << endl;
	}
};

#endif