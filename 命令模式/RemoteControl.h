#ifndef __REMOTECONTROL_H__
#define __REMOTECONTROL_H__

#include <vector>
#include "Command.h"
#include "NoCommand.h"

//多插座多按钮,加上撤销功能
//这个类没有任何具体命令功能，仅仅是用来驱动命令

class RemoteControl
{
private:
	//命令模式的核心--指针数组：用来存储各个接口的命令
	//数组元素一定不是null，即使没有命令也用NoCommand来代替
	//这些元素就是插座，具体设置多少个、多少组都没所谓，看具体情况来安排；
	Command* *onCommands;
	Command* *offCommands;

	//空命令：整个类内部使用的空命令，给没有命令的接口分配一个对象
	Command * noCommand;

	//记录最近一次执行的命令，为了以后撤销；
	//但是如果遥控器上的命令被拔下来了，那么撤销功能就会出现问题；就是说想要实现撤销功能，就不能将插上的命令拔下
	vector<Command*> undoCommands;			//尝试实现撤销多个命令.......................................
public:
	RemoteControl()
	{
		//初始化
		onCommands = new Command*[7];
		offCommands = new Command*[7];

		//给插座附上空命令
		noCommand = new NoCommand();
		for (int i = 0; i < 7;i++)
		{
			onCommands[i] = noCommand;
			offCommands[i] = noCommand;
		}

		//
		//undoCommand = noCommand;
	}

	~RemoteControl()
	{
		//释放插座上的命令
		for (int i = 0; i < 7; i++)
		{
			if (onCommands[i]!=noCommand)
				delete onCommands[i];
			if (offCommands[i]!=noCommand)
				delete offCommands[i];
		}

		//释放插座
		delete[] onCommands;
		delete[] offCommands;

		//释放空对象
		delete noCommand;
	}

	//插上命令
	void setCommand(int slot, Command * onCommand, Command * offCommand)
	{
		onCommands[slot] = onCommand;
		offCommands[slot] = offCommand;
	}

	//按下启动按钮
	void onButtonWasPushed(int slot)
	{
		onCommands[slot]->execute();
		//更新记录
		//undoCommand = onCommands[slot];
		undoCommands.push_back(onCommands[slot]);
	}

	//按下关闭按钮
	void offButtonWasPushed(int slot)
	{
		offCommands[slot]->execute();
		//更新记录
		//undoCommand = offCommands[slot];
		undoCommands.push_back(offCommands[slot]);
	}

	//按下撤销按钮
	void undoButtonWasPushed()
	{
		//undoCommand->undo();
		if (undoCommands.empty() != true)
		{
			(undoCommands.back())->undo();
			undoCommands.pop_back();
		}
		else
			cout << "无法继续撤销" << endl;
		
	}
};


#endif