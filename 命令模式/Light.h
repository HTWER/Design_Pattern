#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <iostream>
using namespace std;

//联系现实具体机器：具体设备要用到的一个外部对象
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