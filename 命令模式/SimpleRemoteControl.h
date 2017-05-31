#ifndef __SIMPLEREMOTECONTROL_H__
#define __SIMPLEREMOTECONTROL_H__

/************************************************************************/
/*命令模式最大的特点是将发出请求的对象和执行请求的对象进行解耦*/
/************************************************************************/

#include "Command.h"

//命令模式中遥控器的最简单原型：单插座单按钮

class SimpleRemoteControl
{
public:
	//联系现实具体机器：将命令对象插到遥控器接口上
	void setCommand(Command * command)	
	{
		slot = command;
	}
	//联系现实具体机器：按下启动按钮
	void buttonWasPressed()
	{
		slot->execute();
	}
private:
	//联系现实具体机器：Command规格的接口
	Command * slot;
};

#endif