#ifndef __LIGHTONCOMMAND_H__
#define __LIGHTONCPMMAND_H__

#include "Command.h"
#include "Light.h"

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

	void execute()
	{
		light->on();
	}

	void undo()
	{
		light->off();
	}
};

#endif