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
		cout << "�����û��ִ���κβ���" << endl;
	}
	void undo()
	{
		cout << "��������볷��" << endl;
	}
};

#endif