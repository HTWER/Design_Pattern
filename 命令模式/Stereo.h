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
		cout << "�������Դ" << endl;
	}
	void off()
	{
		cout << "�ر������Դ" << endl;
	}
	void setCD()
	{
		cout << "�������" << endl;
	}
	void outCD()
	{
		cout << "��������" << endl;
	}
	void setVolume(int volume)
	{
		this->volume = volume;
		cout << "��������Ϊ" << volume << endl;
	}
	int getVolume()
	{
		return volume;
	}
};

#endif