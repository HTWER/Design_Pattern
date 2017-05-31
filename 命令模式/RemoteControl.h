#ifndef __REMOTECONTROL_H__
#define __REMOTECONTROL_H__

#include <vector>
#include "Command.h"
#include "NoCommand.h"

//������ఴť,���ϳ�������
//�����û���κξ�������ܣ�������������������

class RemoteControl
{
private:
	//����ģʽ�ĺ���--ָ�����飺�����洢�����ӿڵ�����
	//����Ԫ��һ������null����ʹû������Ҳ��NoCommand������
	//��ЩԪ�ؾ��ǲ������������ö��ٸ��������鶼û��ν����������������ţ�
	Command* *onCommands;
	Command* *offCommands;

	//������������ڲ�ʹ�õĿ������û������Ľӿڷ���һ������
	Command * noCommand;

	//��¼���һ��ִ�е����Ϊ���Ժ�����
	//�������ң�����ϵ�����������ˣ���ô�������ܾͻ�������⣻����˵��Ҫʵ�ֳ������ܣ��Ͳ��ܽ����ϵ��������
	vector<Command*> undoCommands;			//����ʵ�ֳ����������.......................................
public:
	RemoteControl()
	{
		//��ʼ��
		onCommands = new Command*[7];
		offCommands = new Command*[7];

		//���������Ͽ�����
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
		//�ͷŲ����ϵ�����
		for (int i = 0; i < 7; i++)
		{
			if (onCommands[i]!=noCommand)
				delete onCommands[i];
			if (offCommands[i]!=noCommand)
				delete offCommands[i];
		}

		//�ͷŲ���
		delete[] onCommands;
		delete[] offCommands;

		//�ͷſն���
		delete noCommand;
	}

	//��������
	void setCommand(int slot, Command * onCommand, Command * offCommand)
	{
		onCommands[slot] = onCommand;
		offCommands[slot] = offCommand;
	}

	//����������ť
	void onButtonWasPushed(int slot)
	{
		onCommands[slot]->execute();
		//���¼�¼
		//undoCommand = onCommands[slot];
		undoCommands.push_back(onCommands[slot]);
	}

	//���¹رհ�ť
	void offButtonWasPushed(int slot)
	{
		offCommands[slot]->execute();
		//���¼�¼
		//undoCommand = offCommands[slot];
		undoCommands.push_back(offCommands[slot]);
	}

	//���³�����ť
	void undoButtonWasPushed()
	{
		//undoCommand->undo();
		if (undoCommands.empty() != true)
		{
			(undoCommands.back())->undo();
			undoCommands.pop_back();
		}
		else
			cout << "�޷���������" << endl;
		
	}
};


#endif