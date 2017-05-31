#ifndef __LIGHTONCOMMAND_H__
#define __LIGHTONCPMMAND_H__

#include "Command.h"
#include "Light.h"

//��ϵ��ʵ��������������Command����豸������Ҫʵ��execute������
class LightOnCommand:public Command
{
private:
	Light * light;
	LightOnCommand(){};
public:
	LightOnCommand(Light * light)
	{
		this->light = light;
	}

	//ʵ�־�������
	void execute()
	{
		light->on();
	}

	//����
	void undo()
	{
		light->off();
	}
};

#endif