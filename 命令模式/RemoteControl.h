#ifndef __REMOTECONTROL_H__
#define __REMOTECONTROL_H__

#include <vector>
#include <map>
#include "Command.h"
#include "NoCommand.h"

class RemoteControl
{
private:
	//{编号:操作}
	map<int, Command*> onCommands;
	map<int, Command*> offCommands;

	//用栈来记录历史操作
	vector<Command*> undoCommands;
public:

	~RemoteControl()
	{
		map<int, Command*>::iterator it;
		for (it = onCommands.begin(); it != onCommands.end(); it++)
			delete (*it).second;
		for (it = offCommands.begin(); it != offCommands.end(); it++)
			delete (*it).second;
	}

	void setCommand(int slot, Command * onCommand, Command * offCommand)
	{
		onCommands[slot] = onCommand;
		offCommands[slot] = offCommand;
	}

	//按下启动按钮
	void on(int slot)
	{
		onCommands[slot]->execute();
		undoCommands.push_back(onCommands[slot]);
	}

	//按下关闭按钮
	void off(int slot)
	{
		offCommands[slot]->execute();
		undoCommands.push_back(offCommands[slot]);
	}

	//按下撤销按钮
	void undo()
	{
		if (undoCommands.empty() != true)
		{
			(undoCommands.back())->undo();
			undoCommands.pop_back();
		}
		else
			cout << "无法继续撤销" << endl;
	}

	//void redo()
};


#endif