#include <iostream>
#include "SimpleRemoteControl.h"
#include "RemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "Stereo.h"
#include "StereoOnWithCDCommand.h"
#include "StereoOffCommand.h"
#include "MacroCommand.h"
using namespace std;

int main()
{
	//////////////////////////ʹ�ü򵥵�ң����//////////////////////////
// 	//��������
// 	Light * light = new Light();
// 	LightOnCommand * lightOnCommand = new LightOnCommand(light);
// 	//��������
// 	SimpleRemoteControl simpleRemoteControl;
// 	simpleRemoteControl.setCommand(lightOnCommand);
// 	//��������
// 	simpleRemoteControl.buttonWasPressed();
// 
// 	delete light;
// 	delete lightOnCommand;
	//////////////////////////ʹ�ü򵥵�ң����//////////////////////////


	//////////////////////////ʹ�ø��ӵ�ң����//////////////////////////
	Light * light = new Light();
	LightOnCommand * lightOnCommand = new LightOnCommand(light);
	LightOffCommand * lightOffCommand = new LightOffCommand(light);

	Stereo * stereo = new Stereo();
	StereoOnWithCDCommand * stereoOnWithCDCommand = new StereoOnWithCDCommand(stereo);
	StereoOffCommand * stereoOffCommand = new StereoOffCommand(stereo);

	RemoteControl * remoteControl = new RemoteControl();
	remoteControl->setCommand(0, lightOnCommand,lightOffCommand);
	remoteControl->setCommand(1, stereoOnWithCDCommand, stereoOffCommand);

	remoteControl->onButtonWasPushed(0);
	remoteControl->undoButtonWasPushed();

	remoteControl->onButtonWasPushed(1);
	remoteControl->undoButtonWasPushed();

	remoteControl->offButtonWasPushed(0);
	remoteControl->undoButtonWasPushed();

	remoteControl->offButtonWasPushed(1);
	remoteControl->undoButtonWasPushed();

	//������
	cout << endl << "�����" << endl;
	Command* commands1[] = { lightOnCommand, stereoOnWithCDCommand };
	MacroCommand * macroCommand1 = new MacroCommand(commands1, 2);

	Command* command2[] = { stereoOffCommand, lightOffCommand };
	MacroCommand * macroCommand2 = new MacroCommand(command2, 2);

	remoteControl->setCommand(2, macroCommand1, macroCommand2);

	remoteControl->onButtonWasPushed(2);
	remoteControl->undoButtonWasPushed();

	remoteControl->offButtonWasPushed(2);
	remoteControl->undoButtonWasPushed();

	//���س�������
	cout << endl << "���س������ܣ�" << endl;
	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->onButtonWasPushed(0);

	remoteControl->undoButtonWasPushed();
	remoteControl->undoButtonWasPushed();
	remoteControl->undoButtonWasPushed();
	remoteControl->undoButtonWasPushed();


	//////////////////////////ʹ�ø��ӵ�ң����//////////////////////////

	system("pause");
	return 0;
}