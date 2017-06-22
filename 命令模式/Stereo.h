#ifndef __STEREO_H__
#define __STEREO_H__

#include <iostream>
using namespace std;

class Stereo
{
private:
	int volume;
public:
	Stereo()
	{
		volume = 1;
	}
	void on()
	{
		cout << "打开音响电源" << endl;
	}
	void off()
	{
		cout << "关闭音响电源" << endl;
	}
	void setCD()
	{
		cout << "放入光盘" << endl;
	}
	void outCD()
	{
		cout << "弹出光盘" << endl;
	}
	void setVolume(int volume)
	{
		this->volume = volume;
		cout << "设置音量为" << volume << endl;
	}
	int getVolume()
	{
		return volume;
	}
};

#endif