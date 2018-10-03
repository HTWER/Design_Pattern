#ifndef __COMMAND_H__
#define __COMMAND_H__

class Command
{
public:
	virtual void execute() = 0;
	virtual void undo() = 0;		//用于撤销命令，将execute中的逻辑反转过来执行即可
};

#endif