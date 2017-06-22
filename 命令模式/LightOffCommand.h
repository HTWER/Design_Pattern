#ifndef __LIGHTOFFCOMMAND_H__
#define __LIGHTOFFCPMMAND_H__

#include "Command.h"
#include "Light.h"

//联系现实具体机器：具体的Command规格设备（必须要实现execute函数）
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

	//实现具体命令
	void execute()
	{
		light->off();
	}

	//撤销
	void undo()
	{
		light->on();
	}
};

#endif