#ifndef __LIGHTOFFCOMMAND_H__
#define __LIGHTOFFCPMMAND_H__

#include "Command.h"
#include "Light.h"

//��ϵ��ʵ��������������Command����豸������Ҫʵ��execute������
class LightOffCommand :public Command
{
private:
	Light * light;
	LightOffCommand(){};
public:
	LightOffCommand(Light * light)
	{
		this->light = light;
	}

	//ʵ�־�������
	void execute()
	{
		light->off();
	}

	//����
	void undo()
	{
		light->on();
	}
};

#endif