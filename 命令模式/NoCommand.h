#ifndef __NOCOMMAND_H__
#define __NOCOMMAND_H__

#include <iostream>
#include "Command.h"
using namespace std;

class NoCommand :public Command
{
public:
	void execute()
	{
		cout << "空命令，没有执行任何操作" << endl;
	}
	void undo()
	{
		cout << "空命令，无须撤销" << endl;
	}
};

#endif