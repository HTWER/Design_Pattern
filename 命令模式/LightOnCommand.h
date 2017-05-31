#ifndef __LIGHTONCOMMAND_H__
#define __LIGHTONCPMMAND_H__

#include "Command.h"
#include "Light.h"

//联系现实具体机器：具体的Command规格设备（必须要实现execute函数）
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

	//实现具体命令
	void execute()
	{
		light->on();
	}

	//撤销
	void undo()
	{
		light->off();
	}
};

#endif