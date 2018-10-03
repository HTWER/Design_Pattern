#ifndef __MACROCOMMAND_H__
#define __MACROCOMMAND_H__

#include "Command.h"

class MacroCommand:public Command
{
private:
	Command* *commands;
	int count;				//commands的长度

	MacroCommand(){}

public:
	MacroCommand(Command* commands[],int count)
	{
		this->commands = commands;
		this->count = count;
	}
	void execute()
	{
		for (int i = 0; i < count;i++)
		{
			commands[i]->execute();
		}
	}
	void undo()
	{
		for (int i = count - 1; i >= 0;i--)
		{
			commands[i]->undo();
		}
	}
};

#endif