#ifndef __SIMPLEREMOTECONTROL_H__
#define __SIMPLEREMOTECONTROL_H__

/************************************************************************/
/*����ģʽ�����ص��ǽ���������Ķ����ִ������Ķ�����н���*/
/************************************************************************/

#include "Command.h"

//����ģʽ��ң���������ԭ�ͣ�����������ť

class SimpleRemoteControl
{
public:
	//��ϵ��ʵ������������������嵽ң�����ӿ���
	void setCommand(Command * command)	
	{
		slot = command;
	}
	//��ϵ��ʵ�������������������ť
	void buttonWasPressed()
	{
		slot->execute();
	}
private:
	//��ϵ��ʵ���������Command���Ľӿ�
	Command * slot;
};

#endif